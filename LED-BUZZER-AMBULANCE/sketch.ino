//MADE BY SUMIT
int buzzer = 1;
int blue = 2;  
int red = 3;  
int toneOn = 700;  
int toneOff = 400; 

void setup() {
pinMode(red, OUTPUT);
pinMode(blue , OUTPUT);
pinMode(buzzer, OUTPUT);
}

void loop() {
  digitalWrite(red, HIGH);
  digitalWrite(blue , LOW);
  tone(buzzer, toneOn);
  delay(500);

  digitalWrite(red, LOW);
   digitalWrite(blue, HIGH);
  tone(buzzer, toneOff);
  delay(500);
  noTone(buzzer);
  delay(50);
}
