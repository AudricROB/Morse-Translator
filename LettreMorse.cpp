#include "LettreMorse.h"
<<<<<<< HEAD
#include "pins_arduino.h"
=======
>>>>>>> master
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

<<<<<<< HEAD
//définir le temps de clignotement de la LED pour un point
=======

LettreMorse::LettreMorse(char lettre)
{
  this->lettre = lettre;
}


>>>>>>> master
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

<<<<<<< HEAD
//définir le temps de clignotement de la LED pour un tiret
=======

>>>>>>> master
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

<<<<<<< HEAD
//définir le temps de clignotement de la LED pour l'espace entre les lettres
=======

>>>>>>> master
void LettreMorse::espace()
{
currentTime = millis();
while (millis() < currentTime + 750) {
    digitalWrite(_pin, LOW);
  }
}

<<<<<<< HEAD
//définir le temps de clignotement de la LED pour l'espace entre les mots
=======

>>>>>>> master
void LettreMorse::grand_espace()
{
currentTime = millis();
while (millis() < currentTime + 1750) {
    digitalWrite(_pin, LOW);
  }
}

<<<<<<< HEAD
//on appel la fonction blink qui nous sera utile pour faire clignoter la LED
void LettreMorse::blink()
{
}


LettreMorse::LettreMorse(char lettre)
{
  this->lettre = lettre;
}
=======
void LettreMorse::clignoteLED() {

switch(this->lettre)
{
  case 'A':
      lettreA();
      break;
  case 'B':
      lettreB();
      break;
  case 'C':
      lettreC();
      break;
  case 'D':
      lettreD();
      break;
  case 'E':
      lettreE();
      break;
  case 'F':
      lettreF();
      break;
  case 'G':
      lettreG();
      break;
  case 'H':
      lettreH();
      break;
  case 'I':
      lettreI();
      break;
  case 'J':
      lettreJ();
      break;
  case 'K':
      lettreK();
      break;
  case 'L':
      lettreL();
      break;
  case 'M':
      lettreM();
      break;
  case 'N':
      lettreN();
      break;
  case 'O':
      lettreO();
      break;
  case 'P':
      lettreP();
      break;
  case 'Q':
      lettreQ();
      break;
  case 'R':
      lettreR();
      break;
  case 'S':
      lettreS();
      break;
  case 'T':
      lettreT();
      break;
  case 'U':
      lettreU();
      break;
  case 'V':
      lettreV();
      break;
  case 'W':
      lettreW();
      break;
  case 'X':
      lettreX();
      break;
  case 'Y':
      lettreY();
      break;
  case 'Z':
      lettreZ();
      break;
  case '1':
      chiffre1();
      break;
  case '2':
      chiffre2();
      break;
  case '3':
      chiffre3();
      break;
  case '4':
      chiffre4();
      break;
  case '5':
      chiffre5();
      break;
  case '6':
      chiffre6();
      break;
  case '7':
      chiffre7();
      break;
  case '8':
      chiffre8();
      break;
  case '9':
      chiffre9();
      break;
  case '0':
      chiffre0();
      break;
  default:
      return;
  }
Serial.print(this->lettre);
}


void LettreMorse::lettreA()
{
    point();
    espace();
    tiret();
}

void LettreMorse::lettreB()
{
    tiret();
    for (int i = 0; i < 3; ++i)
    {
        espace();
        point();
    }
}

void LettreMorse::lettreC()
{
    tiret();
    espace();
    point();

    espace();

    tiret();
    espace();
    point();

}

void LettreMorse::lettreD()
{
    tiret();
    for (int i = 0; i < 2; ++i)
    {
        espace();
        point();
    }
}

void LettreMorse::lettreE()
{
    point();
}

void LettreMorse::lettreF()
{
    for (int i = 0; i < 2; ++i)
    {
        point();
        espace();
    }
    tiret();
    espace();
    point();
}

void LettreMorse::lettreG()
{
    for (int i = 0; i < 2; ++i)
    {
        tiret();
        espace();
    }
    point();
}

void LettreMorse::lettreH()
{
    for (int i = 0; i < 3; ++i)
    {
        point();
        espace();
    }
    point();
}


void LettreMorse::lettreI()
{
    point();
    espace();
    point();
}

void LettreMorse::lettreJ()
{
    point();
    espace();
    for (int i = 0; i < 2; ++i)
    {
        tiret();
        espace();
    }
    tiret();
}

void LettreMorse::lettreK()
{
    tiret();
    espace();
    point();
    espace();
    tiret();
}

void LettreMorse::lettreL()
{
    point();
    espace();
    tiret();
    for (int i = 0; i < 2; ++i)
    {
        espace();
        point();
    }
}

void LettreMorse::lettreM()
{
    tiret();
    espace();
    tiret();
}

void LettreMorse::lettreN()
{
    tiret();
    espace();
    point();
}

void LettreMorse::lettreO()
{
    for (int i = 0; i < 2; ++i)
    {
        tiret();
        espace();
    }
    tiret();
}

void LettreMorse::lettreP()
{
    point();
    espace();
    tiret();
    espace();
    tiret();
    espace();
    point();
}

void LettreMorse::lettreQ()
{
    for (int i = 0; i < 2; ++i)
    {
        tiret();
        espace();
    }
    point();
    espace();
    tiret();
}

void LettreMorse::lettreR()
{
    point();
    espace();
    tiret();
    espace();
    point();
}

void LettreMorse::lettreS()
{
    for (int i = 0; i < 2; ++i)
    {
        point();
        espace();
    }
    point();
}

void LettreMorse::lettreT()
{
    tiret();
}

void LettreMorse::lettreU()
{
    for (int i = 0; i < 2; ++i)
    {
        point();
        espace();
    }
    tiret();
}

void LettreMorse::lettreV()
{
    for (int i = 0; i < 3; ++i)
    {
        point();
        espace();
    }
    tiret();
}

void LettreMorse::lettreW()
{
    point();
    for (int i = 0; i < 2; ++i)
    {
        espace();
        tiret();
    }
}

void LettreMorse::lettreX()
{
    tiret();
    espace();
    for (int i = 0; i < 2; ++i)
    {
        point();
        espace();
    }
    tiret();
}

void LettreMorse::lettreY()
{
    tiret();
    espace();
    point();
    for (int i = 0; i < 2; ++i)
    {
        espace();
        tiret();
    }
}

void LettreMorse::lettreZ()
{
    for (int i = 0; i < 2; ++i)
    {
        tiret();
        espace();
    }
    point();
    espace();
    point();
}

  
 void LettreMorse::chiffre1()
 {
    point();
    espace();
    for(int i = 0; i < 3; ++i)
    {
      tiret();
      espace();
    }
    tiret();
 }
  
 void LettreMorse::chiffre2()
 {
    for(int i = 0; i < 2; ++i)
    {
      point();
      espace();
    }
    for(int i = 0; i < 2; ++i)
    {
      tiret();
      espace();
    }
   tiret();
 }
  
 void LettreMorse::chiffre3()
 {
    for(int i = 0; i < 3; ++i)
    {
      point();
      espace();
    }
    tiret();
    espace();
    tiret();
 }
  
 void LettreMorse::chiffre4()
 {
    for(int i = 0; i < 4; ++i)
    {
      point();
      espace();
    }
    tiret();
 }
  
 void LettreMorse::chiffre5()
 {
    for(int i = 0; i < 4; ++i)
    {
      point();
      espace();
    }
    point();
 }
  
 void LettreMorse::chiffre6()
 {
    tiret();
    espace();
    for(int i = 0; i < 3; ++i)
    {
      point();
      espace();
    }
    point();
 }
  
 void LettreMorse::chiffre7()
 {
    for(int i = 0; i < 2; ++i)
    {
      tiret();
      espace();
    }
    for(int i = 0; i < 2; ++i)
    {
      point();
      espace();
    }
    point();
 }
  
 void LettreMorse::chiffre8()
 {
    for(int i = 0; i < 3; ++i)
    {
      tiret();
      espace();
    }
    point();
    espace();
    point();
 }
  
 void LettreMorse::chiffre9()
 {
    for(int i = 0; i < 4; ++i)
    {
      tiret();
      espace();
    }
    point();
 }
  
 void LettreMorse::chiffre0()
 {
    for(int i = 0; i < 4; ++i)
    {
      tiret();
      espace();
    }
    tiret();
 }
>>>>>>> master
