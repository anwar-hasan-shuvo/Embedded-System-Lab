int led[3]= {6, 10, 13};
void setup()
{
  for(int i=0;i<=3;i++)
  {
    pinMode(led[i], OUTPUT);
  }
}

void loop()
{
  digitalWrite(led[0], HIGH);
  delay(1000);
  digitalWrite(led[0], LOW);
  
  
  digitalWrite(led[1], HIGH);
  delay(500);
  digitalWrite(led[1], LOW);
  
  digitalWrite(led[2], HIGH);
  delay(200);
  digitalWrite(led[2], LOW);
  
}