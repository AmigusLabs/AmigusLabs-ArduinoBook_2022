// declaration of variables

int tempo = 200;                  // time between on and off

// configuration

void setup() {
  for (int n = 9; n <= 13; n++) { // repeat the following from 9 to 13:
    pinMode(n, OUTPUT);           // We configure the pin as output
  }
}

// the loop function is executed repeatedly in an infinite way

void loop() {

  for (int n = 9; n <= 13; n++) { // repeat the LED’s on and off from 9 to 13.
    digitalWrite(n, HIGH);
    delay(tempo);
    digitalWrite(n, LOW);
    delay(tempo);
  }

}
