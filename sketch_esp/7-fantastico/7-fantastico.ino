// declaración de variables

int tiempo = 200;                  // tiempo entre encendido y apagado

// configuración

void setup() {
  for (int n = 9; n <= 13; n++) { // se repite desde el 9 hasta el 13 lo siguiente:
    pinMode(n, OUTPUT);           // configuramos el led como salida
  }
}

// Programa

void loop() {

  for (int n = 9; n <= 13; n++) { // se repite desde el 9 hasta el 13 el encendido y apagado del led
    digitalWrite(n, HIGH);
    delay(tiempo);
    digitalWrite(n, LOW);
    delay(tiempo);
  }

}
