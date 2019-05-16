#include <ESP8266WiFi.h>
#include <WiFiClient.h>
//#include <WiFiClientSecure.h>

//-------------------VARIABLES GLOBALES--------------------------

const int inputPin = 16;
int value = 0;

int contconexion = 0;

const char *ssid = "UMB_Docentes";
const char *password = "Docentes2017!";

char host[48];


//-------- Fin de Variables------------------

void setup() {
 Serial.begin(115200);
 pinMode(inputPin,INPUT);

}
int c=0;
void loop() {
  value = digitalRead(inputPin); //Lectura digital del sensor
 c++;
  //Mandar mensaje a puerto serie en funcion del valor leido

  if (value == LOW) {
   
    Serial.println ("Encendido :");
  //  Serial.println (c);
  }
  else {
     Serial.println("Apagado" );
  }
  delay(100);

}
