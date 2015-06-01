
int led;

 void setup(){
   for(int i=4;i<=13;i++){
     led=i;
     pinMode(led,OUTPUT);
   }
 }
 
  void loop(){
    uno();
    uno();
    dos();
  }
  
  void uno(){
  for(int i=4;i<=13;i++){
    led=i;
    digitalWrite(led,HIGH);
    delay(10);
    digitalWrite(led,LOW);
    delay(20);
  }
  }
  
    void dos(){
    for(int i=13;i>=4;i--){
    led=i;
    digitalWrite(led,HIGH);
    delay(20);
    digitalWrite(led,LOW);
    delay(20);
  }
  }
  
 
 
 
 
