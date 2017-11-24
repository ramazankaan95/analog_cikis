int potdeger=0;
int ledpin=6;

void setup() {
  pinMode(ledpin, OUTPUT);
}

void loop() {
  potdeger=analogRead(A0);
  analogWrite(ledpin, potdeger/4);
}
