// Declaration of variables

int pot = 0;                // Variable that reads the potentiometer value
int brightness = 0;             // Variable that we send to a PWM pin
int led = 11;               // Establishes the LED pin

// configuration

void setup() {
 Serial.begin(9600);        // Initiates the series communication
 pinMode(led, OUTPUT);      // We configure the pin as output
 
}

void loop() {    

  pot = analogRead(A0);             // Reads the analog entry value (between 0 and 1023)
  
  brightness = map(pot,0,1023,0,255);   // We calculate the corresponding PWM value (between 0 and 255)

    /* map() Transforms a value between a maximum and a minimum
    into another value between another maximum and another minimum   */       
                  
  analogWrite(led,brightness);          // We send the brightness value to the LED,
                                    // by sending an output PWM signal (between 0 and 255)

  Serial.print(pot);                // We show the values on the console  
  Serial.print ("---->");
  Serial.println(brightness);
  delay(200);

}
