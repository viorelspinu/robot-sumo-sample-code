void setup() {
  Serial.begin(9600);
}

void loop() {
  int v = analogRead(0);
  Serial.println(v);  
}



