// -------------------------------------------------
// Copyright (c) 2023 HiBit <https://www.hibit.dev>
// -------------------------------------------------

#define MOTOR_PIN 3
 
void setup()
{
  pinMode(MOTOR_PIN, OUTPUT);
 
  Serial.begin(115200);
}
 
void loop()
{
  Serial.println("Turning motor ON");
  digitalWrite(MOTOR_PIN, HIGH);
  delay(3000); // Wait three seconds
 
  Serial.println("Turning motor OFF");
  digitalWrite(MOTOR_PIN, LOW);
  delay(3000); // Wait three seconds
}
