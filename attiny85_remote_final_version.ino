//creator Circuit_Cyber



#include <IRremote.h>
const byte butonPin0 = 0; //PB0 button input
const byte butonPin2 = 2; //PB2 button input
const byte IRPin = 1; //PB1 LED output
const byte butonPin3 = 3; //PB3 button input
const byte butonPin4 = 4; //PB4 button input



void setup()
{
   // connect button to ground and input
   pinMode(butonPin0, INPUT_PULLUP);
   pinMode(butonPin2, INPUT_PULLUP);
   pinMode(butonPin3, INPUT_PULLUP);
   pinMode(butonPin4, INPUT_PULLUP);

   IrSender.begin(IRPin);
}

  

void loop()
{
if (digitalRead(butonPin0) == LOW)
{
delay(170);
IrSender.sendNECRaw(0x0, 0); //example 0xED126B86 for turn on tv
delay(200);
}
if (digitalRead(butonPin2) == LOW)
{
delay(150);
IrSender.sendNECRaw(0x0, 0);
delay(200);

}
if (digitalRead(butonPin3) == LOW)
{
delay(150);
IrSender.sendNECRaw(0x0, 0);
delay(200);

}
if (digitalRead(butonPin4) == LOW)
{
delay(150);
IrSender.sendNECRaw(0x0, 0);
delay(200);

}
}
