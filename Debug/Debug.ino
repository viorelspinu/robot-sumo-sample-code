void setup() {
  Serial.begin(9600);
}
int i;
void loop() {
  i++;
  Serial.println(i);
     delay(500);
}

