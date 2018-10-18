#include <Arduino.h>
#include "RandomLib.h"

RandomLib _RandomLib;

void setup() {
    Serial.begin(115200);
    Serial.println("Finish!");
}

void loop() {
    Serial.println();

    Serial.println(_RandomLib.getNumberInt(10));

    Serial.println(_RandomLib.getNumberInt(30, 100));

    Serial.println(_RandomLib.getNumberFloat(20.0, 40.0));

    delay(1000);
}