# CAN bus extruder board
PandaCAN is an extruder control board that connect to main board with CAN interface, more resistant to signal noise,reduce a lot of wires for your 3D printer.

![image](94007.jpg)

### Why CAN bus?
CAN(Controller Area Network) is a robust serial communication bus found mostly in automotive and industrial environments.
1. Resistant to noise, you will have less signal noise and wiring problem.
2. Reduce the wires from more than 19 to only 4. 

      19 = hotend cooling Fan: 2 + model cooling Fan: 2 + heater: 2 + temperature sensor: 2 + BLtouch: 5 + Extruder motor: 4+Runout sensor:2

3. High data rate 1Mbps.
![iamges](23564.jpg)


Items | Specifications  
--- | --- 
MCU| ESP32
Support Main board| There are only two printer main boards [PandaZHU and PandaM4](https://github.com/markniu/PandaZHU) support this PandaCAN extruder board now.
CAN Transceiver|SN65HVD230
Motor Driver|TMC2209
Bed leveling    | 	  BLtouch/ support wild range voltage 5V~36V of inductive sensor NPN.
Board FAN   | 5V FAN for cooling TMC2209
Hotend FAN | Cooling hotend,12/24V PWM FAN
Prints FAN | Cooling prints,12/24V PWM FAN
Runout | Filament Runout connector
Heater  |  15Amax (100A mosfet PSMN1R0-30YLC)
Temperature sensor| thermistors NTC100K (30degree~260degree)
High temperature sensor |   support PT100 (max31865) 

[Test video](https://hackaday.io/project/181669-reduce-the-wires-from-19-to-4-with-can-bus)

[Tutorial wiki](https://github.com/markniu/PandaCAN/wiki)

[Where to buy](https://www.pandapi3d.com/product-page/pandacan-extruder)

[Facebook](https://www.facebook.com/groups/380795976169477)
