#define led 13

void setup(){
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop(){
  digitalWrite(led, HIGH);
  Serial.println("Led encendido.");
  delay(500);
  digitalWrite(led, LOW);
  Serial.println("Led apagado");
  delay(500);
}
