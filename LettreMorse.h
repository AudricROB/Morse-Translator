#include <Arduino.h>
#ifndef LettreMorse_h
#define LettreMorse_h

class LettreMorse
{
  private:
<<<<<<< HEAD
    int _pin;
    unsigned long currentTime;
    char lettre;
=======
    char lettre;
    void lettreA();
    void lettreB();
    void lettreC();
    void lettreD();
    void lettreE();
    void lettreF();
    void lettreG();
    void lettreH();
    void lettreI();
    void lettreJ();
    void lettreK();
    void lettreL();
    void lettreM();
    void lettreN();
    void lettreO();
    void lettreP();
    void lettreQ();
    void lettreR();
    void lettreS();
    void lettreT();
    void lettreU();
    void lettreV();
    void lettreW();
    void lettreX();
    void lettreY();
    void lettreZ();
    void chiffre1();
    void chiffre2();
    void chiffre3();
    void chiffre4();
    void chiffre5();
    void chiffre6();
    void chiffre7();
    void chiffre8();
    void chiffre9();
    void chiffre0();
    void espace();
    void grand_espace();
    void point();
    void tiret();
    int _pin;
    unsigned long currentTime;
>>>>>>> master
    

  public:
    LettreMorse();
    LettreMorse(char lettre);
    LettreMorse(int pin);
<<<<<<< HEAD
    void espace();
    void grand_espace();
    void point();
    void tiret();
    void blink();
=======
    void clignoteLED();
>>>>>>> master
};

#endif
