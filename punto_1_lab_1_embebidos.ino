//Declaración de Variables
int potenciometro_100k = A0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(potenciometro_100k, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int valor_poten100k = analogRead(potenciometro_100k);
  Serial.println("El valor del potenciometro de 100 k es: ");
  Serial.println(valor_poten100k);
}
