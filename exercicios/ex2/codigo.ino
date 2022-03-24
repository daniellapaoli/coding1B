// C++ code
//
void setup()
{
  pinMode(2, OUTPUT); // led azul
  pinMode(1, OUTPUT); // led vermelha
}

void loop()
{
  digitalWrite(2, HIGH);
  digitalWrite(1, LOW);
  delay(1000); // 1 segundo
  digitalWrite(1, HIGH);
  digitalWrite(2, LOW);
  delay(1000); // 1 segundo
}
  
