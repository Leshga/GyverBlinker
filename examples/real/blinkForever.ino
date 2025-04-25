#include <Blinker.h>

Blinker led(13);

void setup() {
  pinMode(2, INPUT_PULLUP);  // кнопка включения
  pinMode(3, INPUT_PULLUP);  // кнопка выключения
}

void loop() {
  led.tick();

  if (!digitalRead(2)) led.blinkForever(400, 600);
  if (!digitalRead(3)) led.stop();
}
