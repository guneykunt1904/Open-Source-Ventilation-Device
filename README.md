# Open-Source-Ventilation-Device
The open coded ventilation device project against the COVİD-19 threat and extreme situtations.
# Disclaimer
**First of all this project doesn't provide exact test results and safety requierements Use your own judgment.This project doesn't give guarente.** <br>

* The code and the mechanical parts of this project don't give any medical advice and all responsibility is on the user.
* The material and documentation here is provided with no warranties explicit or implied.Provided data,code and the other things can be use as experimantal use.
* This site does not represent any official policies or procedures. <br>
**In no event shall the authors or copyright holders be liable for any claim, damages or other liability, whether in an action of contract, tort or otherwise, arising from, out of or in connection with the software or the use or other dealings in the software.
The project is provided "as is", without warranty of any kind, express or implied, including but not limited to the warranties of merchantability, fitness for a particular purpose and noninfringement.
The writers and people who are the parts of this projects don't take any responsibility or liability in any circumstances.**

**Only proceed and use this project if you accept this dislcaimer.**


## Aim of the Project
![System](https://github.com/guneykunt1904/Open-Source-Ventilation-Device/blob/master/docs/System.jpeg)
This project's aim is to provide a solution for people in shortage of the medical device espacially mechanical ventilation devices.

## Difficuilties when making this device

There were a lot of difficulties when I was trying to create this project because I don't have some devices such as 3D printer or Cnc<br>
So I did all of the parts by hands except pulley.
* First of all I was trying to do this project in quarantine conditions because there was curfew and I could only use internet sites and some parts of projects have to be produced in lathe so I reached the man whose name is Övgü Kavas([His youtube Channel](https://www.youtube.com/user/Velespitnet)) and ask for help from him.He tried to help me and produced the pulley part of the system.Also I tried a lot of designs but the design that I upload is our version 1.0.0

* I choose the design because it is effective,efficient and can be appliciable.**If you have less powerfull stepper motor than mine you can use longer arm to increase the torque that is applied to BWM bag.** Yet,you have to think about the weight of the arm it shouldn't be too heavy. <br>
<br>
<br>
<br>
Click on  photo to reach working video 

<br>

[![](http://img.youtube.com/vi/26Hov5GSZLI/0.jpg)](http://www.youtube.com/watch?v=26Hov5GSZLI "Video Link")
<br>
<br>
<br>
**I'm not getting paid for youtube video payment option is turned of for this video 
<br>
## CODE
Our code is uploaded to [Software](https://github.com/guneykunt1904/Open-Source-Ventilation-Device/tree/master/Software/Source_Code)and we can improve it.I have been already working on the code therefore I will add new versions of code.
## Features

* In this device we have 2 potentiometers to control Respiratory Rate and Tidal Volume that is given to patient.As you can see in the code the respiration rate in a minute is confined 9 to 17 breath.This numbers are sufficient most of the times but if you have more or less breath times in a minute you can change *MAX_BREATH_num* and *MIN_BREATH_num* parts of the code but there may be some errors when you make radical changes on the code. 

* Total volume of the BWM bag in this project is 1300ml so I adjust the maximum tidal volume as 1200ml and the minimum tidal volume as 450ml.According to code you can adjust between these values.Also you can change it according to your needs.In the *step_counter()* function minimum step number is 5000 and maximum step number is 7000 because I am using my stepper motor driver TB6560 in 1/16 microstepping mode.These values can be change according to your system(Your BWM bag,your stepper motor,your motor driver etc...). <br>


**There is more information about the code at the software part**

**Detailed İnformation about components and pin diagrams in [Electronical Parts](https://github.com/guneykunt1904/Open-Source-Ventilation-Device/tree/master/Electronical%20Parts)** <br>
**Detailed informaiton about Mechanical parts of the project is at the [Mechanical Parts](https://github.com/guneykunt1904/Open-Source-Ventilation-Device/tree/master/Mechanical%20Parts).**




