// declaración de variables

int tempo = 200;                  // tempo entre acendido e apagado

// configuración

void setup() {
  for (int n = 9; n <= 13; n++) { // repítese dende o 9 ata o 13 o seguinte:
    pinMode(n, OUTPUT);           // configuramos o led como saida
  }
}

// Programa

void loop() {

  for (int n = 9; n <= 13; n++) { // repítese dende o 9 ata o 13 o encendido e apagado do led
    digitalWrite(n, HIGH);
    delay(tempo);
    digitalWrite(n, LOW);
    delay(tempo);
  }

}
