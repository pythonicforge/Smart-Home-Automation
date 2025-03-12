#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

const int LED_Pin = 9;
const int LDR_Pin = A0;
const int TEMP_Pin = A1;
const int FAN_Pin = 5;
int lightThreshold = 500;
int tempThreshold = 24;

void setup()
{
  pinMode(LED_Pin, OUTPUT);
  pinMode(LDR_Pin, INPUT);
  pinMode(TEMP_Pin, INPUT);
  pinMode(FAN_Pin, OUTPUT);
  
  lcd.init();
  lcd.clear();
  lcd.backlight();
}

void loop()
{
  int LDR_Value = analogRead(LDR_Pin);
  lcd.setCursor(0,0);
  lcd.print("Light: ");
  lcd.setCursor(7, 0);
  lcd.print(LDR_Value);
  lcd.print(" LUX");
  if (LDR_Value <= lightThreshold) {
    digitalWrite(LED_Pin, HIGH);
  } else {
    digitalWrite(LED_Pin, LOW);
  }

  int tempVal = analogRead(TEMP_Pin);
  float temperature = (tempVal * 0.48828125);
  
  lcd.setCursor(0,1);
  lcd.print("Temp: ");
  lcd.setCursor(6, 1);
  lcd.print(temperature);
  lcd.print(" C");

  if (temperature >= tempThreshold) {
    digitalWrite(FAN_Pin, HIGH);
  } else {
    digitalWrite(FAN_Pin, LOW);
  }

  delay(1000);
}
