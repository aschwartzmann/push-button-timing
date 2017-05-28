# push-button-timing
The goal of this project is to let you manually trigger laps at a distance from the timing computer. LiveTimeFPV lets you manually record laps for a pilot by pressing one of the number keys on the keyboard to matches the drone number of the pilot in LiveTime. This project will let you hook up, up to 8 buttons to your your computer that when press will trigger an lap to be recorded in LiveTime. This is done with an Arduino that emulates a standard keyboard and relays button press to number press on the keyboard. 

Minimum Hardware
- Arduino Micro
- 8x 1K Resistors
- 8 Buttons

Buttons connect to 5V on one side and pins 5 through 12 on the otherside. Pin 5 through 12 need a 1k pull down resitor between the pin and ground.

Pin 5 = Pilot 1
Pin 6 = Pilot 2
Pin 7 = Pilot 3
Pin 8 = Pilot 4
Pin 9 = Pilot 5
Pin 10 = Pilot 6
Pin 11 = Pilot 7
Pin 12 = Pilot 8


5V ----- Push Button ------- Pin 5 ----- 1K resitor ------- Ground


Pic of out of the project box. Ignore the OLED screen I was testing a code that would connect via serial to LiveTime by faking a transponder decoder but emulating a keyboard turned out to be a lot easier than I thought it would. 

![Alt text](Proof%20of%20concept.jpg?raw=true "Out of Box")

![Alt text](ready%20for%20testing.jpg?raw=true "In Box")
