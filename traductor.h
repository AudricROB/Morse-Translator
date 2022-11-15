#include <Arduino.h>

class Traductor {

private:
    char charLetter;                                                //transform letter into array
    const char short[2] = "c";                                      //short time
    unsigned long currentTime = 0;                                  //use function millis
    unsigned long previousTime = 0;
    bool TurnOnLed(int duree, bool ledState);
    String Traductorletter[27][2] = {                               //create array with letter and morseletter
         {"a","cl"},
         {"b","lccc"},
         {"c","lclc"},
         {"d","lcc"},
         {"e","c"},
         {"f","cclc"},
         {"g","llc"},
         {"h","cccc"},
         {"i","cc"},
         {"j","clll"},
         {"k","lcl"},
         {"l","clcc"},
         {"m","ll"},
         {"n","lc"},
         {"o","lll"},
         {"p","cllc"},
         {"q","llcl"},
         {"r","clc"},
         {"s","ccc"},
         {"t","l"},
         {"u","ccl"},
         {"v","cccl"},
         {"w","cll"},
         {"x","lccl"},
         {"y","lcll"},
         {"z","llcc"},
         {" ",""},
    };
};

public:
	Traductor();
	~Tradcutor();
	void traductor(string word);  