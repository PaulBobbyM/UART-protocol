# UART-protocol
I  have used an Arduino and Ultrasonic Distance Sensor to study and test the UART protocol.

Hardware used:
- Arduino Uno R3
- Ultrasonic Distance Sensor(HC-SR04)

Communication protocol:
- UART/USART

Software used:
- Arduino IDE

## Reading from the Ultrasonic Sensor
To read from an ultrasonic distance sensor with Arduino, first connect the sensor to the Arduino board by wiring the VCC pin to 5V, GND to GND, 
Trigger to a digital pin (such as pin 7), and Echo to another digital pin (like pin 6). Then, write code that triggers the sensor to emit an ultrasonic pulse, measures the time it takes for the pulse to return after hitting an object, and calculates the distance based on this time. This process involves Arduino sending a pulse, the sensor emitting the ultrasonic pulse, detecting the bounce back, measuring the time, and calculating the distance using the speed of sound. The calculated distance is then printed to the Serial Monitor in centimeters. This operation continues in a loop, constantly updating the distance reading for real-time monitoring or control applications

## TX and RX pins
The "TX" and "RX" pins on an Arduino board facilitate serial communication. "TX" stands for "Transmit," used for sending data from the Arduino to another device, while "RX" stands for "Receive," used for receiving data from another device. These pins are commonly employed when communicating with external devices such as computers or other Arduinos. It's worth noting that these pins are also utilized during the Arduino's programming process via USB, necessitating temporary disconnection when uploading new code.

## UART Protocol
The UART (Universal Asynchronous Receiver-Transmitter) protocol is a communication protocol commonly used for serial communication between devices. It allows data transmission between devices using only two wires: one for transmitting data (TX) and the other for receiving data (RX). UART operates asynchronously, meaning that data is transmitted without a clock signal. Instead, the transmitting and receiving devices must agree on a specific baud rate (bits per second) to ensure proper communication. Data is sent in frames, typically consisting of a start bit, data bits (usually 8 bits), an optional parity bit for error checking, and one or more stop bits. UART is widely used in microcontrollers, embedded systems, and communication between peripheral devices due to its simplicity and versatility.
