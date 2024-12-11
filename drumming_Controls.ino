#include <Adafruit_CircuitPlayground.h>

float X, Y, Z;

void setup() {
  Serial.begin(9600);
  CircuitPlayground.begin();
}

void loop() {

//X, Y, and Z coordinates of the playground respecfully are given a variable
  X = CircuitPlayground.motionX();
  Y = CircuitPlayground.motionY();
  Z = CircuitPlayground.motionZ();

//Detects cymbal hit if the playground has an acceleration of 19 in the negative Z direction
  if (Z <= -19) {
  Serial.print("Cymbal Hit!");
  delay(50);
}

//Detects drum hit if the playground has an acceleration of 19 in the negative X direction
  if (X <= -19) {
  Serial.print("Drum Hit!");
  delay(50);
}

}