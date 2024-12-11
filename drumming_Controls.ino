#include <Adafruit_CircuitPlayground.h>

float X, Y, Z;

void setup() {
  Serial.begin(9600);
  CircuitPlayground.begin();
}

void loop() {
  X = CircuitPlayground.motionX();
  Y = CircuitPlayground.motionY();
  Z = CircuitPlayground.motionZ();

  // Serial.print("X: ");
  // Serial.print(X);
  // Serial.print("  Y: ");
  // Serial.print(Y);
  // Serial.print("  Z: ");
  // Serial.println(Z);

  if (Z <= -19) {
  Serial.print("Cymbal Hit!");
  delay(10);
}

  if (X <= -19) {
  Serial.print("Drum Hit!");
  delay(10);
}

//   if (Z >= 19) {
//   Serial.print("Cymbal Hit!");
// }

//   if (X >= 18) {
//   Serial.print("Drum Hit!");
// }

//  delay(50);
}