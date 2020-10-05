#include <OneButton.h>


OneButton taster(10, true);

bool statusLED = false;


void setup()
{
  pinMode(5, OUTPUT);


  taster.attachClick(Taster_Funktion);

}

void loop()
{
  taster.tick();

  // You can implement other code in here or just wait a while
  delay(10);
  digitalWrite(5, statusLED);
}

void Taster_Funktion()
{
  statusLED = !statusLED;
}
