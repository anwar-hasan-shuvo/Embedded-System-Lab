int ledOut = 13;
int input = A1;
int value;
float tempC=0;

void setup()
{
  pinMode(ledOut, OUTPUT);
  pinMode(input , INPUT);
  Serial.begin(9600);
}

void loop()
{
  value = analogRead(input);
  
  value = (value * 500) / 1023;
  
  tempC = value;
  
  Serial.println(tempC);
}