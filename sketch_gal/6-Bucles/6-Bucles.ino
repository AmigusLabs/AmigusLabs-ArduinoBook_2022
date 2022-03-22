// declaración de variables

int led = 12;                 // establece o pin do led
int tempo1 = 200;             // tempo entre acendido e apagado
int tempo2 = 2000;            // tempo entre secuencias
// configuración

void setup() {

 pinMode(led, OUTPUT);        // configuramos o led como saida
 
}

void loop() {    

  for (int n=0;n<5;n++){      // repitese 5 veces (dende 0 ata 4) o seguinte:
    digitalWrite(led, HIGH);
    delay(tempo1);
    digitalWrite(led, LOW);
    delay(tempo1);
  }
  delay(tempo2);              // Espera o tempo2 antes de repetir de novo o proceso

}
