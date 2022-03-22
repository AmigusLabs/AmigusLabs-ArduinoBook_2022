// declaración de variables constantes para os pines

const int ldrPin = A0;            // establece o pin da LDR
const int ledPin = 12;            // establece o pin do led

int ldrValue = 0 ;                // variable para almacenar o valor do sensor

// configuración

void setup() {
  
 pinMode(ledPin, OUTPUT);          // configuramos o led como saida
 
}

void loop() {               

ldrValue = analogRead(ldrPin);     // Le o valor do sensor

  if (ldrValue <200) {             // se o valor e menor acende os leds
    digitalWrite(ledPin, HIGH);    
  }else{                           // se non os apaga
    digitalWrite(ledPin, LOW);      
  }
  
}
