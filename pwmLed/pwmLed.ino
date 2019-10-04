/*
   EXEMPLO DE USO PWM
   EXEMPLO 1 : CONTROLE DE VELOCIDADE DE UM MOTOR DC
   @author
*/


int efeito = 30;



void setup() {
  pinMode(3, OUTPUT); // importante!!! (saída PWM~)

}

void loop() {
  for (int i = 0; i < 256; i++) {
    analogWrite(3, i); //PWM 0A 225
    delay (efeito);
  }

  for (int i = 256; i >= 0; i--) {
    analogWrite(3, i); //PWM 0A 225
    delay (efeito);
  }
}
