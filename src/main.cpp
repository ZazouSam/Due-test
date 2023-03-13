#include <Arduino.h>
#include <Wire.h>
#include "Clavier.h"
#include "Wire_Clavier.h"

void setup()
{
  Wire.begin(2);
  // Wire1.begin(3);
  Wire.onRequest(requestEvent); // register event
  Serial.begin(115200);
  BTN_setup();
}

void loop()
{
  BTN_I2C_Serial();
}
