/* Push button controlling the on and off status of an LED */

// declaration of variables

const int led = 12;               // Pin 12 assigned to an LED
const int button = 2;           // Pin 2 assigned to a button

int button_status = 0 ;                  // variable to read the button status

// configuration

void setup() {
  
 pinMode(led, OUTPUT);            // We configure the pin as output
 
}

// the loop function is executed repeatedly in an infinite way

void loop() {               

button_status = digitalRead(button) ;  
// We read the push button status (0 to 1) and we assigned it to the “status” variable

  if (button_status == 1) {      // if the button is active (status = 1)
    digitalWrite(led, HIGH);     // the LED turns on
  }else{                         // otherwise
    digitalWrite(led, LOW);      // the LED turns off
  }
  
}
