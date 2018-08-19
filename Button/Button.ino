void setup() {
  Serial.begin(9600);
  pinMode(7, INPUT);
}

void loop() {
  int v = digitalRead(7);
  Serial.println(v);  
}

