# ReactiveLamp

## Inspiration
Over this semester, I had been continually interested in the space of self-actuating materials and light sculptures. I had been quite inspired by work in human computer interaction involving conductive textiles as a mechanism for movement. Because I didn’t have the expertise of creating self-actuating textiles, I wanted to explore how I could create a structure that would allow me to use motors to embed movement. 

Concurrently, I was curious to explore what type of role embedded systems could play in our lived environment. I would often work in the SOM and see the roller shades slowly slide down the window when the sun was setting so as to keep the sun from directly hitting the building. I was interested in exploring if that same sort of reactivity could be embedded into decorative furniture like lamps.   

## Design

### 1: Building the structure

The concentric circles that make up the frame of the lamp is the most essential element that allows for sufficent range of movement. To build these circles, I lasercut a 24x24 inch (1/8 inch think) plank of plywood into concentric circles of 1/8 inch width. The radius of the circles ranged from 3 inches to 18 inches.

You may download the .cdr file to laser cut the same frame here: https://drive.google.com/file/d/1xclJCqCKUk4IFK0DHGoaPuSSn-ntKh-z/view?usp=sharing

Once you have your frame, you can use thin copper wire to string them together into spheres. For my lamp, I had three main spherical sections. 

### 2: Building the motor

The pulley system that pulls the lampshade up and down consists of a DC motor powered by 1.5 volts with string that runs from the motor to the bottom of the lamp. You can find the same motor in this DIY kit: https://www.amazon.com/Delinx-Homemade-DIY-Project-Kits/dp/B07DCWMMQN?ref_=fsclp_pl_dp_13

That DC motor conveniently had two rotating arms attached to it already, so all I needed to do was extend those arms with legos. 

To control the motor, use a three way switch with the schematic below. (taken from this tutorial https://www.instructables.com/id/HOW-TO%253a-Wire-a-DPDT-rocker-switch-for-reversing-po/?fbclid=IwAR0mo3x-EE8jMguVyp63Nn7BHJ-RcOLBQwm6sTuocJpSAKSSUrLupATmwG8) 

![alt text](https://felswebsite.s3.amazonaws.com/3wayswitch.jpg)

Alternatively you can build your own motor driver using an H-head if you have an Arduino that takes in analog values. The code for the H-head driver can be found above. 

But I would recommend the three way swtich if you do not have access to the analogWrite function and because it accomplishes our necessary functionality of changing the motor direction so that the lampshade will move up and down. 

### 3: Building the light source

I used an 12V LED light strip that was roughly 2 meters long. The LED strip consists of 4 inputs: power, R, G, and B, which are connected to ground. To power the LED, relay 12 volts of power from the breadboard to the LED strip while controlling RGB from my ESP. I also thought it would be interesting to connect a photoreceptor to my ESP which would then feed in values to the LED strip. I ultimately did not pursue this additional feature, but it is available in the code.




