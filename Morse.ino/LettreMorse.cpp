#include "LettreMorse.h"
#include "pins_arduino.h"
#include <Arduino.h>


LettreMorse::LettreMorse(int pin)
{
    pinMode(pin, OUTPUT);
    _pin = pin;
}


LettreMorse::LettreMorse()
{
  pinMode(LED_BUILTIN, OUTPUT);
  _pin = LED_BUILTIN;
}

//définir le temps de clignotement de la LED pour un point
LettreMorse::LettreMorse(char lettre)
{
  this->lettre = lettre;
}


void LettreMorse::point()
{
  currentTime = millis();
  while (millis() < currentTime + 250) {
    digitalWrite(_pin, HIGH);
}
  currentTime = millis();
  while (millis() < currentTime + 250) {
     digitalWrite(_pin, LOW);
  }
}

//définir le temps de clignotement de la LED pour un tiret
void LettreMorse::tiret()
{
currentTime = millis();
while (millis() < currentTime + 1000) {
    digitalWrite(_pin, HIGH);
  }
currentTime = millis();
while (millis() < currentTime + 250) {
    digitalWrite(_pin, LOW);
  }
}

//définir le temps de clignotement de la LED pour l'espace entre les lettres
void LettreMorse::espace()
{
currentTime = millis();
while (millis() < currentTime + 750) {
    digitalWrite(_pin, LOW);
  }
}


//définir le temps de clignotement de la LED pour l'espace entre les mots
void LettreMorse::grand_espace()
{
currentTime = millis();
while (millis() < currentTime + 1750) {
    digitalWrite(_pin, LOW);
  }
}


//on appel la fonction blink qui nous sera utile pour faire clignoter la LED
void LettreMorse::blink()
{
}




