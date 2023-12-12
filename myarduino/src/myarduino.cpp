#include "myarduino.h"
#include "mqttheader.h"

/**
* @brief  MQTT에 연결한다.
* @param  PubSubClient client
*/
void reconnect(PubSubClient& client)
{
    int errCnt = 0;
    while(!client.connected()) {
        // debug 
        Serial.print("Attempting MQTT connection...");
        if(client.connect(MQTTID, MQTTUSER, MQTTPASS, WILLTOPIC, 0, 1, WILLMSG)) {
            // debug
            Serial.println("connected");
            client.publish(WILLTOPIC, "on_line", 1);
            // 아래와 같이 선언하는 것이 가독성이 더 좋다. 
            // FIXME: 새로운 상황이 생길 때 아래 토픽을 수정한다.
            client.subscribe(MQTT_SUB_E1_CMD);
            client.subscribe(MQTT_SUB_E2_CMD);
            client.subscribe(MQTT_SUB_W1_CMD);
            client.subscribe(MQTT_SUB_W2_CMD);
        } else {
            Serial.print("failed, rc=");
            Serial.print(client.state());
            Serial.println("\t try again in 5 seconds");
            delay(5000);
            if(errCnt > 10) resetFunc();
            else errCnt++;
        }
    }
}
