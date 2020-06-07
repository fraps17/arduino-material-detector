# Arduino Material Detector

This is a simple example of material detection using different sensors for education purposes.
It uses a SN04-N NPN inductive proximity sensor to detect a metal object, and a combination of a laser diode and LDR resistor to distinguish between paper and plastic object based on reflectivity. A TCRT5000 infrared sensor is used to detect whether there's an object to analyze.
Works fine enough for simple materials, more properties should be analyzed though for better result.

## Wiring diagram

![wiring diagram](https://github.com/fraps17/arduino-material-detector/blob/master/schematic.png?raw=true)

## Components

 - Arduino (Nano or Uno)
 - SN04-N Inductive Proximity Sensor
 - LDR photo resistor
 - 5V Laser Diode
 - 3x LED
 - 4x 220 Ohm Resistors
 - TCRT5000 Infrared sensor