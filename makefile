mqtt_example : main.c mqtt.c
	cc -o mqtt_example main.c mqtt.c -lpaho-mqtt3c

clean :
	rm mqtt_example

