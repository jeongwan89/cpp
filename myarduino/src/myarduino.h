#include <PubSubClient.h>

/// @brief MQTT에 연결한다. MQTT서버에 대한 #define은 mqttheader.h에 정의되어 있다.
/// @param client 
void reconnect(PubSubClient& client);
// void subscribe(PubSubClient& client);

void (*resetFunc)(void) = 0; 
