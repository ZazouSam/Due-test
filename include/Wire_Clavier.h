#include "Clavier.h"
#include <Wire.h>

void requestEvent()
{
  switch (bouton)
  {
  case 16:
    Wire.write(0x16);
    bouton = 0;
    break;
  case 15:
    Wire.write(0x15);
    bouton = 0;
    break;
  case 14:
    Wire.write(0x14);
    bouton = 0;
    break;
  case 13:
    Wire.write(0x13);
    bouton = 0;
    break;
  case 12:
    Wire.write(0x12);
    bouton = 0;
    break;
  case 11:
    Wire.write(0x11);
    bouton = 0;
    break;
  case 10:
    Wire.write(0x10);
    bouton = 0;
    break;
  case 9:
    Wire.write(0x09);
    bouton = 0;
    break;
  case 8:
    Wire.write(0x08);
    bouton = 0;
    break;
  case 7:
    Wire.write(0x07);
    bouton = 0;
    break;
  case 6:
    Wire.write(0x06);
    bouton = 0;
    break;
  case 5:
    Wire.write(0x05);
    bouton = 0;
    break;
  case 4:
    Wire.write(0x04);
    bouton = 0;
    break;
  case 3:
    Wire.write(0x03);
    bouton = 0;
    break;
  case 2:
    Wire.write(0x02);
    bouton = 0;
    break;
  case 1:
    Wire.write(0x01);
    bouton = 0;
    break;
  default:
    Wire.write(0x69);
    break;
  }
}