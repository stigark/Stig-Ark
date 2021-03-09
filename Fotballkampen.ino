#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
const int switchPin = 6;
int switchState = 0;
int prevSwitchState = 0;
int reply;

void setup() {
  // put your setup code here, to run once:
lcd.begin(16, 2);
pinMode(switchPin, INPUT);
lcd.print("Skal du tippe?");
lcd.setCursor(0, 1);
lcd.print("Spor om en kamp!");
}

void loop() {
  // put your main code here, to run repeatedly:
switchState = digitalRead(switchPin);
  if (switchState != prevSwitchState) {
    if (switchState == LOW) {
      reply = random(8);
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("Resultatet blir;");
      lcd.setCursor(0, 1);
      switch(reply) {
        case 0:
        lcd.print("2 - 1");
        break;
        case 1:
        lcd.print("0 - 0");
        break;
        case 2:
        lcd.print("4 - 2");
        break;
        case 3:
        lcd.print("1 - 1");
        break;
        case 4:
        lcd.print("6 - 0");
        break;
        case 5:
        lcd.print("1 - 2");
        break;
        case 6:
        lcd.print("3 - 1");
        break;
        case 7:
        lcd.print("0 - 2");
        break;

        
      }
    }
  }
 prevSwitchState = switchState;

}
