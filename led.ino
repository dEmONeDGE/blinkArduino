#define led 13

void setup(){
  Serial.begin(600);
  pinMode(led, OUTPUT);

  Serial.println("Bienvenidos al hola mundo.");
}

void loop(){
  digitalWrite(led, HIGH);
  Serial.println("Led encendido.");
  delay(500);
  digitalWrite(led, LOW);
  Serial.println("Led apagado");
  delay(500);
}
