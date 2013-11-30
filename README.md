# B.U.M. 
# The Bathroom Usage Monitor. 
### using an Arduino, a handful of components and a web server


 
Heavily influenced by the folks at [Sanborn](http://www.sanbornmediafactory.com/portfolio_pieces/bum/#>) and our own cross-legged pressing needs at [Playerize Networks Inc](http://playerize.com) and [East Side Game Studio](http://www.eastsidegamestudio.com)

I hereby release this to the public domain. Use at your own risk. If you burn down your cat and your house runs away by using this code, it's your own fault for trying it.

##Overview:


This sketch is one of 3 components cobbled together to monitor the doors and lights of a pair of bathrooms in our office. Due to the number of people in our office, it's not unusual to make the trip to the bathroom  only to find that both of them are occupied. This Frankenstein's monster of parts intends to relieve the pressure, so to speak, by allowing people to access an internal web site and view the status of the bathrooms.  

The Arduino monitors two states for each bathroom: light on/off, door open/closed. This is done via two photocells and two common wired magnetic window/door switches used by alarm systems. 

I decided it was prudent to monitor the light states as the bathroom fans only run when the lights are on. You can reach your own conclusions. 

###Requirements:
- Arduino (this example uses the Duemilanova)
- Bluetooth module (JY-MCU or equivalent)
- A Bluetooth-capable computer to act as a web server
- 2 common wired magnetic window/door switches
- 2 photocells (cadmium sulfide)
- 4 LEDs (two red, two green)
- misc wiring, solder and soldering skills
- probably a box to tuck it all into

**Note:** I'll be building this and publishing code when I can in my free time. If you're interesting following this project, then subscribe to it.

Krys Wallbank <arduino.bum@crucut.com>

