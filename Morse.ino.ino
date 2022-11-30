#include "LettreMorse.h"
#include "Traducteur.h"

Traducteur traducteur = Traducteur();

void setup()
{
    Serial.begin(9600);
    pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
    //choisir le mot à traduire 
    traducteur.TraduireMot("Audric");
}
