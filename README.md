# Li-Fi Project using Arduino: Transmit Data from Phone to Arduino using Light Signals

## 📌 Overview
This project demonstrates **Li-Fi (Light Fidelity)** based wireless communication using **Arduino**, **LDR sensor**, and **LCD display**.  
Text messages are transmitted through a smartphone flashlight as light signals and decoded using visible light communication (VLC).

## 🚀 Features
- Wireless communication using visible light
- Text transmission through phone flashlight
- Arduino-based signal decoding
- LDR sensor as receiver
- LCD display output
- Low-cost prototype implementation

## 🛠 Components Used
- Arduino Nano/Uno
- LDR Sensor Module
- 16x2 LCD Display
- Potentiometer
- Smartphone with Li-Fi App
- Jumper Wires
- Breadboard

## ⚙️ Working Principle
1. Mobile app converts text into binary.
2. Flashlight transmits binary through rapid ON/OFF blinking.
3. LDR detects light changes.
4. Arduino decodes received binary data.
5. Message is displayed on LCD.

## 📊 Block Diagram
```text
Mobile App/Flashlight
        ↓
   Light Signals
        ↓
    LDR Sensor
        ↓
     Arduino
        ↓
    LCD Display
```

## ✨ Advantages
- Faster than Wi-Fi (conceptually)
- Secure communication
- No RF interference
- Uses visible light spectrum

## ⚠ Limitations
- Requires direct line of sight
- Cannot pass through walls
- Affected by ambient light

## 🎯 Applications
- Smart Homes
- Underwater Communication
- Hospitals
- Aircraft Communication
- Secure Communication Systems
- Military Applications

## 👩‍💻 Authors
- Samiksha Chavan  
- Jagruti Thotam

## 🔮 Future Scope
- Improve transmission speed
- Add audio/data transfer
- Implement bidirectional communication
- Integrate IoT applications

## ⭐ Conclusion
This project successfully demonstrates data communication using visible light, proving Li-Fi as an innovative alternative wireless communication technology.