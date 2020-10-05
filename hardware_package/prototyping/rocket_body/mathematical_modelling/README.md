#### Mathematical modelling:
Changes since talking to Andre about this: The avionics package is what we are delivering rather that the rocket. Users will have their own rockets most likely so having any modelling that is specific to the rocket body is not worth doing.


~~This directory will contain mathematical relations between certain aspects of the rocket that the control system will need along with a block diagram connecting them all.~~

**Working on/completed**
- WIP: Motor angle to gimbal angle relation. PWM relation is handled by the Library. Have found the limits of the servos and now must settle on a mapping range. The issue at the moment is that both servos have a different safe range. It may be better to reduce both to the same absolute angle range in the code.
- Block diagram for avionics control system done (Must add latest to repo).
