# PandaCAN
PandaCAN is an extruder control board that connect to main board with CAN interface, more resistant to noise,reduce a lot of wires for your 3D printer.
### Why CAN bus?
CAN(Controller Area Network) is a robust serial communication bus found mostly in automotive and industrial environments.
1. Resistant to noise, you will have less signal noise and wiring problem.
2. Reduce the wires from more than 19 to only 4. 

      19 = hotend cooling Fan: 2 + model cooling Fan: 2 + heater: 2 + temperature sensor: 2 + BLtouch: 5 + Extruder motor: 4+Runout sensor:2

3. High data rate 1Mbps.
![](https://gitee.com/markyue/pandapi_wiki/raw/master/imges/esp/23564.jpg)


Items | Specifications  
--- | --- 
MCU| ESP32
Main board| There are only two printer main boards [PandaZHU and PandaM4](https://github.com/markniu/PandaZHU) support this PandaCAN extruder board now.
E motor Driver|TMC2209
Bed leveling    | 	  BLtouch/ support wild range voltage 5V~36V of inductive sensor NPN.
heater  |  15Amax (100A mosfet PSMN1R0-30YLC)
Board FAN   | 5V FAN for cooling TMC2209
hotend FAN | 12/24V PWM FAN
prints FAN | 12/24V PWM FAN
temperature sensor| 1 thermistors NTC100K (30degree~260degree)
High temperature sensor |  will support PT100 (max31865) in the other version 

[More or TEST video](https://hackaday.io/project/181669-reduce-the-wires-from-19-to-4-with-can-bus)
