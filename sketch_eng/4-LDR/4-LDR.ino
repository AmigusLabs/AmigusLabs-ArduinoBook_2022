// declaration of constant variables for the pins

const int ldrPin = A0;            // establishes the LDR pin
const int ledPin = 12;            // establishes the LED pin

int ldrValue = 0 ;                // variable to store the sensor value

// configuration

void setup() {
  
 pinMode(ledPin, OUTPUT);          // We configure the pin as output
 
}

void loop() {               

ldrValue = analogRead(ldrPin);     // Read the sensor value 

  if (ldrValue <200) {             // if the value is low the LEDs turn on
    digitalWrite(ledPin, HIGH);    
  }else{                           // otherwise they turn off
    digitalWrite(ledPin, LOW);      
  }
  
}
