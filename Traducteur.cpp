#include "Traducteur.h"
#include <Arduino.h>

Traducteur::Traducteur()
{
}

Traducteur::Traducteur(int pin)
{
    LM = LettreMorse(pin);
}

//on défini et on asscocie chaque lettre à une séquence de clignotement 
void Traducteur::clignoteLED() {

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
    case ' ':
        LM.grand_espace();
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


void Traducteur::lettreA()
{
    LM.point();
    LM.espace();
    LM.tiret();
}

void Traducteur::lettreB()
{
    LM.tiret();
    for (int i = 0; i < 3; ++i)
    {
        LM.espace();
        LM.point();
    }
}

void Traducteur::lettreC()
{
    LM.tiret();
    LM.espace();
    LM.point();

    LM.espace();

    LM.tiret();
    LM.espace();
    LM.point();

}

void Traducteur::lettreD()
{
    LM.tiret();
    for (int i = 0; i < 2; ++i)
    {
        LM.espace();
        LM.point();
    }
}

void Traducteur::lettreE()
{
    LM.point();
}

void Traducteur::lettreF()
{
    for (int i = 0; i < 2; ++i)
    {
        LM.point();
        LM.espace();
    }
    LM.tiret();
    LM.espace();
    LM.point();
}

void Traducteur::lettreG()
{
    for (int i = 0; i < 2; ++i)
    {
        LM.tiret();
        LM.espace();
    }
    LM.point();
}

void Traducteur::lettreH()
{
    for (int i = 0; i < 3; ++i)
    {
        LM.point();
        LM.espace();
    }
    LM.point();
}


void Traducteur::lettreI()
{
    LM.point();
    LM.espace();
    LM.point();
}

void Traducteur::lettreJ()
{
    LM.point();
    LM.espace();
    for (int i = 0; i < 2; ++i)
    {
        LM.tiret();
        LM.espace();
    }
    LM.tiret();
}

void Traducteur::lettreK()
{
    LM.tiret();
    LM.espace();
    LM.point();
    LM.espace();
    LM.tiret();
}

void Traducteur::lettreL()
{
    LM.point();
    LM.espace();
    LM.tiret();
    for (int i = 0; i < 2; ++i)
    {
        LM.espace();
        LM.point();
    }
}

void Traducteur::lettreM()
{
    LM.tiret();
    LM.espace();
    LM.tiret();
}

void Traducteur::lettreN()
{
    LM.tiret();
    LM.espace();
    LM.point();
}

void Traducteur::lettreO()
{
    for (int i = 0; i < 2; ++i)
    {
        LM.tiret();
        LM.espace();
    }
    LM.tiret();
}

void Traducteur::lettreP()
{
    LM.point();
    LM.espace();
    LM.tiret();
    LM.espace();
    LM.tiret();
    LM.espace();
    LM.point();
}

void Traducteur::lettreQ()
{
    for (int i = 0; i < 2; ++i)
    {
        LM.tiret();
        LM.espace();
    }
    LM.point();
    LM.espace();
    LM.tiret();
}

void Traducteur::lettreR()
{
    LM.point();
    LM.espace();
    LM.tiret();
    LM.espace();
    LM.point();
}

void Traducteur::lettreS()
{
    for (int i = 0; i < 2; ++i)
    {
        LM.point();
        LM.espace();
    }
    LM.point();
}

void Traducteur::lettreT()
{
    LM.tiret();
}

void Traducteur::lettreU()
{
    for (int i = 0; i < 2; ++i)
    {
        LM.point();
        LM.espace();
    }
    LM.tiret();
}

void Traducteur::lettreV()
{
    for (int i = 0; i < 3; ++i)
    {
        LM.point();
        LM.espace();
    }
    LM.tiret();
}

void Traducteur::lettreW()
{
    LM.point();
    for (int i = 0; i < 2; ++i)
    {
        LM.espace();
        LM.tiret();
    }
}

void Traducteur::lettreX()
{
    LM.tiret();
    LM.espace();
    for (int i = 0; i < 2; ++i)
    {
        LM.point();
        LM.espace();
    }
    LM.tiret();
}

void Traducteur::lettreY()
{
    LM.tiret();
    LM.espace();
    LM.point();
    for (int i = 0; i < 2; ++i)
    {
        LM.espace();
        LM.tiret();
    }
}

void Traducteur::lettreZ()
{
    for (int i = 0; i < 2; ++i)
    {
        LM.tiret();
        LM.espace();
    }
    LM.point();
    LM.espace();
    LM.point();
}

  
 void Traducteur::chiffre1()
 {
    LM.point();
    LM.espace();
    for(int i = 0; i < 3; ++i)
    {
      LM.tiret();
      LM.espace();
    }
    LM.tiret();
 }
  
 void Traducteur::chiffre2()
 {
    for(int i = 0; i < 2; ++i)
    {
      LM.point();
      LM.espace();
    }
    for(int i = 0; i < 2; ++i)
    {
      LM.tiret();
      LM.espace();
    }
   LM.tiret();
 }
  
 void Traducteur::chiffre3()
 {
    for(int i = 0; i < 3; ++i)
    {
      LM.point();
      LM.espace();
    }
    LM.tiret();
    LM.espace();
    LM.tiret();
 }
  
 void Traducteur::chiffre4()
 {
    for(int i = 0; i < 4; ++i)
    {
      LM.point();
      LM.espace();
    }
    LM.tiret();
 }
  
 void Traducteur::chiffre5()
 {
    for(int i = 0; i < 4; ++i)
    {
      LM.point();
      LM.espace();
    }
    LM.point();
 }
  
 void Traducteur::chiffre6()
 {
    LM.tiret();
    LM.espace();
    for(int i = 0; i < 3; ++i)
    {
      LM.point();
      LM.espace();
    }
    LM.point();
 }
  
 void Traducteur::chiffre7()
 {
    for(int i = 0; i < 2; ++i)
    {
      LM.tiret();
      LM.espace();
    }
    for(int i = 0; i < 2; ++i)
    {
      LM.point();
      LM.espace();
    }
    LM.point();
 }
  
 void Traducteur::chiffre8()
 {
    for(int i = 0; i < 3; ++i)
    {
      LM.tiret();
      LM.espace();
    }
    LM.point();
    LM.espace();
    LM.point();
 }
  
 void Traducteur::chiffre9()
 {
    for(int i = 0; i < 4; ++i)
    {
      LM.tiret();
      LM.espace();
    }
    LM.point();
 }
  
 void Traducteur::chiffre0()
 {
    for(int i = 0; i < 4; ++i)
    {
      LM.tiret();
      LM.espace();
    }
    LM.tiret();
 }
 
//on traduit un mot en son equivalent morse
void Traducteur::TableauLettreMorse(String s)
{
    int i = 0;
    for(const char &c : s)
    {
        this->mot[i] = LettreMorse(c);
        i++;   
    }
}

void Traducteur::TraduireMot(String s)
{
    s.toUpperCase();
    TableauLettreMorse(s);

    for(int i = 0; i < s.length(); ++i)
    {
        this->mot[i].blink();
    }
    Serial.println("");
}


