// MAKE BY SUMIT
int green = 1;
int yellow= 2;
int red   = 3;
void setup(){
  pinMode(red,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(green,OUTPUT);
}
void loop(){
  digitalWrite(red, HIGH);
  digitalWrite(yellow, LOW);
  digitalWrite(green, LOW);
  delay(10000);
   digitalWrite(yellow, HIGH);
   digitalWrite(red, LOW);
  digitalWrite(green, LOW);
  delay(1000);
  digitalWrite(green, HIGH);
  digitalWrite(yellow, LOW);
  digitalWrite(red, LOW);
  delay(12000);
}