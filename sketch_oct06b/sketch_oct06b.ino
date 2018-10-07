void setup()
{
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  Serial.begin(9600);
  Serial.println("START THE LED");
}

void loop()
{
  // put your main code here, to run repeatedly:
  if(Serial.available() > 0)
  {
    char c = Serial.read();

    if(c == 'l' || c == 'L')
    {
      Serial.println("LED ON");
      digitalWrite(13, HIGH);
    }
    
    if(c == 'f' || c == 'F')
    {
      Serial.println("LED OFF");
      digitalWrite(13, LOW);
    }
  }
}
