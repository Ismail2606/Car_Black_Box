# Car Black Box

The **Car Black Box** is an embedded systems project developed using **Embedded C** on a PIC microcontroller.  
Similar to an aircraft flight recorder, the system records important vehicle parameters and events such as gear changes and stores them for monitoring and analysis.

The project uses multiple embedded peripherals including **RTC, ADC, UART, I2C, LCD, and Matrix Keypad** to simulate a real automotive event logging system.

---

## Features

- Dashboard displaying real-time vehicle data
- Event logging system
- View stored logs
- Download logs using UART
- Clear stored logs
- Time configuration using RTC
- Menu-driven user interface using keypad

---

## Technologies Used

- Embedded C
- PIC Microcontroller
- MPLAB X IDE
- I2C Communication
- UART Communication
- ADC (Analog to Digital Converter)
- DS1307 Real Time Clock
- Matrix Keypad Interface
- LCD Display Interface

---

## System Modules

### 1. Dashboard
Displays real-time vehicle information such as speed, gear status, and system events.

### 2. Main Menu
Allows the user to navigate between different system operations.

### 3. View Logs
Displays stored vehicle event logs on the LCD screen.

### 4. Download Logs
Transfers stored logs to a computer using **UART serial communication**.

### 5. Clear Logs
Deletes all stored logs from memory.

### 6. Set Time
Allows configuration of date and time using the **DS1307 RTC module**.

---

## Applications

- Automotive event monitoring
- Accident data recording
- Vehicle diagnostics
- Driver behavior analysis

---
