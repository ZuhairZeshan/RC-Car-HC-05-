
//For Circuit Diagram Email me on zuhairzeshan60@gmail.com

#include <SoftwareSerial.h>
SoftwareSerial BT(10, 11); //TX, RX 
String readvoice;

int motor1pin1 = 2;//in1
int motor1pin2 = 3;//in2

int motor2pin1 = 4;//in3
int motor2pin2 = 5;//in4

void setup() {
 BT.begin(9600);
 Serial.begin(9600);

  pinMode(motor1pin1, OUTPUT);
  pinMode(motor1pin2, OUTPUT);
  pinMode(motor2pin1, OUTPUT);
  pinMode(motor2pin2, OUTPUT);

  //(Optional)
  pinMode(6, OUTPUT); 
  pinMode(9, OUTPUT);
  //(Optional)
 
}
 
void loop() {
  
  analogWrite(6, 255); //ENA pin
  analogWrite(9, 255); //ENB pin

  while (BT.available()){ 
  delay(10); 
  char c = BT.read(); 
  readvoice += c; 
  }  
  
 if(readvoice == "B")
  {
  digitalWrite(motor1pin1, LOW);//FOR
  digitalWrite(motor1pin2, HIGH);//BACK

  digitalWrite(motor2pin1, LOW);
  digitalWrite(motor2pin2, HIGH);
  delay(100); 
  }
  else if (readvoice == "S")
 {
  digitalWrite(motor1pin1, LOW);
  digitalWrite(motor1pin2, LOW);

  digitalWrite(motor2pin1, LOW);
  digitalWrite(motor2pin2, LOW);
  
   delay (100);
  }

else if(readvoice == "L"){
  digitalWrite(motor1pin1, LOW);
  digitalWrite(motor1pin2, HIGH);

  digitalWrite(motor2pin1, HIGH);
  digitalWrite(motor2pin2, LOW);
    delay (100);
}
else if(readvoice == "R"){  
  
  digitalWrite(motor1pin1, HIGH);
  digitalWrite(motor1pin2, LOW);

  digitalWrite(motor2pin1, LOW);
  digitalWrite(motor2pin2, HIGH);

    delay (100);
}else if(readvoice == "F"){
  
  digitalWrite(motor1pin1, HIGH);
  digitalWrite(motor1pin2, LOW);

  digitalWrite(motor2pin1, HIGH);
  digitalWrite(motor2pin2, LOW);
  delay(100); 
    
}
 else if(readvoice == "G"){
  
  digitalWrite(motor1pin1, LOW);
  digitalWrite(motor1pin2, HIGH);

  digitalWrite(motor2pin1, HIGH);
  digitalWrite(motor2pin2, LOW);
    delay (100);
    
}
 else if(readvoice == "I"){
  
   

  digitalWrite(motor1pin1, HIGH);
  digitalWrite(motor1pin2, LOW);

  digitalWrite(motor2pin1, LOW);
  digitalWrite(motor2pin2, HIGH);
    delay (100);
    
}
else if(readvoice == "H"){
  
  
  
  digitalWrite(motor1pin1, LOW);
  digitalWrite(motor1pin2, HIGH);

  digitalWrite(motor2pin1, HIGH);
  digitalWrite(motor2pin2, LOW);
    delay (100);
    
}else if(readvoice == "J"){
  
  
  
  digitalWrite(motor1pin1, HIGH);
  digitalWrite(motor1pin2, LOW);
  

  digitalWrite(motor2pin1, LOW);
  digitalWrite(motor2pin2, HIGH);

    delay (100);
    
}
readvoice="";
  
}