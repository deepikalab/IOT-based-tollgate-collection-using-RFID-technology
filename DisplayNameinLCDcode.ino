int b;
char a;
int count=1000;
int count1=1000;
int count2=1000;
int i;
#include <LiquidCrystal.h>
LiquidCrystal lcd(13,12,11,10,9,8);


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
lcd.begin(16,2);
}

void loop() {
  // put your main code here, to run repeatedly:
while(Serial.available()>0)
{
  a=Serial.read();
  if(a=='7')
  {
    count=count-10;
 
  lcd.setCursor(0,0);
  lcd.print("deepika");
  lcd.setCursor(0,1);
  lcd.print("gate 1");
  lcd.setCursor(8,0);
  lcd.print(count);
  Serial.print("*");
   Serial.print("deepika");
    Serial.print(count);
Serial.print("#");
  }
 
  else if(a=='2')
  {
    count1=count1-10;
  //Serial.println("manasi");
   lcd.setCursor(0,0);
  lcd.print("manasi");
  lcd.setCursor(0,1);
  lcd.print("gate 2");
  lcd.setCursor(8,0);
  lcd.print(count1);
    Serial.print("*");
   Serial.print("manasi");
    Serial.print(count1);
Serial.print("#");
 }

else if(a=='D')
 {
 // int count2=1000;
  count2 = count2-30;
  //Serial.println("darwini");0
  lcd.setCursor(0,0);
  lcd.print("darwini");
  lcd.setCursor(0,1);
  lcd.print("gate 3");
  lcd.setCursor(8,0);
 lcd.print(count2);
   Serial.print("*");
   Serial.print("darwini");
    Serial.print(count2);
Serial.print("#");
 }
}
}
