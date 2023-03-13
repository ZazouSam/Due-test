#include <Bounce2.h>

// declares 16 buttons on D22 to D52 only on pair pin number (D22, D24, D26, D28, D30, D32, D34, D36, D38, D40, D42, D44, D46, D48, D50, D52)
Bounce debouncer52 = Bounce();
Bounce debouncer50 = Bounce();
Bounce debouncer48 = Bounce();
Bounce debouncer46 = Bounce();
Bounce debouncer44 = Bounce();
Bounce debouncer42 = Bounce();
Bounce debouncer40 = Bounce();
Bounce debouncer38 = Bounce();
Bounce debouncer36 = Bounce();
Bounce debouncer34 = Bounce();
Bounce debouncer32 = Bounce();
Bounce debouncer30 = Bounce();
Bounce debouncer28 = Bounce();
Bounce debouncer26 = Bounce();
Bounce debouncer24 = Bounce();
Bounce debouncer22 = Bounce();

// declares 16 buttons on D22 to D52 only on pair pin number (D22, D24, D26, D28, D30, D32, D34, D36, D38, D40, D42, D44, D46, D48, D50, D52) pin 22 is btn1 and pin 52 is btn16
const int BTN16 = 52;
const int BTN15 = 50;
const int BTN14 = 48;
const int BTN13 = 46;
const int BTN12 = 44;
const int BTN11 = 42;
const int BTN10 = 40;
const int BTN9 = 38;
const int BTN8 = 36;
const int BTN7 = 34;
const int BTN6 = 32;
const int BTN5 = 30;
const int BTN4 = 28;
const int BTN3 = 26;
const int BTN2 = 24;
const int BTN1 = 22;

int bouton;

// fonction that contains the 16 buttons declaration
void BTN_setup(void)
{
    debouncer52.attach(BTN16, INPUT);
    debouncer50.attach(BTN15, INPUT);
    debouncer48.attach(BTN14, INPUT);
    debouncer46.attach(BTN13, INPUT);
    debouncer44.attach(BTN12, INPUT);
    debouncer42.attach(BTN11, INPUT);
    debouncer40.attach(BTN10, INPUT);
    debouncer38.attach(BTN9, INPUT);
    debouncer36.attach(BTN8, INPUT);
    debouncer34.attach(BTN7, INPUT);
    debouncer32.attach(BTN6, INPUT);
    debouncer30.attach(BTN5, INPUT);
    debouncer28.attach(BTN4, INPUT);
    debouncer26.attach(BTN3, INPUT);
    debouncer24.attach(BTN2, INPUT);
    debouncer22.attach(BTN1, INPUT);

    debouncer52.interval(5);
    debouncer50.interval(5);
    debouncer48.interval(5);
    debouncer46.interval(5);
    debouncer44.interval(5);
    debouncer42.interval(5);
    debouncer40.interval(5);
    debouncer38.interval(5);
    debouncer36.interval(5);
    debouncer34.interval(5);
    debouncer32.interval(5);
    debouncer30.interval(5);
    debouncer28.interval(5);
    debouncer26.interval(5);
    debouncer24.interval(5);
    debouncer22.interval(5);
}

void BTN_I2C_Serial(void)
{
    debouncer52.update();
    debouncer50.update();
    debouncer48.update();
    debouncer46.update();
    debouncer44.update();
    debouncer42.update();
    debouncer40.update();
    debouncer38.update();
    debouncer36.update();
    debouncer34.update();
    debouncer32.update();
    debouncer30.update();
    debouncer28.update();
    debouncer26.update();
    debouncer24.update();
    debouncer22.update();

    if (debouncer52.rose())
    {
        bouton = 16;
        Serial.println("Button 16 pressed");
    }
    if (debouncer50.rose())
    {
        bouton = 15;
        Serial.println("Button 15 pressed");
    }
    if (debouncer48.rose())
    {
        bouton = 14;
        Serial.println("Button 14 pressed");
    }
    if (debouncer46.rose())
    {
        bouton = 13;
        Serial.println("Button 13 pressed");
    }
    if (debouncer44.rose())
    {
        bouton = 12;
        Serial.println("Button 12 pressed");
    }
    if (debouncer42.rose())
    {
        bouton = 11;
        Serial.println("Button 11 pressed");
    }
    if (debouncer40.rose())
    {
        bouton = 10;
        Serial.println("Button 10 pressed");
    }
    if (debouncer38.rose())
    {
        bouton = 9;
        Serial.println("Button 9 pressed");
    }
    if (debouncer36.rose())
    {
        bouton = 8;
        Serial.println("Button 8 pressed");
    }
    if (debouncer34.rose())
    {
        bouton = 7;
        Serial.println("Button 7 pressed");
    }
    if (debouncer32.rose())
    {
        bouton = 6;
        Serial.println("Button 6 pressed");
    }
    if (debouncer30.rose())
    {
        bouton = 5;
        Serial.println("Button 5 pressed");
    }
    if (debouncer28.rose())
    {
        bouton = 4;
        Serial.println("Button 4 pressed");
    }
    if (debouncer26.rose())
    {
        bouton = 3;
        Serial.println("Button 3 pressed");
    }
    if (debouncer24.rose())
    {
        bouton = 2;
        Serial.println("Button 2 pressed");
    }
    if (debouncer22.rose())
    {
        bouton = 1;
        Serial.println("Button 1 pressed");
    }
}

void BTN_I2C(void)
{
    debouncer52.update();
    debouncer50.update();
    debouncer48.update();
    debouncer46.update();
    debouncer44.update();
    debouncer42.update();
    debouncer40.update();
    debouncer38.update();
    debouncer36.update();
    debouncer34.update();
    debouncer32.update();
    debouncer30.update();
    debouncer28.update();
    debouncer26.update();
    debouncer24.update();
    debouncer22.update();

    if (debouncer52.rose())
    {
        bouton = 16;
    }
    if (debouncer50.rose())
    {
        bouton = 15;
    }
    if (debouncer48.rose())
    {
        bouton = 14;
    }
    if (debouncer46.rose())
    {
        bouton = 13;
    }
    if (debouncer44.rose())
    {
        bouton = 12;
    }
    if (debouncer42.rose())
    {
        bouton = 11;
    }
    if (debouncer40.rose())
    {
        bouton = 10;
    }
    if (debouncer38.rose())
    {
        bouton = 9;
    }
    if (debouncer36.rose())
    {
        bouton = 8;
    }
    if (debouncer34.rose())
    {
        bouton = 7;
    }
    if (debouncer32.rose())
    {
        bouton = 6;
    }
    if (debouncer30.rose())
    {
        bouton = 5;
    }
    if (debouncer28.rose())
    {
        bouton = 4;
    }
    if (debouncer26.rose())
    {
        bouton = 3;
    }
    if (debouncer24.rose())
    {
        bouton = 2;
    }
    if (debouncer22.rose())
    {
        bouton = 1;
    }
}