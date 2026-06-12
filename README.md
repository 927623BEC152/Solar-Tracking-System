# IoT-Based Solar Tracking Cloth Dryer

## Project Overview

The IoT-Based Solar Tracking Cloth Dryer is an automated drying system that tracks sunlight direction and provides rain notifications through a web application.

## Objectives

* Maximize cloth drying efficiency.
* Automatically track sunlight.
* Notify users when rain is detected.
* Provide real-time monitoring through a web interface.

## Components Used

### Hardware

* Arduino Uno
* ESP32 WiFi Module
* LDR Sensors
* Rain Sensor
* Stepper Motor
* Stepper Motor Driver
* Battery

### Software

* Arduino IDE
* Python
* Flask
* HTML
* JavaScript

## Working Principle

1. Two LDR sensors detect sunlight intensity.
2. Arduino Uno compares the sensor values.
3. The stepper motor rotates toward the direction of maximum sunlight.
4. The rain sensor continuously checks for rainfall.
5. Arduino sends the sensor information to ESP32 through UART communication.
6. ESP32 transfers the data to the Flask server using WiFi.
7. The web dashboard displays the current status and rain alerts.

## File Structure

Solar_Tracking_Cloth_Dryer/

├── arduinocode.ino

├── wificode.ino

├── server.py

├── dashboard.html

└── README.md

## Features

* Automatic solar tracking
* Rain detection
* WiFi communication
* Web-based monitoring
* Real-time sensor display

## Advantages

* Saves drying time
* Improves sunlight utilization
* Reduces manual effort
* Provides rain alerts
* Low-cost IoT solution

## Future Enhancements

* Automatic cloth cover mechanism
* Mobile application
* Weather forecasting integration
* Cloud data storage

## Conclusion

The IoT-Based Solar Tracking Cloth Dryer is an Embedded and IoT solution that combines Arduino Uno, ESP32, Python Flask, and web technologies to automate the cloth drying process and improve user convenience.
