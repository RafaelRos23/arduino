

char leitor;
void setup() {

  pinMode (13, OUTPUT);
  pinMode (12, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() ) {
    leitor = Serial.read();
    if (leitor == 'a') {
      digitalWrite (13, HIGH);
    } if (leitor == 's') {
      digitalWrite (13, LOW);
    }
  }
  if (leitor == 'q') {
    digitalWrite (12, HIGH);
  } if (leitor == 'w') {
    digitalWrite (12, LOW);
  }
}
