#ifndef Traducteur_
#define Traducteur_
#include "LettreMorse.h"


class Traducteur
{
  private:
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
    LettreMorse LM;
    LettreMorse mot[250]; 
    void TableauLettreMorse(String s);
        
  public:
    Traducteur();
    Traducteur(int pin);
    void clignoteLED();
    void TraduireMot(String mot);
    
};

#endif
