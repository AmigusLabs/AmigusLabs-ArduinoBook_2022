/* Pulsador controlando el encendido y apagado de un led */

// declaración de variables

const int led = 12;               // Pin 12 asignado a un led
const int pulsador = 2;           // Pin 2 asignado a un pulsador

int estado = 0 ;                  // variable con la que leeremos el estado del pusador

// configuración

void setup() {
  
 pinMode(led, OUTPUT);            // configuramos el led como salida
 
}

// la función loop se ejecuta repetidamente de forma infinita

void loop() {               

estado = digitalRead(pulsador) ;  
// Leemos el estado del pulsador (0 o 1) y le asignamos la variable "estado"

  if (estado == 1) {             // si el pulsador esta activo (estado = 1)
    digitalWrite(led, HIGH);     // el led se enciende
  }else{                         // si no
    digitalWrite(led, LOW);      // el led se apaga
  }
  
}
