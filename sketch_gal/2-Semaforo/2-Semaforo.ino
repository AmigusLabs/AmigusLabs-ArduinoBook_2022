// declaración de variables tipo constante entero

const int ledR = 12;               // led vermello conectado no pin 12
const int ledA = 10;               // led amarelo conectado no pin 10
const int ledV = 8;                // led verde conectado no pin 8

// a función setup se executa unha soa vez

void setup() {
  // inicializa os pines dos leds como saidas dixitais
 pinMode(ledR, OUTPUT);     
 pinMode(ledA, OUTPUT);   
 pinMode(ledV, OUTPUT);   
}

// a función loop se executa repetidamente de forma infinita

void loop() {               
  // estado semaforo vermello
digitalWrite(ledR, HIGH);     // envía 5V ao pin do led vermello
digitalWrite(ledA, LOW);      // envía 0V no pin do led amarelo
digitalWrite(ledV, LOW);      // envía 0V no pin do led verde
delay(10000);                 // espera dez segundos

  // estado semaforo amarelo

  // estado semaforo verde
  
}
