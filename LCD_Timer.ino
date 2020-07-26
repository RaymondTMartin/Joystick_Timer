/*
  Helped with inital LCD setup
  https://www.makerguides.com/character-lcd-arduino-tutorial/
*/

// LiquidCrystal library:
#include <LiquidCrystal.h>

// Create an LCD object. Parameters: (RS, E, D4, D5, D6, D7):
LiquidCrystal lcd = LiquidCrystal(2, 3, 7, 6, 5, 4);

void setup() {
  // Specify the LCD's number of columns and rows
  lcd.begin(16, 2);
}

void loop() {
  lcd.setCursor(2, 0);
  lcd.print("Initial");
  lcd.setCursor(2, 1);
  lcd.print("Upload"); 
}
