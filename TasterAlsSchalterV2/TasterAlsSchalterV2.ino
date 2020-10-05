#include <OneButton.h>


OneButton taster(10, true);  //Erstelle einen "OneButton" mit dem Namen "taster" und weise diesem den Pin 10 zu

bool statusLED = false;


void setup()
{
  pinMode(5, OUTPUT);  //LED ist an Pin 5 angeschlossen


  taster.attachClick(Taster_Funktion);  //Weise dem taster die Funktion Einzelklick zu und die Bezeichung für die void

}

void loop()
{
  taster.tick();  //Abfrage des Tasters je Zyklus

  // You can implement other code in here or just wait a while
  delay(10);
  digitalWrite(5, statusLED);  //Schreibe den Zustand der LED für den Ausgang
}

void Taster_Funktion()
{
  statusLED = !statusLED;
}
