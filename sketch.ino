#include <ESP32Servo.h>

#define TRIG_PIN 5
#define ECHO_PIN 4    // Ganti ECHO ke pin lain, jangan 18 karena dipakai servo
#define PIN_TOMBOL 12
#define PIN_SERVO 18

Servo myServo;

long duration;
int distance;

void setup() {
  Serial.begin(115200);

  // Setup tombol
  pinMode(PIN_TOMBOL, INPUT_PULLUP);

  // Setup servo
  myServo.attach(PIN_SERVO);
  myServo.write(0); // posisi tutup

  // Setup sensor ultrasonic
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);

  Serial.println("Pet Feeder Siap Digunakan");
}

void loop() {
  // Tombol ditekan
  if (digitalRead(PIN_TOMBOL) == LOW) {
    Serial.println("Feeding...");
    myServo.write(90);   // buka
    delay(1000);
    myServo.write(0);    // tutup
    Serial.println("Selesai memberi makan");
    delay(1000);         // debounce
  }

  // Sensor Ultrasonik: ukur jarak
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  duration = pulseIn(ECHO_PIN, HIGH);
  distance = duration * 0.034 / 2;

  Serial.print("Jarak makanan (cm): ");
  Serial.println(distance);

  delay(1000);
}
