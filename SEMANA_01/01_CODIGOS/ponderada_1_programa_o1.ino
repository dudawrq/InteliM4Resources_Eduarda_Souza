// C++ code
//
void setup()
{
	pinMode(8, OUTPUT); //Estabelecendo qual pino será usado
  	pinMode(5, OUTPUT); //Estabelecendo qual pino será usado
  	pinMode(2, OUTPUT); //Estabelecendo qual pino será usado
  

}

void loop()
{
  digitalWrite(8, HIGH); //Ligando LED da porta 8
  delay(200); //Tempo de espera
  digitalWrite(8, LOW); //Desligando LED da porta 8
  digitalWrite(5, HIGH); //Ligando LED da porta 5
  delay(200); //Tempo de espera
  digitalWrite(5, LOW); //Desligando LED da porta 5
  digitalWrite(2, HIGH); //Ligando LED da porta 0
  delay(200); //Tempo de espera
  digitalWrite(2, LOW); //Desligando LED da porta 0
}