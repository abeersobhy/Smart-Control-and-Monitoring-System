#  Smart Light Control and Monitoring System

A smart system designed to **control and monitor room lighting** both manually and automatically.  
It uses an **IR sensor** for automatic light switching when entering or leaving the room,  
a **Button (via EXTI)** for manual operation, and provides **real-time feedback** on an **LCD** and a **PC interface** via **UART communication**.

---

## ⚙️ Hardware Components

- **STM32F103C8T6** (Microcontroller)
- **16x2 LCD Display**
- **IR Sensor** (for automatic light detection)
- **Push Button** (manual control via EXTI)
- **Relay Module** (to switch the light)
- **USB to TTL Converter** (for UART communication with PC)
- **ST-LINK/V2** (for programming and debugging)

---

## 🧰 Software & Tools
- **STM32CubeIDE** – for coding, compiling, and debugging  
- **CoolTerm** – for UART monitoring on PC  
- **Programming Language:** C  
- **Embedded Layers:**
  - **MCAL:** GPIO, RCC, EXTI, UART drivers  
  - **HAL:** LCD, IR, Light Control, PC Display  
  - **APP:** System initialization and operation logic  

---

## 🎬 Demo Video
Here’s a short demo showing the system in action:  

🎥 [Watch the demo on YouTube](https://youtu.be/LXUEb28txF4)

---

## 🖼️ Take a Quick look 

<p align="right">
  <img src="Doc/SCMS.jpg" width="550" alt="Data Transfer">
</p>

<p align="left">
  <img src="Doc/PC_Display.png" width="550" alt="Data Transfer">
</p>

---

## 🚀 How to Use

1. **Connect LCD with STM32**
   - D7 : B12
   - D6 : B13
   - D5 : B14
   - D4 : B15
   - EN : A8
   - RS : A11
2. **Connect IR with STM32**
   - OUT : B11
3. **Connect Button with STM32 as Input floating**
   - B0 with pull up resistor
4. **Connect LED or Relay with STM32**
   - Relay : B5
5. **Flash the STM32** code using STM32CubeIDE or ST-Link Utility (where the .bin & .hex files are available on Debug folder).    
6. **Connect USB/TTL With PC and STM**
7. **Open Serial Monitor on PC:** **CoolTerm Recommended**
   - STM32 COM port @ `9600 baud`
   - 8 bit data
   - 1 stop bit

---

## 🧩 System Architecture
```plaintext
Project Root
│
├── main.c
│
├── MCAL
│   ├── GPIO
│   ├── RCC
│   ├── UART
│   └── EXTI
│
├── HAL
│   ├── LCD
│   ├── IR
│   ├── Light
│   └── PC_Display
│
└── Application
    ├── SACS.c
    └── SACS.h
