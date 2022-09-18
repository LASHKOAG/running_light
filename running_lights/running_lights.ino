const int LED_WHITE = 4;
const int LED_RED = 5;
const int LED_BLUE = 6;
const int LED_YELLOW = 7;
const int DELAY = 250;

int Blink(int pin){
  delay(DELAY);
  digitalWrite(pin, HIGH);
  delay(DELAY);
  digitalWrite(pin, LOW);
  //delay(DELAY);
}
int Blink(int pin, int pin2){
//  delay(DELAY);/
  digitalWrite(pin, HIGH);
  delay(DELAY);
  digitalWrite(pin, LOW);
  digitalWrite(pin2, HIGH);
  //delay(DELAY);
}

void RunningLightLeftRight(){
  for (int i = 4; i < 8; ++i){
//    Blink(i);
      Blink(i, i+1);
  }
}

void RunningLightRightLeft(){
  for (int i = 7; i > 4; --i){
//    Blink(i);
      Blink(i, i-1);
  }
}

void setup() {
  pinMode(LED_YELLOW, OUTPUT);
  pinMode(LED_BLUE, OUTPUT);
  pinMode(LED_RED, OUTPUT);
  pinMode(LED_WHITE, OUTPUT);
}

void loop() {
//  RunningLightLeftRight();/
//  RunningLightRightLeft();/

  while(true){
    Blink(LED_YELLOW);
  }
}
