#ifndef mqttheader
#define mqttheader
#endif

// FIXME:
// 온실 각동의 정의 예) 온실 1동 측창들 : GH_SHUTTER_1
#define GH_SHUTTER_1
// #define GH_SHUTTER_2
// #define GH_SHUTTER_3
// #define GH_SHUTTER_4
// MQTT 메세지 등 정의
#ifdef GH_SHUTTER_1
#define CLIENT_NAME     "iGH_SHUTTER_1"  //혹시나 싶어 쓴것. EspMQTTClient.h에 연동
#define MQTTID          "id_MTR_CTRL_GH1_MQTT"
#define MQTT_PUB_E1_CURR "Sensor/GH1/MTR_CURR/E1" //하우스1동 동편 1중
#define MQTT_PUB_E2_CURR "Sensor/GH1/MTR_CURR/E2" //하우스1동 동편 2중
#define MQTT_PUB_W1_CURR "Sensor/GH1/MTR_CURR/W1" //하우스1동 서편 1중
#define MQTT_PUB_W2_CURR "Sensor/GH1/MTR_CURR/W2" //하우스1동 서편 2중
#define MQTT_SUB_E1_CMD "Command/GH1/MTR/W1" // 하우스1동 동편 1중 동작 명령
#define MQTT_SUB_E2_CMD "Command/GH1/MTR/W2" // 하우스1동 동편 2중 동작 명령
#define MQTT_SUB_W1_CMD "Command/GH1/MTR/E1" // 하우스1동 서편 1중 동작 명령
#define MQTT_SUB_W2_CMD "Command/GH1/MTR/E2" // 하우스1동 서편 2중 동작 명령
#define MQTT_E1_MTR_CURR_ERROR  "Error/GH1/MTR_CURR/E1" // 모터 over current이냐? 리미트에 걸렸나?
#define MQTT_E2_MTR_CURR_ERROR  "Error/GH1/MTR_CURR/E2"
#define MQTT_W1_MTR_CURR_ERROR  "Error/GH1/MTR_CURR/W1"
#define MQTT_W2_MTR_CURR_ERROR  "Error/GH1/MTR_CURR/W2"
#define MQTTUSER        "farmmain"
#define MQTTPASS        "eerrtt"
#define WILLTOPIC       "Lastwill/GH1/MTR_CURR/Status"
#define WILLMSG         "off line"
#endif

#ifdef GH_SHUTTER_2
#define CLIENT_NAME     "iGH_SHUTTER_2"  //혹시나 싶어 쓴것. EspMQTTClient.h에 연동
#define MQTTID          "id_MTR_CTRL_GH2_MQTT"
#define MQTT_PUB_E2_CURR "Sensor/GH2/MTR_CURR/E2" //하우스2동 동편 2중
#define MQTT_PUB_E1_CURR "Sensor/GH2/MTR_CURR/E1" //하우스2동 동편 1중
#define MQTT_PUB_W1_CURR "Sensor/GH2/MTR_CURR/W1" //하우스2동 서편 1중
#define MQTT_PUB_W2_CURR "Sensor/GH2/MTR_CURR/W2" //하우스2동 서편 2중
#define MQTT_SUB_E1_CMD "Command/GH2/MTR/W1" // 하우스2동 동편 1중 동작 명령
#define MQTT_SUB_E2_CMD "Command/GH2/MTR/W2" // 하우스2동 동편 2중 동작 명령
#define MQTT_SUB_W1_CMD "Command/GH2/MTR/E1" // 하우스2동 서편 1중 동작 명령
#define MQTT_SUB_W2_CMD "Command/GH2/MTR/E2" // 하우스2동 서편 2중 동작 명령
#define MQTT_E1_MTR_CURR_ERROR  "Error/GH2/MTR_CURR/E1" // 모터 over current이냐? 리미트에 걸렸나?
#define MQTT_E2_MTR_CURR_ERROR  "Error/GH2/MTR_CURR/E2"
#define MQTT_W1_MTR_CURR_ERROR  "Error/GH2/MTR_CURR/W1"
#define MQTT_W2_MTR_CURR_ERROR  "Error/GH2/MTR_CURR/W2"
#define MQTTUSER        "farmmain"
#define MQTTPASS        "eerrtt"
#define WILLTOPIC       "Lastwill/GH2/MTR_CURR/Status"
#define WILLMSG         "off line"
#endif

#ifdef GH_SHUTTER_3
#define CLIENT_NAME     "iGH_SHUTTER_3"  //혹시나 싶어 쓴것. EspMQTTClient.h에 연동
#define MQTTID          "id_MTR_CTRL_GH3_MQTT"
#define MQTT_PUB_E1_CURR "Sensor/GH3/MTR_CURR/E1" //하우스3동 동편 1중
#define MQTT_PUB_E2_CURR "Sensor/GH3/MTR_CURR/E2" //하우스3동 동편 2중
#define MQTT_PUB_W1_CURR "Sensor/GH3/MTR_CURR/W1" //하우스3동 서편 1중
#define MQTT_PUB_W2_CURR "Sensor/GH3/MTR_CURR/W2" //하우스3동 서편 2중
#define MQTT_SUB_E1_CMD "Command/GH3/MTR/W1" // 하우스3동 동편 1중 동작 명령
#define MQTT_SUB_E2_CMD "Command/GH3/MTR/W2" // 하우스3동 동편 2중 동작 명령
#define MQTT_SUB_W1_CMD "Command/GH3/MTR/E1" // 하우스3동 서편 1중 동작 명령
#define MQTT_SUB_W2_CMD "Command/GH3/MTR/E2" // 하우스3동 서편 2중 동작 명령
#define MQTT_E1_MTR_CURR_ERROR  "Error/GH3/MTR_CURR/E1" // 모터 over current이냐? 리미트에 걸렸나?
#define MQTT_E2_MTR_CURR_ERROR  "Error/GH3/MTR_CURR/E2"
#define MQTT_W1_MTR_CURR_ERROR  "Error/GH3/MTR_CURR/W1"
#define MQTT_W2_MTR_CURR_ERROR  "Error/GH3/MTR_CURR/W2"
#define MQTTUSER        "farmmain"
#define MQTTPASS        "eerrtt"
#define WILLTOPIC       "Lastwill/GH3/MTR_CURR/Status"
#define WILLMSG         "off line"
#endif

#ifdef GH_SHUTTER_4
#define CLIENT_NAME     "iGH_SHUTTER_4"  //혹시나 싶어 쓴것. EspMQTTClient.h에 연동
#define MQTTID          "id_MTR_CTRL_GH4_MQTT"
#define MQTT_PUB_E1_CURR "Sensor/GH4/MTR_CURR/E1" //하우스4동 동편 1중
#define MQTT_PUB_E2_CURR "Sensor/GH4/MTR_CURR/E2" //하우스4동 동편 2중
#define MQTT_PUB_W1_CURR "Sensor/GH4/MTR_CURR/W1" //하우스4동 서편 1중
#define MQTT_PUB_W2_CURR "Sensor/GH4/MTR_CURR/W2" //하우스4동 서편 2중
#define MQTT_SUB_E1_CMD "Command/GH4/MTR/W1" // 하우스4동 동편 1중 동작 명령
#define MQTT_SUB_E2_CMD "Command/GH4/MTR/W2" // 하우스4동 동편 2중 동작 명령
#define MQTT_SUB_W1_CMD "Command/GH4/MTR/E1" // 하우스4동 서편 1중 동작 명령
#define MQTT_SUB_W2_CMD "Command/GH4/MTR/E2" // 하우스4동 서편 2중 동작 명령
#define MQTT_E1_MTR_CURR_ERROR  "Error/GH4/MTR_CURR/E1" // 모터 over current이냐? 리미트에 걸렸나?
#define MQTT_E2_MTR_CURR_ERROR  "Error/GH4/MTR_CURR/E2"`
#define MQTT_W1_MTR_CURR_ERROR  "Error/GH4/MTR_CURR/W1"
#define MQTT_W2_MTR_CURR_ERROR  "Error/GH4/MTR_CURR/W2"
#define MQTTUSER        "farmmain"
#define MQTTPASS        "eerrtt"
#define WILLTOPIC       "Lastwill/GH4/MTR_CURR/Status"
#define WILLMSG         "off line"
#endif