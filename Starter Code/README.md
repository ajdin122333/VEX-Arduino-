# Arduino-VEX3
Exploration

Reminder in Arduino IDE: Open Serial Monitor

Hyperlinks
- Exploration of PlatformIO, <a href="https://github.com/MercersKitchen/Arduino-VEX3?tab=readme-ov-file#arduino-vex3">Text Here</a>
- VEX Ultrasonic, <a href="https://github.com/MercersKitchen/Arduino-VEX3/tree/main?tab=readme-ov-file#vex-ultrasonic">Text Here</a>
    - <a href="https://github.com/MercersKitchen/Arduino-VEX3/blob/main/Vex_ultrasound/Vex_ultrasound.ino">Code Here</a>
    - See Folder above for Images
- TBA, <a href="">Text Here</a>
- TBA, <a href="">Code Here</a>


** Note:** forked and alternate from Mr. Rutter
- https://github.com/NickRutterUalberta/Arduino-VEX3

---

# Exploration of PlatformIO
- Install PlatformIO as an Extension
- Create a New Project from a ```.ino file```
- Select Accurate Board (i.e. Arudino Uno)

When opening again
- In Folder ```scr``` open ```.ino```
- CAUTION: delete any main.cpp, etc
- Then open PlatformIO / Open / Navigate to platformio.ino / Open Project
- Switch to the Arduino Program
- Note: add ``` #include <arduino.h>``` library

To open a new Folder: File / New Window OR Open Folder

---

# Converting Arduino to VSC-PlatformIO
- In Github Desktop / Open VSC

### Notes to include
- New Project
- Choose Board
- Name File
- PlatformIO will create contents of folder
- copy .ino to source
- delete main.cpp
- execute by checkmark, arrow, and clicking the pulg in (serial monitor, in the PlatformIO bottom-picker)

---

# VEX Ultrasonic
- Black: ground
- Red: 5V Power
- digital output means triggering a sensor between 0 & 1

Trigger (OUTPUT): Orange, Pin-9

Echo (INPUT): Yellow, Pin-10

---

# VEX Shaft Encoder
- Black: ground
- Red: 5V (CAUTION current image illustrates 3.3V)
- digital output means triggering a sensor between 0 & 1

Outer White Wire = 3 Pin

Inner White Wire = 5 Pin

If Power connected to 3.3V program runs but sensor does not output or input distance

---

# Line Follower
- **See Folder for PDFs** about sensor desgin and hints.
- Black: ground
- Red: 5V

- analog means reading a specifc number

- line sensor: what is the darkest number, what is the birghtest number
- how does this correspond in "real-life"

Google Search: https://www.vexrobotics.com/276-2154.html?___store=vexroboticsca&___from_store=vexrobotics&srsltid=AfmBOopOWOMtHZChHNC3Sl_xxSmBXaDxidMMMvo1M1As8EO_jG4Fgu_r#attr-vex_compatability
- Sensor Search numbers on sesnor: Vex3 2442BB [276-2154]

---

# Potentiometer

Video Support: https://youtu.be/Wa8CjGsOFzY?si=0STN7rZC84WG9xFl
- https://docs.arduino.cc/learn/electronics/potentiometer-basics/

### Rearch
- https://kb.vex.com/hc/en-us/articles/360039090591-Using-the-V5-3-Wire-Potentiometer
- https://wiki.purduesigbots.com/vex-electronics/vex-sensors/3-pin-adi-sensors/potentiometer
- https://www.vexforum.com/t/potentiometer/45361
- https://kb.vex.com/hc/en-us/articles/360039090591-Using-the-V5-3-Wire-Potentiometer

--- 

# Bump Switch


Ideas
- https://kb.vex.com/hc/en-us/articles/360038026831-Using-the-V5-3-Wire-Bumper-Switch-v2-Limit-Switch
- https://www.vexforum.com/t/programming-bumper-switches/23430


--- 

---

# Limit Switch



Ideas
- https://kb.vex.com/hc/en-us/articles/360038026831-Using-the-V5-3-Wire-Bumper-Switch-v2-Limit-Switch



--- 

# Arduino Uno Playlist

https://youtu.be/Wa8CjGsOFzY?si=0STN7rZC84WG9xFl


---

# To Include
- find design ideas for sensor
- design self-driving car | apply to cars already made

---

# To Explore
- https://github.com/michaellatman/Arduino-VEX
- https://forum.arduino.cc/t/vex-kit-controller-usage/1158279/2
- https://learn.sparkfun.com/blog/1593
- https://forum.arduino.cc/t/problems-incorporating-vex-into-arduino/520665
- 
