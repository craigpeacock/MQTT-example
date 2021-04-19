# MQTT Example

This is a Linux based ANSI C example code for publishing and subscribing to MQTT topics using the Eclipse Paho library:
https://www.eclipse.org/paho/

It publishes the time every 60 seconds to the home/time topic. It also subscribes to this topic and hence receives the message back from the broker. 

## Installation

To compile this code, one must first have the Paho MQTT client library installed. On an Intel based Linux system (My development platform is ubuntu), the easest way is to download the precomplied binaries and headers, and install them to /usr 

```
wget https://github.com/eclipse/paho.mqtt.c/releases/download/v1.3.8/Eclipse-Paho-MQTT-C-1.3.8-Linux.tar.gz
tar -xzf Eclipse-Paho-MQTT-C-1.3.8-Linux.tar.gz --strip-components=1 --directory /usr
```

## API documentation
Documentation on the API can be found at:
https://www.eclipse.org/paho/files/mqttdoc/MQTTClient/html/index.html

