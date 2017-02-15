/**
 *  MQTTClient - abstract class to implement MQTT client class
 */

#ifndef MQTTClient_h
#define MQTTClient_h
#include "spark_wiring_tcpclient.h"

class MQTTClient {
	public:   
	virtual bool connect(const char* id);
	virtual bool connect(const char* id, const char* user, const char* pass);
	virtual bool connect(const char* id, const char* willTopic, uint8_t willQos, bool willRetain, const char* willMessage);
	virtual bool connect(const char* id, const char* user, const char* pass, const char* willTopic, uint8_t willQos, bool willRetain, const char* willMessage);
	virtual void disconnect();
	virtual bool publish(const char* topic, const char* payload);
	virtual bool publish(const char* topic, const char* payload, bool _retained);
	virtual bool publish(const char* topic, const uint8_t * payload, unsigned int plength);
	virtual bool publish(const char* topic, const uint8_t * payload, unsigned int plength, bool _retained);
	virtual bool publish_P(const char* topic, const uint8_t * payload, unsigned int plength, bool _retained);
	virtual bool subscribe(const char* topic);
	virtual bool subscribe(const char* topic, uint8_t qos);
	virtual bool unsubscribe(const char* topic);
	virtual bool loop();
	virtual bool connected();
    virtual int state();
  };
#endif
