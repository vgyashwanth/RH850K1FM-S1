#include"GPIO.h"

void Outputpin(PORT_G port,PIN_NUM pin){

   PMC(port)&=~(1U<<pin);  // making gpio port
   PIPC(port)&=~(1U<<pin); // i/o direction controlled by software.
    PM(port)&=~(1U<<pin); // configured as outputpin


}

void digitalWrite(PORT_G port,PIN_NUM pin,LOGIC_LEVEL logic){
      
        if(HIGH == logic)
            P(port)|= (1U<<pin);
        else
            P(port)&=~(1U<<pin);

}

void Toogle_PIN(PORT_G port,PIN_NUM pin){
     P(port)^= (1U<<pin);
}