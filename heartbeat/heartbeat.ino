
void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() {
  delay(1000);
  int time = millis() / 1000;
  Serial.print(time);
  Serial.println(" Seconds have elapsed");
  
}

