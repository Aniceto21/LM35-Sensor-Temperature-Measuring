
---

## 💻 Arduino Code
```cpp
#define LM35_PIN 34
#define ADC_MAX 4095.0
#define VREF 3.3

void setup() {
  Serial.begin(9600);
}

void loop() {
  int adcValue = analogRead(LM35_PIN);
  float voltage = (adcValue / ADC_MAX) * VREF;
  float temperatureC = voltage * 100;

  Serial.print("Temperature: ");
  Serial.print(temperatureC);
  Serial.println(" °C");

  delay(2000);
}
