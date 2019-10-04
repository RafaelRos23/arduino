/*
   EXEMPLO DE USO PWM
   EXEMPLO 1 : CONTROLE DE VELOCIDADE DE UM MOTOR DC
   @author
*/


int efeito = 3;



void setup() {
  pinMode(11, OUTPUT); // importante!!! (saída PWM~)

}

void loop() {
  for (int i = 0; i < 256; i++) {
    analogWrite(11, i); //PWM 0A 225
    delay (efeito);
  }

  for (int i = 254; i >= 0; i--) {
    analogWrite(11, i); //PWM 0A 225
    delay (efeito);
  }
}
