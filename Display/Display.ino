/**
 * leitura de um sensor no display
 * @author Rafael Oliveira de Souza
 */
#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  
  lcd.print("sensor");
}

void loop() {

  
}
