#include <SHT1x.h>

// Specify data and clock connections and instantiate SHT1x object
#define dataPin  10
#define clockPin 11
// voltage is optional, defaults to 5
#define VOLTAGE 3.3

SHT1x sht0(dataPin, clockPin, VOLTAGE);

void setup(){
  Serial.begin(57600);
  Serial.println("SHT1x Sensor Test");
}

float temp0;
float hum0;

void loop(){
  
  sht0.requestTemperature();
  temp0 = sht0.parseTemperatureC(sht0.readInTemperature());
 
  sht0.requestHumidity();
  hum0 = sht0.parseHumidity(sht0.readInHumidity());
  
  Serial.print("SENSOR #0: ");
  Serial.print("Temperature: ");
  Serial.print(temp0);
  Serial.print(" C, Humidity: ");
  Serial.print(hum0);
  Serial.println("%");                 
}


