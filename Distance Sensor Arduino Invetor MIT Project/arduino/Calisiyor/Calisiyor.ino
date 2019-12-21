const int trigPin=2;
const int echoPin=3;

long duration, cm;

void setup() {

 Serial.begin(9600);
 pinMode(trigPin,OUTPUT);
 pinMode(echoPin,INPUT);
}

void loop() {

 digitalWrite(trigPin,LOW);
 delayMicroseconds(2);
 digitalWrite(trigPin,HIGH);
 delayMicroseconds(10);
 digitalWrite(trigPin,LOW);

 duration=pulseIn(echoPin,HIGH);

 cm=(duration/2)/29.1;

 if(cm<60 && cm>40){
  Serial.print("u");
  delay(1000);
  }
  
 else if(cm<40 && cm>20){
   Serial.print("i");  
   delay(1000);
   }
   
 else if(cm<20) {
    Serial.print("b");
    delay(1000);
   }
   
  else{
   Serial.print("n");  
   delay(1000);
   }
 
}
