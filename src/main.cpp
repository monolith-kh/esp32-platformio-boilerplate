#include <Arduino.h>


void setup() {
  Serial.begin(115200);
  delay(3000);

  Serial.println("BAAM!!!");
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(1000);
}
