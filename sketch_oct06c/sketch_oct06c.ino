
void setup() {
  // put your setup code here, to run once:
  pinMode(A0,INPUT);
  pinMode(A1, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int reading = analogRead(A0);
  Serial.println(reading);

  int value = map(reading, 0, 1023, 0, 255);
  analogWrite(A1, value);
}


