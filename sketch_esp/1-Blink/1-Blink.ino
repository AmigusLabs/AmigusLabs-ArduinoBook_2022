// Declaración de variables

int led = 11;                // Led conectado al pin 11

// Configuración

void setup() {
 pinMode(led, OUTPUT);      // Configuramos el pin como salida

}

// Programa

void loop() {               // El programa se ejecuta repetidamente
  
digitalWrite(led, HIGH);    // Envía 5V al pin del led (11) (enciende)
delay(500);                 // espera 500ms = 0,5s
digitalWrite(led, LOW);     // Envía 0V (apaga)
delay(100);                 // espera 100ms = 0,1s

}
