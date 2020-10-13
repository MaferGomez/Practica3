int pot1=0;
float t;
void setup() {
pinMode(A0, INPUT);
Serial.begin(9600);
}

void loop() {
  delay(1000);
  t=analogRead(A0);
  t=map(t,0,1023,0,72);
  Serial.print("La temperatura es: ");
  Serial.print(t);
  Serial.println(" °C ");
}
