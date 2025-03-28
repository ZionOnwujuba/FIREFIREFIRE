int buzzerPin = 1;
int pan3Pin = 12;
bool buzzFlag = false;
int pan2Pin = 10;
int pan1Pin = 7;

void BuzzSetup() {
  pinMode(buzzerPin, OUTPUT);
  pinMode(pan3Pin, INPUT);
  digitalWrite(buzzerPin, LOW);
  pinMode(pan2Pin, INPUT);
  pinMode(pan1Pin, INPUT);
}

void read_Pan3() {
  // Buzzer off, button pressed
  if(digitalRead(pan3Pin) == HIGH && buzzFlag == false) {     //pressing it the first time
    // turn buzzer on
    digitalWrite(buzzerPin, HIGH);
    buzzFlag = true;
    while(digitalRead(pan3Pin) == HIGH);
    Pan3_Text();

    //INSERT 911 BOOTY CALL   -> delay if(pressed again) {don't call that ho and cancelled_Text();
    int i = 0;
    int cancelFlag = 0;
    while(i < 9500) {
      delay(1);
      if(digitalRead(pan3Pin) == HIGH) {
          cancelFlag = 1;     //detected a cancelling button press
          break;
      }
      i++;
    }

    if(cancelFlag == 0) {
      //INSERT BOOTY CALL
      clearScreen();
    } else {
      cancelled_Text();
    }
  
  } else if(digitalRead(pan3Pin) && buzzFlag == true) {
    digitalWrite(buzzerPin, LOW);
    buzzFlag = false;
    while(digitalRead(pan3Pin) == HIGH);
  }
}

void read_Pan2() {
  if(digitalRead(pan2Pin) == HIGH){
    Pan2_Text();
    // Function for tracking GPS
    // Function for alerting ECs
    // Function for sending AI to phone
  }
}

void read_Pan1() {
  if(digitalRead(pan1Pin) == HIGH){
    Pan1_Text();
    // Function for tracking GPS
    // Function for sending AI to phone
  }
}



