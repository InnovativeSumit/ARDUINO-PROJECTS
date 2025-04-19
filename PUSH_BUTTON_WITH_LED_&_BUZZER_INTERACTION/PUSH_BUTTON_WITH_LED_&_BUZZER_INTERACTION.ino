//PUSH_BUTTON_WITH_LED_&_BUZZER_INTERACTION
// MAKE BY SUMIT
const int buzzerPin = 8;
const int ledPin = 9;
const int buttonPin = 2;
unsigned long startTime;
unsigned long reactionTime;
bool buzzerActive = false;

void setup() {
  pinMode(buzzerPin, OUTPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
  randomSeed(analogRead(0)); /

void loop() {
  if (!buzzerActive) {
    delay(random(1000, 5000));
    digitalWrite(ledPin, HIGH);
    tone(buzzerPin, 1000); 
    startTime = millis();
    buzzerActive = true;
  }
  if (digitalRead(buttonPin) == HIGH && buzzerActive) {
    noTone(buzzerPin);
    digitalWrite(ledPin, LOW);
    reactionTime = millis() - startTime;
    Serial.print("Reaction Time: ");
    Serial.print(reactionTime);
    Serial.println(" ms");
    
    buzzerActive = false;
    delay(1000); 
  }
}