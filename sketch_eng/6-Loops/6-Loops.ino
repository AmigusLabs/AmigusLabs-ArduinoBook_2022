// declaration of variables

int led = 12;                 // establishes the LED pin
int time1 = 200;             // time between on and off
int time2 = 2000;            // time between sequences

// configuration

void setup() {

 pinMode(led, OUTPUT);        // We configure the pin as output
 
}

void loop() {    

  for (int n=0;n<5;n++){      // The following is repeated 5 times (from 0 to 4):
    digitalWrite(led, HIGH);
    delay(time1);
    digitalWrite(led, LOW);
    delay(time1);
  }
  delay(time2);              // Wait for time2 before repeating the process again

}
