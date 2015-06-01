

#include <Mio_lib.h>

void primero(){
  for(int i=4;i<=13;i++){
    L_m led(i);
    led.uno();
  }
}

void segundo(){
    for(int i=13;i>=4;i--){
      L_m led(i);
      led.dos();
    }
}

void setup(){}

void loop(){
  primero();
  segundo();
}


