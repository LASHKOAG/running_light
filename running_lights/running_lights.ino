const int LED_WHITE = 4;
const int LED_RED = 5;
const int LED_BLUE = 6;
const int LED_YELLOY = 7;
const int DELAY = 200;

int Blink(int pin){
  delay(DELAY);
  digitalWrite(pin, HIGH);
  delay(DELAY);
  digitalWrite(pin, LOW);
  //delay(DELAY);
}
void setup() {
  pinMode(LED_YELLOY, OUTPUT);
  pinMode(LED_BLUE, OUTPUT);
  pinMode(LED_RED, OUTPUT);
  pinMode(LED_WHITE, OUTPUT);
}

void loop() {
  for (int i = 4; i < 8; ++i){
    Blink(i);
  }
}
