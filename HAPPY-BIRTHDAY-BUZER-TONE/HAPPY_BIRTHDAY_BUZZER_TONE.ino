//MADE BY SUMIT
int buzzerPin = 1;
int melody[] = {
  262, 262, 294, 262, 349, 330, // Happy Birthday to You
  262, 262, 294, 262, 392, 349, // Happy Birthday to You
  262, 262, 262, 523, 440, 349, 330, 466, 466, 440, 349, 392, 349, // Happy Birthday Dear [Name]
  523, 523, 466, 440, 349, 392, 349 // Happy Birthday to You
};
int noteDurations[] = {
  4, 4, 4, 4, 4, 2, // Happy Birthday to You
  4, 4, 4, 4, 4, 2, // Happy Birthday to You
  4, 4, 4, 4, 4, 4, 4, 2, 4, 4, 4, 4, 4, // Happy Birthday Dear [Name]
  4, 4, 4, 4, 4, 4, 2 // Happy Birthday to You
};

void setup() {
  
}

void loop() {
  // Iterate over each note in the melody
  for (int i = 0; i < sizeof(melody) / sizeof(melody[0]); i++) {
    int noteDuration = 1000 / noteDurations[i];
    tone(buzzerPin, melody[i], noteDuration);
    delay(noteDuration * 1.30); // Adjust the note duration to add a pause between notes
  }
  
  // Add a delay after playing the melody
  delay(2000);
}
