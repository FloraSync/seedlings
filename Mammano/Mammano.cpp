/*
  Mammano - PWM toolkit for ESP32
  Built by Schuyler Ankele 2023
*/

// include this library's description file
#include "Mammano.h"

// include description files for other libraries used (if any)
#include "HardwareSerial.h"
// Pull in ledcWrite() from the ESP32 Arduino core
#include "esp32-hal-ledc.h"

// Constructor /////////////////////////////////////////////////////////////////
// Function that handles the creation and setup of instances

Mammano::Mammano(int freq = 12000, int res = 8)
{
  // setting PWM properties - default config for pulsing pins
  frequency = freq;
  resolution = res;
}

// Public Methods //////////////////////////////////////////////////////////////
// Functions available in Wiring sketches, this library, and other libraries

void Mammano:(void)
{
  // eventhough this function is public, it can access
  // and modify this library's private variables
  Serial.print("Running in the library");
}
