/*
  Simple Temperature Measurement using LM35 Sensor
  Microcontroller: ESP32
*/

#define LM35_PIN 34      // ADC pin connected to LM35 output
#define ADC_MAX 4095.0   // ESP32 ADC resolution (12-bit)
#define VREF 3.3         // ESP32 reference voltage

void setup() {
  Serial.begin(9600);
  delay(1000);
  Serial.println("LM35 Temperature Sensor with ESP32");
}

void loop() {
  int adcValue = analogRead(LM35_PIN);

  // Convert ADC value to voltage
  float voltage = (adcValue / ADC_MAX) * VREF;

  // LM35 gives 10mV per °C
  float temperatureC = voltage * 100;

  Serial.print("ADC Value: ");
  Serial.print(adcValue);
  Serial.print(" | Voltage: ");
  Serial.print(voltage);
  Serial.print(" V | Temperature: ");
  Serial.print(temperatureC);
  Serial.println(" °C");

  delay(2000);
}
