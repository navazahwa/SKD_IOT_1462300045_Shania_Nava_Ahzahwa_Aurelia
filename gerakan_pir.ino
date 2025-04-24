int pirPin = 2;     // Sensor PIR di Pin 2
int ledPin = 13;    // LED di Pin 13

void setup() {
  pinMode(pirPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);  // Untuk monitoring di Serial Monitor
}

void loop() {
  if (digitalRead(pirPin) == HIGH) {  // Jika gerakan terdeteksi
    digitalWrite(ledPin, HIGH);       // LED menyala
    Serial.println("Gerakan terdeteksi!");
    delay(5000);  // LED menyala selama 5 detik
  } else {
    digitalWrite(ledPin, LOW);  // LED mati
  }
}