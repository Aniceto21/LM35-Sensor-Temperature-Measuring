# Simple Temperature Measurement using LM35 Sensor and ESP32

## 📌 Project Overview
This project measures temperature using an **LM35 temperature sensor** connected to an **ESP32 microcontroller**.  
The ESP32 reads the analog voltage from the LM35 sensor, converts it into temperature values, and displays the result on the Serial Monitor.

---

## 🧰 Components Required
- ESP32 Development Board
- LM35 Temperature Sensor
- Breadboard
- Jumper Wires
- USB Cable

---

## 🔌 Circuit Connections

| LM35 Pin | ESP32 Pin |
|--------|-----------|
| VCC    | 3.3V / 5V |
| GND    | GND       |
| OUT    | GPIO 34   |

> ⚠️ GPIO 34 is an ADC-only pin and ideal for analog input.

---

## ⚙️ Working Principle
- LM35 outputs **10 mV per °C**
- ESP32 reads analog voltage using its ADC
- Voltage is converted into temperature using:
  
