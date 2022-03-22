/* Pulsador controlando o encendido e apagado dun led */

// declaración de variables

const int led = 12;               // Pin 12 asignado a un led
const int pulsador = 2;           // Pin 2 asignado a un pulsador

int estado = 0 ;                  // variable coa que leeremos o estado do pusador

// configuración

void setup() {
  
 pinMode(led, OUTPUT);            // configuramos o led como saida
 
}

// a función loop se executa repetidamente de forma infinita

void loop() {               

estado = digitalRead(pulsador) ;  
// Lemos o estado do pulsador (0 o 1) e o asignamos a variable "estado"

  if (estado == 1) {             // se o pulsador esta activo (estado = 1)
    digitalWrite(led, HIGH);     // o led se acende
  }else{                         // se non
    digitalWrite(led, LOW);      // o led se apaga
  }
  
}
