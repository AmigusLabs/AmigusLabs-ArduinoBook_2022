// Declaración de variables

int pot = 0;                // Variable que lee el valor del potenciometro
int brillo = 0;             // Variable que enviamos a un pin pwm
int led = 11;               // Establece al pin del led

// configuración

void setup() {
 Serial.begin(9600);        // Inicia a comunicación serie
 pinMode(led, OUTPUT);      // Configuramos el led como salida
 
}

void loop() {    

  pot = analogRead(A0);             // Lee el valor de la entrada analógica (entre 0 y 1023)
  
  brillo = map(pot,0,1023,0,255);   // Calculamos el valor correspondiente pwm (entre 0 y 255)

    /* map() Transforma un valor comprendido entre un máximo e un mínimo noutro
       valor comprendido entre outro máximo e outro mínimo  */       
                  
  analogWrite(led,brillo);          // Enviamos el valor del brillo del led,
                                    // enviando una señal de salida PWM (entre 0 y 255)

  Serial.print(pot);                // Mostramos los valores en la consola  
  Serial.print ("---->");
  Serial.println(brillo);
  delay(200);

}
