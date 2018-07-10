int ledOut = 13;
int input = A0;
int value=11;


void setup()
{
  pinMode(ledOut, OUTPUT);
  pinMode(input , INPUT);
  Serial.begin(9600);
}

void loop()
{
  value = analogRead(input);
  Serial.println(value);
  
  if(value <= 200)
  {
    digitalWrite(ledOut, HIGH);
  }
  else
  {
    digitalWrite(ledOut, LOW);
  }
}