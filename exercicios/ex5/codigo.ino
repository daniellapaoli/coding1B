// C++ code
//
void setup()
{
  pinMode(1, OUTPUT); // led vermelha
  pinMode(2, INPUT); // botao
}

void loop()
{
  if(digitalRead(2) == HIGH){
  digitalWrite(1, LOW);
  delay(1000);
}
  else{
    digitalWrite(1, HIGH);
  }
}
