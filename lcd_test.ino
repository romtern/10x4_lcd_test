#include <LiquidCrystal.h>
const int rs = 4, en = 5, d4 = 6, d5 = 7, d6 = 8, d7 = 9;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);// LCD interface pin

byte sim1[8] = {B11111,B11111,B11111,B11111,B11111,B11111,B11111,B11111,};


void setup() {
  lcd.begin(10, 4); // set up the LCD's number of columns and rows:
  lcd.createChar(1, sim1); // put your setup code here, to run once:
 
}

void loop() {
   int t;
   for (t = 0; t < 10; t++) {lcd.setCursor(t, 0); lcd.print("\1"); delay (100);}
   for (t = 0; t < 10; t++) {lcd.setCursor(t, 1); lcd.print("\1"); delay (100);}
   for (t = 0; t < 10; t++) {lcd.setCursor(t, 2); lcd.print("\1"); delay (100);}
   for (t = 0; t < 10; t++) {lcd.setCursor(t, 3); lcd.print("\1"); delay (100);}
   delay(3000);
   lcd.clear();

   
  // put your main code here, to run repeatedly:

}
