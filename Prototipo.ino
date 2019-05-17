#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <mongocxx/client.hpp>
#include <mongocxx/instance.hpp>

//#include <WiFiClientSecure.h>

//-------------------VARIABLES GLOBALES--------------------------

const int inputPin = 16;
int value = 0;

int contconexion = 0;

const char *ssid = "UMB_Docentes";
const char *password = "Docentes2017!";

mongocxx::instance inst;
mongocxx::client conn
{
  mongocxx::uri { "mongodb+srv://Leo7962:XperiaX7962@clusterumb-8hedx.gcp.mongodb.net/test?retryWrites=true" }
}
mongocxx::database db = conn["test"];

try
{
  status = client.admin.command("serverStatus");
  serial.println("Conectado a Mongo");
}
catch(const std::exception& e)
{
  std::cerr << e.what() << '\n';
}


//-------- Fin de Variables------------------
void setup()
{
  Serial.begin(115200);
  pinMode(inputPin, INPUT);

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
