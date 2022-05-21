#define potentiometr A0
#define led 2
void setup()
{
  pinMode(potentiometr, INPUT);
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop()
{
  int sig = analogRead(potentiometr);
  Serial.println(sig);
  if (sig >=500)
  {
    digitalWrite(led, HIGH);
    delay(1000);
  }
  else
  {
    digitalWrite(led, LOW);
    delay(1000);
  }
}