// declaración de variables

int led = 12;                 // establece el pin del led
int tiempo1 = 200;             // tiempo entre encendido y apagado
int tiempo2 = 2000;            // tiempo entre secuencias
// configuración

void setup() {

 pinMode(led, OUTPUT);        // configuramos el led como salida
 
}

void loop() {    

  for (int n=0;n<5;n++){      // se repite 5 veces (desde 0 hasta 4) el siguiente:
    digitalWrite(led, HIGH);
    delay(tiempo1);
    digitalWrite(led, LOW);
    delay(tiempo1);
  }
  delay(tiempo2);              // Espera el tiempo2 antes de repetir de nuevo el proceso

}
