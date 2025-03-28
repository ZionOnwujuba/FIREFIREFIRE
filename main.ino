
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  LCDsetup();
  GPSsetup();
  BuzzSetup();
}

void loop() {
  // put your main code here, to run repeatedly:
  // read_Pan1();
  // read_Pan2();
  // read_Pan3();
  // digitalWrite(1, LOW);
  Pan3_Text();
}
