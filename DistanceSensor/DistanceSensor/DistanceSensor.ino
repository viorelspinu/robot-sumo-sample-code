void setup() {
  Serial.begin(9600);
}

void loop() {
  int distance = analogRead(0);
  Serial.println(distance);
  delay(100);

}
