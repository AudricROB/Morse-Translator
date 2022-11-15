#include "Traductor.h" 
Traductor traductor = Traductor();
String TranslateWord;

void setup() {
    Serial.begin(9600);
    pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
    Serial.println("Enter your word");   
    TranslateWord = Serial.readString();
    Serial.println(TranslateWord); {
        traductor.translate(TranslateWord);
    }
}
