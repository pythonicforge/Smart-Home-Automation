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
  
  Serial.begin(9600);
}

void loop()
{
  int LDR_Value = analogRead(LDR_Pin);
  if (LDR_Value <= lightThreshold) {
    digitalWrite(LED_Pin, HIGH);
  } else {
    digitalWrite(LED_Pin, LOW);
  }

  int tempVal = analogRead(TEMP_Pin);
  float temperature = (tempVal * 0.48828125);

  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" °C");

  if (temperature >= tempThreshold) {
    digitalWrite(FAN_Pin, HIGH);
  } else {
    digitalWrite(FAN_Pin, LOW);
  }

  delay(1000);
}
