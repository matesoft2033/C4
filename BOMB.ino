#define BUTTON 2
#define BUZZER 3
#define TIME 1000


void setup() {
  Serial.begin(9600);
  pinMode(BUTTON, INPUT_PULLUP);
  pinMode(BUZZER, OUTPUT);
}

void loop() {
  int i = 0;

  while (digitalRead(BUTTON) == LOW) {
    if (i < 10) {
    i++;
    Serial.print("You have pressed the button for: ");
    Serial.println(i);
    delay(TIME);
    
  if (i == 10) {
    Serial.println("You have pressed it for 10 seconds **explodes**");
    tone(BUZZER, 1000);
  }
    }
  }
  noTone(BUZZER);

}
