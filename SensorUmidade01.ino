/*esse */


const int pinoSensor = A0;
float resultado;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pinoSensor, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  resultado = (analogRead(pinoSensor));
  resultado = map(resultado, 1023, 0, 0, 100);
  Serial.println((resultado));
  Serial.print("%");
  delay(1000);
}
