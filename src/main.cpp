#include <Arduino.h>
#define ADC_PIN A0
#define ADC_MAX 4095.0
#define VREF 3.3

void setup() {
  Serial.begin(115200);
  delay(300);

  Serial.println("ESP32-C3 Voltage Reader Ready");
  Serial.println("ADC    Voltage(V)");
}

void loop() {
  int adcValue = analogRead(ADC_PIN);

  float voltage = (adcValue / ADC_MAX) * VREF;

  Serial.print(adcValue);
  Serial.print("    ");
  Serial.println(voltage, 3);

  delay(300);
}
