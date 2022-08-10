#include <WiFi.h>
#include <PubSubClient.h>
#include <Wire.h>
#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
  

// Replace the next variables with your SSID/Password combination
const char* ssid = "TP-Link_9D3A";
const char* password = "19722955";

// Add your MQTT Broker IP address, example:
//const char* mqtt_server = "192.168.1.144";
const char* mqtt_server = "192.168.1.101";

WiFiClient espClient;
PubSubClient client(espClient);
long lastMsg = 0;
char msg[50];
int value = 0;

#include <ESP32Servo.h>
#include <analogWrite.h>

#include <ESP32Tone.h>
#include <ESP32PWM.h>


Servo myservo;

int pos = 0;
int servoPin = 18;

void setup() {

  // default settings
  // (you can also pass in a Wire library object like &Wire2)
  //status = bme.begin();  
 
  setup_wifi();
  client.setServer(mqtt_server, 1883);
  client.setCallback(callback);

ESP32PWM::allocateTimer(0);
ESP32PWM::allocateTimer(1);
ESP32PWM::allocateTimer(2);
ESP32PWM::allocateTimer(3);
myservo.setPeriodHertz(50);
myservo.attach(servoPin, 500, 2300);

   

   // Setup Serial Monitor
   Serial.begin (115200);
   


}



void setup_wifi() {
  delay(10);
  // We start by connecting to a WiFi network
  Serial.println();
  Serial.print("Connecting to ");
  Serial.println(ssid);

  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("");
  Serial.println("WiFi connected");
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());
}

void callback(char* topic, byte* payload, unsigned int length) {

  
  payload[length] = '\0'; 
  int messageTemp = atoi((char *)payload);
  Serial.println(messageTemp);

  // Feel free to add more if statements to control more GPIOs with MQTT

  // If a message is received on the topic esp32/output, you check if the message is either "on" or "off". 
  // Changes the output state according to the message
  if (String(topic) == "vehicle/pitch") {

    myservo.write(messageTemp+90);
  }
}

void reconnect() {
  // Loop until we're reconnected
  while (!client.connected()) {
    Serial.print("Attempting MQTT connection...");
    // Attempt to connect
    if (client.connect("ESP32ClientServo","","")) {
      Serial.println("connected");
      // Subscribe
      client.subscribe("vehicle/pitch");
    } else {
      Serial.print("failed, rc=");
      Serial.print(client.state());
      Serial.println(" try again in 5 seconds");
      // Wait 5 seconds before retrying
      delay(5000);
    }
  }
}
void loop() {
  if (!client.connected()) {
    reconnect();
  }
  client.loop();

   
  }
