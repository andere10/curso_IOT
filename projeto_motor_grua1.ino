// C++ code
//
void setup()
{
  pinMode(5, INPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  Serial.begin(9600);
  pinMode(6, OUTPUT);
  pinMode(2, OUTPUT);
}

void loop()
{
  if (digitalRead(5) == 1) {
    digitalWrite(4, HIGH);
    digitalWrite(3, LOW);
    Serial.println("GRUA LIGADA");
    tone(6, 52, 100); // play tone 20 (G#1 = 52 Hz)
    digitalWrite(2, HIGH);
    delay(500); // Wait for 500 millisecond(s)
  } else {
    digitalWrite(4, LOW);
    digitalWrite(4, HIGH);
    Serial.println("GRUA DESLIGADA");
    tone(6, 52, 100); // play tone 20 (G#1 = 52 Hz)
    digitalWrite(2, LOW);
    delay(2000); // Wait for 2000 millisecond(s)
  }
}