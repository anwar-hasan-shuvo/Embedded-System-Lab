int led = 13;
int input = 2;
int buttonState=LOW;

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(input , INPUT);
  Serial.begin(9600);
}

void loop()
{
  buttonState = digitalRead(input);
  
  if(buttonState == HIGH)
  {
    digitalWrite(led, HIGH);
    Serial.println("Button Pressed");
  }
  else
  {
    digitalWrite(led, LOW);
  }
}