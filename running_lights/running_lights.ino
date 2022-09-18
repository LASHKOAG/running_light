const int LED_WHITE = 5;
const int LED_BLUE = 6;
const int LED_YELLOY = 7;
const int DELAY = 100;

int Blink(int pin){
  delay(DELAY);
  digitalWrite(pin, HIGH);
  delay(DELAY);
  digitalWrite(pin, LOW);
  delay(DELAY);
}
void setup() {
  pinMode(8, OUTPUT);
}

void loop() {
  LongBlink(PIN);
}
