void setup() {
    pinMode(LED_BUILTIN, OUTPUT);
    pinMode(10, OUTPUT);
    digitalWrite(10, HIGH);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(500);
  digitalWrite(LED_BUILTIN, LOW);
  delay(200);
}
