# USED ELECTRONICAL COMPONENTS

In this part I will explain components that is used in this project.
* Arduino UNO
* NEMA 23 Stepper Motor
* TB6560 Stepper Motor Driver
* Power Supply
* Potentiometer
* Jumpers <br>
## Arduino UNO
I used Arduino in this project beacause it is reasonable and cheap.Also it can be understood easily and people can change code rapidly.<br>
If you want,you can use other microcontrollers such as PIC.
![Uno](https://github.com/guneykunt1904/Open-Source-Ventilation-Device/blob/master/docs/Arduino%20uno.jpg)

## NEMA 23
First version of the project I am using NEMA 23 3A stepper motor.Its serial code is 57BYGH56-3004A.Its current value is 3A and it can <br>
create 1.26 Nm torque.This Torque value is enough.As I mentioned in the [readme.md](https://github.com/guneykunt1904/Open-Source-Ventilation-Device/blob/master/README.md) <br>
ıf you have less powerfull motor you can try with more longer arm whether it works or not.

![nema23](https://github.com/guneykunt1904/Open-Source-Ventilation-Device/blob/master/docs/Pulley_1.jpeg)
## TB6560

 If you are using strong stepper motor like NEMA 23 you have to use stepper motor drivers that can drive at high current rates like 3A.<br>
 TB6560 can give 3A output current.Also, I am using driver in this conditions  <br>
 SW1 = ON    SW2 = ON    SW3 = ON <br>
 S1 = OFF  S2 = ON S3 = OFF  <br>
 S4 = ON   S5 =OFF S6 = OFF <br>
 
 These means 3A Output current 1/16 microstepping and %20 Stop current %0 decay current if you want to more information <br>
 you can look at its data sheet here is the [link](https://www.allelectronics.com/mas_assets/media/allelectronics2018/spec/SMC-5.pdf) <br>
 Also,I am using 24V power Supply As you can understand at the figure the pinouts should be like this but yu don't have to connect enable pins.
 
 ![TB6560](https://github.com/guneykunt1904/Open-Source-Ventilation-Device/blob/master/docs/Tb6560.jpeg)
## Power Supply 

24V power supply is recommended with TB6560.Yet,you can use laptop power supplies such that 19.5V 3A its your responsibility.

## Potentiometes
I am using potentiometers but you can use encoders or more comlicated components.I am using A0 pin as respiration rate  pin and A1 pin as tidal volume pin.
![potentiometers](https://github.com/guneykunt1904/Open-Source-Ventilation-Device/blob/master/docs/Potentiometers.jpeg)

## Jumpers

Now,I use breadboard to create project's prototype but there will be pcb and schematic files for this project.

## LCD 

There may be lcd or other improvements this page will be updated in case there is improvements.
