SHT1x Temperature / Humidity Sensor Library for Arduino
=======================================================
Copyright 2009 Jonathan Oxer <jon@oxer.com.au> / <www.practicalarduino.com>
Copyright 2008 Maurice Ribble <ribblem@yahoo.com> / <www.glacialwanderer.com>

Provides a simple interface to the SHT1x series (SHT10, SHT11, SHT15)
temperature / humidity sensors from Sensirion (www.sensirion.com).
These sensors use a "2-wire" communications buss that is similar to I2C
and can co-exist on the same physical wire as I2C devices.

Installation
------------
Download the directory "SHT1x" and move it into the "libraries"
directory inside your sketchbook directory, then restart the Arduino
IDE. You will then see it listed under File->Examples->SHT1x.

Usage
-----
The library is instantiated as an object with methods provided to read
relative humidity and temperature. Include it in your sketch and then
create an object, specifying the pins to use for communication with the
sensor:

    #include <SHT1x.h>
    #define dataPin 10
    #define clockPin 11
    SHT1x sht1x(dataPin, clockPin);

You can then call methods on that object within your program. In this
example we created an object called "sht1x", but it could have been
called whatever you like. A complete example program is included with
the library and can be accessed from the File->Examples->SHT1x menu.

### float sht1x.readTemperatureC() ###
Returns a float within the valid range of the sensor of -40 to +123.8.
A value of -40 is returned in the event of a communications error with
the module.

### float sht1x.readTemperatureF() ###
Returns a float within the valid range of the sensor of -40 to +254.9C.
A value of -40 is returned in the event of a communications error with
the module.

### float sht1x.readHumidity() ###
Returns a float within the valid range of the sensor of 0 to 100%.
A value of -4.4 is returned in the event of a communication error with
the module.
