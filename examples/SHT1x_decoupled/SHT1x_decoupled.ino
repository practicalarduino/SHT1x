#include <SHT1x.h>

// Specify data and clock connections and instantiate SHT1x object
#define DATA  2
#define CLOCK 3
// voltage is optional, defaults to 5
#define VOLTAGE 3.3

SHT1x sht0(DATA, CLOCK, VOLTAGE);

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
  //it is important to parse humidity AFTER reading in temperature
  //since parsing formula adjusts using temperature
  hum0 = sht0.parseHumidity(sht0.readInHumidity());
  
  Serial.print("SENSOR #0: ");
  Serial.print("Temperature: ");
  Serial.print(temp0);
  Serial.print(" C, Humidity: ");
  Serial.print(hum0);
  Serial.println("%");                 
}


