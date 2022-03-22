// declaration of Integer constant variables

const int ledR = 12;               // red LED connected in pin 12
const int ledA = 10;               // yellow LED connected in pin 10
const int ledV = 8;                // green LED connected in pin 8

// the setup function is executed just once

void setup() {
  // initialize the LEDs pins as digital outputs
 pinMode(ledR, OUTPUT);     
 pinMode(ledA, OUTPUT);   
 pinMode(ledV, OUTPUT);   
}

// the loop function is executed repeatedly in an infinite way

void loop() {               
  // red traffic light status
digitalWrite(ledR, HIGH);     // send 5V to the pin of the red LED
digitalWrite(ledA, LOW);      // send 0V to the pin of the yellow LED
digitalWrite(ledV, LOW);      // send 0V to the pin of the green LED
delay(10000);                 // wait ten seconds

  // yellow traffic light status

  // green traffic light status
  
}
