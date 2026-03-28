int BUT1 = D0;

int BUT2 = D1;

int BUT3 = D2;


int LED1 = D3;

int LED2 = D4;

int LED3 = D5;

int BUZZ = D8;

int ROTSW = D9;

void setup() {

pinMode(BUT1, INPUT_PULLUP);

pinMode(BUT2, INPUT_PULLUP);

pinMode(BUT3, INPUT_PULLUP);

pinMode(ROTSW, INPUT_PULLUP);


pinMode(LED1, OUTPUT);

pinMode(LED2, OUTPUT);

pinMode(LED3, OUTPUT);

pinMode(BUZZ, OUTPUT);


}


void loop() {
  int case1 = digitalRead(BUT1);
  int case2 = digitalRead(BUT2);
  int case3 = digitalRead(BUT3);

  if (case1 == LOW) {
    digitalWrite(LED1, HIGH);
    digitalWrite(BUZZ, HIGH);

  }

  if (case2 == LOW) {
    digitalWrite(LED2, HIGH);
    digitalWrite(BUZZ, HIGH);

  }

  if (case3 == LOW) {
    digitalWrite(LED3, HIGH);
    digitalWrite(BUZZ, HIGH);

  }

  if (digitalRead(ROTSW) == LOW) {
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, HIGH);
    digitalWrite(LED3, HIGH);
    digitalWrite(BUZZ, HIGH)
  }
}


// So LEDs have 0 to 255 value range for brightness
// We can then use the rotary to hardcode this
// Will continue on this after learning C++ a bit more

