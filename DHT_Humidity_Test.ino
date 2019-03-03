#include <dht.h>

dht DHT;

#define DHT11_PIN 7

void setup(){
  Serial.begin(9600);
}

void loop()
{
  int chk = DHT.read11(DHT11_PIN);
  if(DHT.temperature > -10)
  {
    Serial.print("Temperature = ");
    double conv = DHT.temperature;
    conv = conv *1.8;
    conv = conv+32;
    Serial.print(conv);
    Serial.println(" F");
  }
  if(DHT.humidity > -10)
  {
    Serial.print("Humidity = ");
    Serial.print(DHT.humidity);
    Serial.println("%");
  }
  
  delay(500);
}
