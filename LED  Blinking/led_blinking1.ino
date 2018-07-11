void setup()
{
  pinMode(7, OUTPUT);
}

void loop()
{
  digitalWrite(7, HIGH);
  delay(100); // Wait for 100 millisecond(s)
  digitalWrite(7, LOW);
  delay(100); // Wait for 100 millisecond(s)
}