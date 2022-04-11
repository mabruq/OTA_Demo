#include <Arduino.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

String firmwareVersion="1.0";
LiquidCrystal_I2C lcd(0x27, 16, 4);

void setup() {
  Serial.begin(9600);
  pinMode(34,INPUT);
  lcd.init();
  lcd.backlight();
}

void loop() {
  bool buttonState=digitalRead(34);
  Serial.println(buttonState);
  lcd.setCursor(0,0);
  lcd.print("OTA Demo");
  // delay(1000);
}