int buzzerPin = 1;
int pan3Pin = 12;
bool flag = false;

void setup() {
  pinMode(buzzerPin, OUTPUT);
  pinMode(pan3Pin, INPUT);
}

void loop() {
  // Buzzer off, button pressed
  if(digitalRead(pan3Pin) == HIGH && flag == false) {
    // turn buzzer on
    digitalWrite(buzzerPin, HIGH);
    flag = true;
    while(digitalRead(pan3Pin) == HIGH);
  } else if(digitalRead(pan3Pin) && flag == true) {
    digitalWrite(buzzerPin, LOW);
    flag = false;
    while(digitalRead(pan3Pin) == HIGH);
  }

}
