Automated Room Occupancy & Smart Lighting Control System

This project implements an intelligent room monitoring system that automatically counts the number of people entering and exiting a room and controls lighting based on real-time occupancy. It reduces manual monitoring and minimizes energy wastage by ensuring lights are turned ON only when the room is occupied.

🔧 Features

Automated people counting using IR sensors

Smart ON/OFF lighting control based on occupancy

Real-time occupancy display on LCD

EEPROM data storage using I²C communication protocol

Built on ARM7 (LPC2129) for reliable embedded performance

🛠 Technologies Used

ARM7 (LPC2129)

IR Sensors

EEPROM (I²C interface)

LCD Interface

Embedded C

I²C Communication Protocol

📂 Repository Contents

ARM7 (LPC2129) source code

I²C-based EEPROM interface code

Sensor handling modules

LCD display code

Main control logic for occupancy and lighting automation

🚀 How It Works

IR sensors detect entry and exit events.

The controller updates occupancy counts.

EEPROM stores count data via I²C.

LCD displays the real-time count.

Lights turn ON when count > 0 and OFF when count = 0.

📘 Applications

Classrooms

Offices

Conference halls

Labs

Smart buildings
