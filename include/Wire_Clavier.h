#include "Clavier.h"
#include <Wire.h>

void requestEvent()
{
  switch (bouton)
  {
  case 16:
    Wire.write("16");
    bouton = 0;
    break;
  case 15:
    Wire.write("15");
    bouton = 0;
    break;
  case 14:
    Wire.write("14");
    bouton = 0;
    break;
  case 13:
    Wire.write("13");
    bouton = 0;
    break;
  case 12:
    Wire.write("12");
    bouton = 0;
    break;
  case 11:
    Wire.write("11");
    bouton = 0;
    break;
  case 10:
    Wire.write("10");
    bouton = 0;
    break;
  case 9:
    Wire.write("9");
    bouton = 0;
    break;
  case 8:
    Wire.write("8");
    bouton = 0;
    break;
  case 7:
    Wire.write("7");
    bouton = 0;
    break;
  case 6:
    Wire.write("6");
    bouton = 0;
    break;
  case 5:
    Wire.write("5");
    bouton = 0;
    break;
  case 4:
    Wire.write("4");
    bouton = 0;
    break;
  case 3:
    Wire.write("3");
    bouton = 0;
    break;
  case 2:
    Wire.write("2");
    bouton = 0;
    break;
  case 1:
    Wire.write("1");
    bouton = 0;
    break;
  default:
    Wire.write("XX");
    break;
  }
}