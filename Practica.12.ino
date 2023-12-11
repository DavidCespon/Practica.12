// C++ code
//
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);

  digitalWrite(13, HIGH);
  delay(10000); // Wait for 10000 millisecond(s)
  digitalWrite(13, LOW);
  delay(4000); // Wait for 4000 millisecond(s)
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  delay(10000); // Wait for 10000 millisecond(s)
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  delay(4000); // Wait for 4000 millisecond(s)
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}
