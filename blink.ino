/*Blink*/
//ledPin refer to ESP32 GPIO 23
const int ledPin = 23;
//the setup function runs once when you press reset or power the board
void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledPin, HIGH);
  delay(1000);
  digitalWrite(ledPin, LOW);
  delay(1000);
}
