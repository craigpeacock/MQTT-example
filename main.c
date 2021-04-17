#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <time.h>
#include "MQTTClient.h"
#include "mqtt.h"

int main(int argc, char **argv)
{
	MQTTClient client;

	time_t now;
	struct tm timeinfo;
	unsigned char timestr[40];

	client = MQTT_connect("tcp://localhost:1883", "username", "password");

	MQTT_sub(client, "home/time");

	while (1) {

		// Get current time and publish it
		time(&now);
		localtime_r(&now, &timeinfo);
		sprintf(timestr, "%04d-%02d-%02d %02d:%02d:%02d",
			timeinfo.tm_year + 1900,
			timeinfo.tm_mon + 1,
			timeinfo.tm_mday,
			timeinfo.tm_hour,
			timeinfo.tm_min,
			timeinfo.tm_sec);

		MQTT_pub(client, "home/time",timestr);
		sleep(60);
	}
	MQTT_disconnect(client);
}

