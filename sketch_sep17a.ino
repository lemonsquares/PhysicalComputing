/*
 Project Name: Blink
 Date: 9/17/2019
 Class: Physical Computing DIGF-2002-1
 Name: Giulia Zefilippo
 Resources: In-class
 */

void setup() {
  // put your setup code here, to run once:
  pinMode(9, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop(){
//fade in - lights warming up
digitalWrite(9,HIGH);
  delay(600);
  digitalWrite(9,LOW);
  delay(600);
  digitalWrite(9,HIGH);
  delay(600);
  
  digitalWrite(5,HIGH);
  delay(600);
  digitalWrite(5,LOW);
  delay(600);
  digitalWrite(5,HIGH);
  delay(600);
  
  digitalWrite(3, HIGH);
  delay(600);
  digitalWrite(3, LOW);
  delay(600);
  digitalWrite(3, HIGH);
  delay(800);
 
 //fade out in reverse
  analogWrite(3, 500);
  delay(800);
  analogWrite(5, 500);
  delay(800);
  analogWrite(9, 500);
  delay(800);

  analogWrite(3, 200);
  delay(800);
  analogWrite(5, 200);
  delay(800);
  analogWrite(9, 200);
  delay(800);
  
  analogWrite(3, 50);
  delay(800);
  analogWrite(5, 50);
  delay(800);
  analogWrite(9, 50);
  delay(800);
  
  analogWrite(3, 0);
  delay(1000);
  analogWrite(5, 0);
  delay(1000);
  analogWrite(9, 0);
  delay(1000);
}
