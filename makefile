mqtt_example : main.c mqtt.c
	cc -o mqtt_example main.c mqtt.c -lpaho-mqtt3c -pthread

clean :
	rm mqtt_example

