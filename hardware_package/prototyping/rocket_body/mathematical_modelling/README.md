#### Mathematical modelling:


~~This directory will contain mathematical relations between certain aspects of the rocket that the control system will need along with a block diagram connecting them all.~~ Changes since talking to Andre about this: The avionics package is what we are delivering rather that the rocket. Users will have their own rockets most likely so having any modelling that is specific to the rocket body is not worth doing. Some relations are still worth doing. Those that are relevant to the gimbal, servo libraries and the control system loop in general.


**Working on/completed**
- Motor angle to gimbal angle relation. PWM relation is handled by the Library. Have found the limits of the servos and now must settle on a mapping range. The issue at the moment is that both servos have a different safe range. It may be better to reduce both to the same absolute angle range in the code.
- Block diagram for avionics control system done (Must add latest to repo).

***
##### Gimbal Angles
For prototype 3 gimbal, the lower servo has a safe range of -39 to 39 degrees with reference to the servo arm pointing straight down as 0 degrees. The upper servo has more restricted movement in one direction due to the servo lower servo mount contacting the outer ring. In the code the limits are set at -18 to 18 to ensure the mapping is symmetrical.
The mapping should be kept close to the actual degrees so trouble shooting and tuning the controller is more intuitive. The same range limits should be set in the software for each so that the same controller can be implemented for each axis.
**Motor angle to gimbal angle relation**

*For gimbal prototype 4:*

 **Motor radius = 38mm**
 **Servo radius = 16.3mm**

![arc](arc.png)


***
**Block diagram for avionics control system**

*Control Diagram*
![loopfeedback](control_diagram.PNG)
*Shows how the main code loop fits with the conceptualized feedback loop*

##### IMU data
Ideally we want to use the library that interacts with the DSP (runs fast enough to return reading whenever polled since the micros main loop will run slower than data is ready) onboard the IMU to return quaternions. Currently this is not the library used and it may not be implemented before handover due to time constraints.

***
