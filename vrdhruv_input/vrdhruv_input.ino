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


 #define inputCLK 4
 #define inputDT 5

 float counter = 0; 
 float x;
 float currentStateCLK;
 float previousStateCLK; 
  int timeline = 5000;







void setup() {

  // default settings
  // (you can also pass in a Wire library object like &Wire2)
  //status = bme.begin();  
 
  setup_wifi();
  client.setServer(mqtt_server, 1883);



   // Set encoder pins as inputs  
   pinMode (inputCLK,INPUT);
   pinMode (inputDT,INPUT);
   
   // Setup Serial Monitor
   Serial.begin (115200);
   

   // Read the initial state of inputCLK
   // Assign to previousStateCLK variable
   previousStateCLK = digitalRead(inputCLK);
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



void reconnect() {
  // Loop until we're reconnected
  while (!client.connected()) {
    Serial.print("Attempting MQTT connection...");
    // Attempt to connect
    if (client.connect("ESP32Client","","")) {
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

  int analogValue = analogRead(34);
  float angle = ((analogValue/2047.5)-1)*-1;
  char ang[20];
   sprintf(ang, "%f", angle);//make the number into string using sprintf function

   
   client.publish("vehicle/steer", ang);


    currentStateCLK = digitalRead(inputCLK);
    
   // If the previous and the current state of the inputCLK are different then a pulse has occured
   if (currentStateCLK != previousStateCLK){ 
       
     // If the inputDT state is different than the inputCLK state then 
     // the encoder is rotating counterclockwise
     if (digitalRead(inputDT) != currentStateCLK) { 
       counter-=1;
       
      
     } else {
       // Encoder is rotating clockwise
       counter+=1;
       
     }
    

   } 
   // Update previousStateCLK with the current state
   previousStateCLK = currentStateCLK; 
char str[20];
//Serial.println(timeline);
//Serial.println(millis()-timeline);
   if(millis()-timeline>=500){
//    Serial.println(counter/-30);
    x = counter/-30;
    counter=0;
    timeline=millis();
   
   
   sprintf(str, "%f", x);//make the number into string using sprintf function

   
   client.publish("vehicle/speed", str);
 
   }

   
  }
