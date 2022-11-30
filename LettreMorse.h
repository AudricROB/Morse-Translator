#include <Arduino.h>
#ifndef LettreMorse_h
#define LettreMorse_h

class LettreMorse
{
  private:
    int _pin;
    unsigned long currentTime;
    char lettre;
    

  public:
    LettreMorse();
    LettreMorse(char lettre);
    LettreMorse(int pin);
    void espace();
    void grand_espace();
    void point();
    void tiret();
    void blink();
};

#endif
