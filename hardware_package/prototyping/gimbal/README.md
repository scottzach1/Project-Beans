#### Gimbal Prototyping Document:

This document will contain progress of the gimbal and any important decisions made at each stage. Measurements and requirement will be included also.

|| C class | D class | E class | F class |
|-|---------|---------|---------|---------|
| **Diameter (min)** | 18mm | 24mm | 24mm | 29mm |
| **Length (min)** | 70mm | 70mm | 95mm | 114mm |

#### Prototype 1:

Log:
* Prototype 1 Gimbal components created in Onshape (sprint 4)
* Assembly of components and servos finished in Onshape (sprint 5)
* ToDo: Print Prototype 1 in sprint 5

###### Considerations for P2 based on P1:
* There are a few sections on corners that are too thin and may break. These must be filled out.
* There are several considerations regarding bolt mounts that must be changed.
  * Must be reinforced else bolts will crack the plastic.
  * Diameter of holes should be 0.2mm less than the bolts, this will allow the bolt to thread the plastic.
  * Nuts are not entirely necessary for servo mounts. Can just make deeper holes.
* Servo Measurements were incorrect in P1.
* P1 has 20 degrees of freedom in one axis and 10 in the other. This seems sufficient and should be retained.
* Generally thicker to ensure strength.
* Should minimize overhangs for better printing.
* P2 should have mounts for the rocket, distance between center of mass and gimbal rotation axes must be considered (cannot be too small else insufficient torque on the rocket for change of angle).



#### Prototype 2:
Specs:
- M3 bolt size (8-9mm long partially threaded) (Servo screws are M2.5 (x4))
 - If length is not 8-9mm the design will need to be modified to account for this.
 - another option for bolts/screws is using nuts but embedding them in the design (will required modification).
- Motor diameter 24mm





**Log: Create and assemble prototype 2 (for 24mm engine)**
* Made Gimbal Tube
* Made inner and outer rings where axes of rotation are mounted.
* Added upper and lower servo mounts to rings
  * Mounts are made to be the same offset from their respective axis of rotation. This is to ensure same angle change, show make control system easier to tweak.
* Added structural support to servo mounts.
* Screw holes added  to mounts.
* Created Assembly.
* added anchor for wire that attaches to servo lever.
* May require changes based on selected bolts.
