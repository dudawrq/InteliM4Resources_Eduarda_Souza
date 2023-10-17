void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Hello, ESP32!");
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
//Letra S
  digitalWrite(13, HIGH);
  delay(200);
  digitalWrite(13, LOW);
  delay(200);
  digitalWrite(13, HIGH);
  delay(200);
  digitalWrite(13, LOW);
  delay(200);
  digitalWrite(13, HIGH);
  delay(200);
  digitalWrite(13, LOW);
  delay(300);

  //Letra O
  digitalWrite(13, HIGH);
  delay(900);
  digitalWrite(13, LOW);
  delay(200);
  digitalWrite(13, HIGH);
  delay(900);
  digitalWrite(13, LOW);
  delay(200);
  digitalWrite(13, HIGH);
  delay(900);
  digitalWrite(13, LOW);
  delay(300);

  //Letra S
  digitalWrite(13, HIGH);
  delay(200);
  digitalWrite(13, LOW);
  delay(200);
  digitalWrite(13, HIGH);
  delay(200);
  digitalWrite(13, LOW);
  delay(200);
  digitalWrite(13, HIGH);
  delay(200);
  digitalWrite(13, LOW);
  delay(1200);
}
