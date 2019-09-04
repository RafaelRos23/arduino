/**
   ESTUDO DAS PORTAS LÓGICAS
   AUTHOR RAFAEL OLIVEIRA DE SOUZA
*/

void setup() {
  pinMode (13, OUTPUT);
  pinMode (2, INPUT);
  pinMode(3, INPUT);
}

void loop() {
  if (digitalRead(2) == HIGH && digitalRead(3)== HIGH){
    digitalWrite(13, HIGH);}
    else {digitalWrite (13, LOW); }
  
  
}
