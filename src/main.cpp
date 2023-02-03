#include <Arduino.h>
#include <Bounce2.h>
#include <Wire.h>

void requestEvent();

Bounce debouncer53 = Bounce();
Bounce debouncer51 = Bounce();
Bounce debouncer49 = Bounce();
Bounce debouncer47 = Bounce();
Bounce debouncer45 = Bounce();

const int button53 = 53;
const int button51 = 51;
const int button49 = 49;
const int button47 = 47;
const int button45 = 45;

int bouton;

void setup()
{
  Wire.begin(2);
  Wire.onRequest(requestEvent); // register event
  Serial.begin(9600);
  pinMode(button53, INPUT);
  pinMode(button51, INPUT);
  pinMode(button49, INPUT);
  pinMode(button47, INPUT);
  pinMode(button45, INPUT);

  debouncer53.attach(button53);
  debouncer51.attach(button51);
  debouncer49.attach(button49);
  debouncer47.attach(button47);
  debouncer45.attach(button45);
  debouncer53.interval(5);
  debouncer51.interval(5);
  debouncer49.interval(5);
  debouncer47.interval(5);
  debouncer45.interval(5);
}

void loop()
{
  debouncer53.update();
  debouncer51.update();
  debouncer49.update();
  debouncer47.update();
  debouncer45.update();

  if (debouncer53.rose())
  {
    bouton = 53;
    Serial.println("Button 53 pressed");
  }
  if (debouncer51.rose())
  {
    bouton = 51;
    Serial.println("Button 51 pressed");
  }
  if (debouncer49.rose())
  {
    bouton = 49;
    Serial.println("Button 49 pressed");
  }
  if (debouncer47.rose())
  {
    bouton = 47;
    Serial.println("Button 47 pressed");
  }
  if (debouncer45.rose())
  {
    bouton = 45;
    Serial.println("Button 45 pressed");
  }
}

void requestEvent()
{
  //Wire.write("hello "); // respond with message of 6 bytes
                        // as expected by master
  switch (bouton)
  {
  case 53:
    Wire.write("53");
    bouton = 0;
    break;
  case 51:
    Wire.write("51");
    bouton = 0;
    break;
  case 49:
    Wire.write("49");
    bouton = 0;
    break;
  case 47:
    Wire.write("47");
    bouton = 0;
    break;
  case 45:
    Wire.write("45");
    bouton = 0;
    break;
  default:
    Wire.write("XX");
    //Serial.println("default");
    break;
  }
}
