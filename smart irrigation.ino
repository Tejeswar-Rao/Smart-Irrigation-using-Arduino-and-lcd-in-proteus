#include<LiquidCrystal.h>
LiquidCrystal lcd (12,11,5,4,3,2);
int sen = A0;
void setup() {
  // put your setup code here, to run once:
pinMode(sen,INPUT);
Serial.begin(9600);
lcd.begin(32,2);
}

void loop() {
  // put your main code here, to run repeatedly:
lcd.setCursor(0,0);
lcd.println("WELCOME TO ");
lcd.setCursor(0,1);
lcd.println("IRRIGATION SYSTEM");
//lcd.println("WELCOME TO IRRIGATION SYSTEM");
delay(1000);
lcd.clear();
sen = analogRead(A0);
Serial.println(sen);
lcd.print(sen);
delay(2000);
lcd.clear();
if (sen >= 600){
  lcd.println("I'M IN DRY STATE");
  delay(2000);
  lcd.clear();
}
else {
  lcd.println("I'M IN HEALTHY STATE");
  delay(2000);
lcd.clear();
}
}
