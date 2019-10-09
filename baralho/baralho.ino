void setup() {
  Serial.begin(9600);
   // iniciar gerador de números aleatórios(0 a 1024)
  randomSeed(analogRead(A0));
  String faces [13] = {"A","2","3","4","5","6","7","8","9","10","J","Q","K"};
  String nipes [4] = { "♦","♠","♥","♣"};
  int f = random(13); //sorteio de 13 números aleatórios (faces) 
  int n = random(4);//sorteio de 4 números aleatórios(nipes)
  Serial.print (faces [f]);
  Serial.println(nipes [n]);
}

void loop() {
  
}
