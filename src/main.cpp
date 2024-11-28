// /Users/<username>/.platformio/packages/framework-arduinoespressif32/cores/esp32/Arduino.h
#include <Arduino.h>
// define led according to pin diagram in article
const int led = D0;  // there is no LED_BUILTIN available for the XIAO ESP32C3.

void setup() {
    // initialize digital pin led as an output
    pinMode(led, OUTPUT);
}

void loop() {
    digitalWrite(led, HIGH);  // turn the LED on
    delay(1000);              // wait for a second
    digitalWrite(led, LOW);   // turn the LED off
    delay(1000);              // wait for a second
}

int main() {
    setup();
    while (true) {
        loop();
    }
    return 0;
}
