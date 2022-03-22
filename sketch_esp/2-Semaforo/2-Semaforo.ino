// declaración de variables tipo constante entero

const int ledR = 12;               // led rojo conectado en el pin 12
const int ledA = 10;               // led amarillo conectado en el pin 10
const int ledV = 8;                // led verde conectado en el pin 8

// la función setup se ejecuta una sola vez

void setup() {
  // inicializa los pines de los leds como salidas digitales
 pinMode(ledR, OUTPUT);     
 pinMode(ledA, OUTPUT);   
 pinMode(ledV, OUTPUT);   
}

// la función loop se ejecuta repetidamente de forma infinita

void loop() {               
  // estado semaforo rojo
digitalWrite(ledR, HIGH);     // envía 5V al pin del led rojo
digitalWrite(ledA, LOW);      // envía 0V al pin del led amarillo
digitalWrite(ledV, LOW);      // envía 0V al pin del led verde
delay(10000);                 // espera diez segundos

  // estado semaforo amarillo

  // estado semaforo verde
  
}
