#include "Mio_lib.h"
#include "arduino.h"

	L_m::L_m(int pin){
		pinMode(pin,OUTPUT);
		var=pin;
	}

  void L_m::uno(){
  	digitalWrite(var,HIGH);
  	delay(20);
  	digitalWrite(var,LOW);
  	delay(20);
  }
  
  void L_m::dos(){
  	digitalWrite(var,HIGH);
  	delay(50);
  	digitalWrite(var,LOW);
  	delay(50);
  }
