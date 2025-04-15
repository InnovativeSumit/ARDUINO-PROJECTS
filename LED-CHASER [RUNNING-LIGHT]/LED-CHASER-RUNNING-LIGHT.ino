int RED = 2;
int GREEN= 3;
int BLUE   = 4;
int VIOLET   = 5;
int YELLOW   = 6;
void setup(){
  pinMode(RED,OUTPUT);
  pinMode(GREEN,OUTPUT);
  pinMode(BLUE,OUTPUT);
  pinMode(VIOLET,OUTPUT);
  pinMode(YELLOW,OUTPUT);
}
void loop(){
  digitalWrite(RED, HIGH);
  digitalWrite(GREEN, LOW);
  digitalWrite(BLUE, LOW);
  digitalWrite(VIOLET, LOW);
  digitalWrite(YELLOW, LOW);
  delay(250);

  digitalWrite(RED, LOW);
  digitalWrite(GREEN, HIGH);
  digitalWrite(BLUE, LOW);
  digitalWrite(VIOLET, LOW);
  digitalWrite(YELLOW, LOW);
  delay(250);

  digitalWrite(RED, LOW);
  digitalWrite(GREEN, LOW);
  digitalWrite(BLUE, HIGH);
  digitalWrite(VIOLET, LOW);
  digitalWrite(YELLOW, LOW);
  delay(250);

  digitalWrite(RED, LOW);
  digitalWrite(GREEN, LOW);
  digitalWrite(BLUE, LOW);
  digitalWrite(VIOLET, HIGH);
  digitalWrite(YELLOW, LOW);
  delay(250);

  digitalWrite(RED, LOW);
  digitalWrite(GREEN, LOW);
  digitalWrite(BLUE, LOW);
  digitalWrite(VIOLET, LOW);
  digitalWrite(YELLOW, HIGH);
  delay(250);
   
}