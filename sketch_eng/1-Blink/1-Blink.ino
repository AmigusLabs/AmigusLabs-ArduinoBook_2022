// Declaration of variables

int led = 11;                // LED connected in pin 11

// Configuration

void setup() {
  pinMode(led, OUTPUT);      // We configure the pin as output

}

// Programme

void loop() {               // The programme is executed repeatedly

  digitalWrite(led, HIGH);    // Send 5V to LED (pin 11) (It turns on)
  delay(500);                 // Wait 500ms = 0,5s
  digitalWrite(led, LOW);     // Send 0V (It turns off)
  delay(100);                 // Wait 100ms = 0,1 s

}
