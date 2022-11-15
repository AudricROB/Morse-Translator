#include "Traductor.h"

Traductor::Traductor() {
}

void Traductor::traductor(String word) {
    word.toLowerCase();                                                                 // lowercase word
    for (int letter = 0; letter < word.length(); letter++) {                            // all letter in the word 
        for (int i = 0; i <= 27; i++) {
            charLetter = Traductorletter[i][0].charAt(0);
            if (word[letter] == charLetter) {                                           // check if letter of the word is equal to the ith occurrence of the table
                if (i == 26) {                                                          // space
                    Serial.println("New Word");
                    TurnOnLed(2400, false);                                             // led off, delay = 2400ms                    
                }

                else {
                    Serial.print("Letter : ");
                    Serial.println(Traductorletter[i][0]);
                    for (int k = 0; k < Traductorletter[i][1].length(); k++) {          // all letter of morse translation
                        if (Traductorletter[i][1][k] == short[0]) {                     // check if trasnaltion is short or long
                            Serial.print("short");
                            while (!TurnOnLed(400, true));                              // led on, delay=400ms
                        }

                        else {
                            Serial.print("long");
                            while (!TurnOnLed(1200, true));                             // led on, delay = 1200ms
                        }
                    }
                    Serial.println();
                    TurnOnLed(1200, false);                                             // delay between letters
                }
                break;
            }
        }
    }
    TurnOnLed(1200, false);                                                             // pause time after end of word
}


    bool Traductor::TurnOnLed(int period, bool ledState) {
        currentTime = millis();
        if ((currentTime - previousTime) > period) {   
            previousTime = currentTime;
            digitalWrite(LED_BUILTIN, ledState);                                        // led on or led off
            return true;
        }
        return false;
    }
}