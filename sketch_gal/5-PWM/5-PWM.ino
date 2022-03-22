// Declaración de variables

int pot = 0;                // Variable que le o valor do potenciometro
int brillo = 0;             // Variable que enviamos a un pin pwm
int led = 11;               // Establece o pin do led

// configuración

void setup() {
 Serial.begin(9600);        // Inicia a comunicación serie
 pinMode(led, OUTPUT);      // Configuramos o led como saida
 
}

void loop() {    

  pot = analogRead(A0);             // Le o valor da entrada analóxica (entre 0 e 1023)
  
  brillo = map(pot,0,1023,0,255);   // Calculamos o valor correspondente pwm (entre 0 e 255)

    /* map() Transforma un valor comprendido entre un máximo e un mínimo noutro
       valor comprendido entre outro máximo e outro mínimo  */       
                  
  analogWrite(led,brillo);          // Enviamos o valor de brillo ó led,
                                    // enviando unha sinal de saida PWM (entre 0 e 255)

  Serial.print(pot);                // Mostramos os valores na consola  
  Serial.print ("---->");
  Serial.println(brillo);
  delay(200);

}
