#include <Arduino.h>

class Traductor {

private:
    char charLetter;                                                //transform letter into array
    const char short[2] = "s";                                      //short time
    unsigned long currentTime = 0;                                  //use function millis
    unsigned long previousTime = 0;
    bool TurnOnLed(int period, bool ledState);
    String Traductorletter[27][2] = {                               //create array with letter and morseletter
         {"a","sl"},
         {"b","lsss"},
         {"c","lsls"},
         {"d","lss"},
         {"e","s"},
         {"f","ssls"},
         {"g","ssc"},
         {"h","ssss"},
         {"i","ss"},
         {"j","slll"},
         {"k","lsl"},
         {"l","slss"},
         {"m","ll"},
         {"n","ls"},
         {"o","lll"},
         {"p","slls"},
         {"q","llsl"},
         {"r","sls"},
         {"s","sss"},
         {"t","l"},
         {"u","ssl"},
         {"v","sssl"},
         {"w","sll"},
         {"x","lssl"},
         {"y","lsll"},
         {"z","llss"},
         {" ",""},
    };
};

public:
	Traductor();
	~Tradcutor();
	void traductor(string word);  