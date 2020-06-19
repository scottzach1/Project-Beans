# ENGR 301 Project Beans Project Proposal and Requirements Document

[[_TOC_]]

## Authors

Billy Rob, Niels Clayton, Finn Sargisson, William Fowler, Ron
Crisostomo, Zac Scott.

---

## 1. Introduction

For rockets ranging from NASAs Saturn V to an amateur rocket enthusiasts
first rocket, stability is a desirable. The method in which stable
flight is achieved varies to a large degree, but can be divided into two
basic categories. The most common being passively stabilized rockets.
These maintain a stable flight due to passive aerodynamic features, an
example being fins that give the rocket a stabilizing rotation (similar
to the effect of rifling on a bullet). The simplicity of a passive
system is appealing but any error introduced to the system can cause an
unwanted flight trajectory. Some examples of sources of error include,
unexpected wind or a fin of differing size that is not accounted for.
The second category is an active control system. Onboard electronics can
be used to achieve active course correction. Error in the rockets
trajectory can be mitigated in a way that passive systems cannot. The
drawbacks of this are the complexity and large overhead introduced when
constructing the rocket.

Our customer is one day hoping to launch a rocket from a weather balloon
at approximately 70,000ft. This will require an active control system.
This project aims to covering the need for an active control system.
Existing off-the-shelf avionics packages for amateur rocketry
enthusiasts are available, but our customer finds them lacking. This is
due to limited functionality and with most packages not open source, so
they cannot be reprogrammed. This project aims to improve on an existing
attempt at this control system, completed in 2018, and is working along
side other teams to ensure all aspects are covered.

### Client

Our client for this project is Andre Geldenhuis. Andre is a rocket
enthusiast who is part of the NZ Rocketry Association. As of writing
this, the contact email is "andre.geldenhuis@vuw.ac.nz" and throughout
the project, the team can also contact Andre via a live text chat
(Mattermost) channel.

### 1.1 Purpose

The purpose of this system is to control a rocket in flight while being
open source and accessible so that it can be used in the amateur rocketry
community.

### 1.2 Scope

The objective is to deliver an avionics system that will allow stable
controlled flight while simultaneously logging and broadcasting data.
This system must improve on the existing avionics package created by a
team in 2018 for Andre. There is no requirement on height or flight
time, only to demonstrate controlled flight. The flight data must be
logged to an onboard SD card, and the broadcast data must be accessed
realtime by a onsite personal computer. The broadcast data must include
the GPS position of the rocket. The rocket will use C or D class solid
fuel engines. The improvements on the 2018 avionics package are the
reduction in onboard PCB size, and reliability in the field. To be
considered more reliable the avionics package will have to initialize
and launch on the first attempt, the package must also not have loose
wires or bare electronics.

### 1.3 Product overview

#### 1.3.1 Product perspective

There is no specific larger system that this system will be part of.
Rather this is intended to bring the goals of our customer closer and to
add to the body of knowledge in the amateur rocketry community. Our
client is aiming to one day launch rockets from a weather balloon. This
will require a system that can launch and achieve stable flight from a
platform. This will require an active system. This project is creating
and ensuring soundness of active control system that can be adapted in
the future for this goal.

This project is open source, allowing the final product to be tweaked and
repurposed by the community. This adds longevity to the project after
it is officially ended. This can benefit the customers as this may
result in further development by the community.

A similar open source project has been undertaken in 2018 for our
customer. This project will used the existing projects resources and
improve the system.

#### 1.3.2 Product functions

The requirements specified for the clients minimum viable product
include:

##### Base functionality Requirements

- A rocket that achieves stable flight with an active control system
  without the use of a launch rail.
- Records data from all sensors at a rate where the flight path could be
  reasonably reconstructed post flight.
- Broadcasts radio telemetry and battery level during the launch, burn
  and post-burn phase of flight.
- The rocket must land without sustaining disabling damage to the
  electronics.

##### Required functionality Improvement

- Software can be reliably initialized in the field.
- Software is held to a high level of quality and robustness
- Must have protected electronics, wires and PCBs cannot be exposed.

#### 1.3.3 User characteristics

One of the key requests from our client is that the avionic package will
be open source, which allows use and potential continuation of this
product from anyone in the wider amateur rocketry community. Future
users could include but it not limited to students, researchers,
programmers and rocketry hobbyists.

Since there is a wide variation in the potential user, it is recommended
to have experience in certain technical areas before attempting any
parts of this project. these include:

- When installing the electrical components.
- The interaction of software and hardware.
- Dealing with and Complying with Civil Aviation Authority Regulations
- understand telemetry operations.
- Operating aircraft applications

Users should have an understanding of how this package will be applied
to their own specific projects. It's also important that the users are
able to fully comply with all of the health and safety regulations
required by their local Authority body on civil aviation if a rocket is
intended to be launched.

#### 1.3.4 Limitations


**Sensor Data and broadcasting limitations**

One of the main requirements is to store sensor data. This must be done
at a fast enough rate. Not all of the sensors have the same polling
speed so the complete state of the rocket (as seen through the sensors),
can only be updated at the rate of the slowest sensor.

Terrain, distance and weather conditions will affect the strength and
reliability of the broadcast data to the base-station. This will limit
the range and conditions in which the rocket can operate in. The rocket
should only be operated in line of sight of the base station to ensure a
reliable connection.

**Conditions**

The rocket is not designed to be waterproof, neither is the control
system designed to handle interaction with rain and high wind.
Therefore, for protection of the onboard electronics, the rocket should
be launched only on clear days with a wind speed less than 10 knots.

**Launch sites**

Due to the dangerous nature of a rocket, places where the rocket can be
tested is limited. Open spaces with high visibility and with no people
within a safe distance are the required constraints.

---

## 2. References

[IEEE website](https://ieeexplore-ieee-org.helicon.vuw.ac.nz/stamp/stamp.jsp?tp=&arnumber=6146379&tag=1)

\[1] [www.nzrocketry.org.nz/rocketry/rocket-safety](https://www.nzrocketry.org.nz/rocketry/rocket-safety)
(Viewed 30/4/2020)

\[2] [www.aviation.govt.nz/rules/rule-part/show/101/4](https://www.aviation.govt.nz/rules/rule-part/show/101/4)
(Viewed 6/5/2020)

\[3] [www.grc.nasa.gov/WWW/K-12/airplane/vecthrst.html](https://www.grc.nasa.gov/WWW/K-12/airplane/vecthrst.html)
(Viewed 13/5/2020)

\[4] [opensource.org/licenses](https://opensource.org/licenses)
(Viewed 16/5/2020)

\[5] [www.legislation.govt.nz/regulation/public/2001/0240/latest/DLM71513.html](http://www.legislation.govt.nz/regulation/public/2001/0240/latest/DLM71513.html)
(Viewed 2/5/2020)

\[6] [https://gazette.govt.nz/notice/id/2019-go1588](https://gazette.govt.nz/notice/id/2019-go1588)
(Viewed 2/5/2020)

---

## 3. Specific requirements

### 3.1 External interfaces

#### Radio Antenna The radio antenna will facilitate the transfer of

data and commands between the avionics package and the base station.
This radio antenna must allow for the live broadcast of the packages
geographical location data, which will be provided by the GPS unit
within the avionics package. This will allow for easier retrieval of the
unit as specified b External:y the customer. While in flight, the radio antenna
will also facilitate the periodic sending of other sensor data to the
base station for use in live monitoring of performance. This data will
be sent according to the **TODO agreed on specification**, and
will include but is not limited too:

- Current gimbal position/angle
- directional acceleration data
- Battery voltage

This radio antenna will also allow for commands to be sent from the base
station and received and processed by the avionics package. The commands
will be able to query a range of current settings and readings available
the avionics package, as well as altering the current state of the
avionics package.

#### External: SD Card

The avionics package will be required to facilitate the logging of
launch and flight data to an external SD card. The SD card will store
the outputs of the sensory data provided by the internal measurement
unit, as well as the geographical location data from the GPS unit. This
data will be compiled into a CSV file and saved to the external SD, This
data will be used for analysis of the launch. It will be required that
the SD card is capable of writing data at the same rate that it is being
polled from the internal measurement unit and the GPS, however this must
not impact the performance of the guidance control systems.

#### External: Internal Measurement Unit (IMU / Sensors)

To know the relative position of the rocket, the avionics package must
track the linear acceleration, and rotational changes of the rocket.
This will to performed by the internal measurement unit (IMU) of the
avionics package. The IMU will be polled **TODO insert the required
polling rate here** for 9-axis gyroscopic data, as well as linear
acceleration data, which will be used to track the position of the
rocket against the launch site reference point in real time. This
positional and rotational data will then sent to the guidance system
unit of the avionics package for processing, and to the SD card for
logging.

#### External: Guidance System

The avionics package will be required to facilitate controlled flight
with self correction. To achieve this, the avionics package will contain
a guidance system unit consisting of a tuned PID (proportional,
differential and integral) controller. This unit will take the IMU data
as well as the current position of the gimbal as inputs. It will then
output positional information which will be used to alter the current
position of the gimbal, in turn altering the position of the rocket via
vector thrust \[3]. The guidance system will be required to process this
data at the same rate it is polled from the IMU, allowing for real time
corrections. This guidance system will also log its outputs to the SD
card for analysing the performance of the unit, and for tuning the PID
controller.

#### External: Gimbal

The Avionics package will require a gimbal unit to interface with the
gimbal hardware of the rocket. This unit will be required to apply
positional changes to the gimbal, as well as keep track of the current
position of the gimbal, accounting for any drift in the positions of the
servos due to forces applied by the motor charge.

#### External: GPS

The avionics package will be required to facilitate the retrieval of GPS
coordinates. This GPS data must be accurate to within 5 meters, and will
be passed to the radio antenna unit for broadcast to the base station.
This will be used to help locate the rocket after a successful launch.
The GPS unit will also log all of its outputs the SD card.

### 3.2 Functions (can start)

#### 3.2.1 Use Cases

These are not that many unique uses for this project, as this is
designed with the sole goal of creating a rocket which one launched is
autonomous. As parts of this project contain dangerous goods, it's not
advised to use this package for different purposes without making
further changes to accommodate your specific use. That being said there
are still various interactions between users and the rocket.

***Use Cases:***

1. **Launch the Rocket:** This is the most obvious and important use
   case, and is the most basic goal of this entire project.
2. **Transportation of Rocket:** It's important that the rocket is
   handled safely and for this reason it will be handled by a
   professional. The specifics of this are outlined further in the
   safety plan.
3. **Assembly of rocket:** The rocket is designed with different
   packages and components which must be put together before launch.
   This is a task which should take less than 15 minutes, and will be
   outlined in a supporting assembly document.
4. **Disassembly of rocket:** This is important as we need the ability
   to add or remove components for a range of reasons, eg. faulty or
   outdated components. It also allows both this package and the rocket
   to be much easier be extended upon by future users. This will also be
   covered in the supporting assembly document.
5. **Reading of flight data:** It's extremely important to record all
   flight data, as gives the team immediate feedback which helps to
   understand why a launch and/or flight happened the way it did. This
   data will be sent to the base station during flight, and should be
   visible to the team at the base station.
6. **Analysis of flight data:** While its important to read the data its
   even more important to formally record the data. This gives users the
   opportunity to perform further analysis, and therefore tweak and
   improve the rocket for future launches.

#### 3.2.2 Requirements

This subsection is broken down into three subsections, and aims to cover
all of the requirements which must be met to allow use cases to be
performed. The functions which make up the Minimum Viable Product are
our most important, as if these aren't meant then the rocket can not be
considered complete. We've also have additional Hardware and Software
sections, which aim to include more specific requirements to their
respective section.

***Requirements / functions of the Minimum Viable Product:***

1. **The Rocket is safe to transport:** As the motor is classified as a
   Class 1 dangerous goods (New Zealand Land Transport Rule: Dangerous
   Goods 2005) it is of high importance that this requirement is met.
   The in depth safety plan for transportation is laid out in section
   2.1 of the Safety Plan document.
2. **The rocket is re-usable:** This means that the rocket does not
   sustain significant damage after any one launch, and ideally sustains
   none. The rocket should be able to sustain 10 launches at the bare
   minimum.
3. **The group is able to conduct a post flight analysis:** This means
   that all necessary flight data is recorded and sent to the base
   station during flight. This means that upon both successful and
   unsuccessful launches and flights the team is able to further analyse
   the flight in detail.
4. **The rocket is tunable/tweakable for optimisation:** This means
   that there are no unnecessary dependencies between packages. This
   should reduce "god objects" and help to make all packages as
   interchangeable as possible for potential optimisation. It also
   means that once built the rocket is able to be disassembled with
   relative ease.
5. **Once flashed the rocket can be assembled and ready to launch within
   15 minutes:** Essentially from starting the assembly process of the
   rocket it should be ready for launch within 15 minutes. This is
   important for allowing multiple launch opportunities as it can be
   difficult for all launch conditions to be met. It also allows for the
   potential of small tweaks at the launch site, provided it is safe.
6. **The rocket consists of a single kit:** This means that all
   separate components of the rocket can be packaged into one single
   kit. For example all components could fit into a suitable sized
   pelican case.

***Hardware Requirements***

1. Due to the nature of model rockets, all components of the rocket must
   be able to withstand significant acceleration. It is crucial that no
   component becomes loose or dislodged during launch as this could
   cause significant component failure. To be conservative, the rocket
   must be rated for up to 20 m/s ^2 of acceleration. To ensure the
   rocket meets this requirement, counter measures such as secure
   mounting and robust bracing must be implemented on the rocket.
2. Due to the potential altitudes of model rockets of this caliber, an
   uncontrolled landing can cause significant damage to both the rocket
   itself, as any people or objects in the surrounding environment. To
   ensure the rocket is safe, it is essential that the rocket will
   perform a safe and slowed landing, without drifting too far from the
   initial launch position.
3. The rocket fits within a `X*Y*Z`mm enclosure. This hardware
   requirement is an extension of the usability requirement where the
   rocket must be consisted of a single kit. The dimensions of the
   rocket would affect how its internal components are structured. A
   smaller rocket, ensures promotion of efficient use of space, as well
   as greater affordability of components.
4. The components of the rocket must be easily accessible to the public.
   As this rocket is to be open source. It is a requirement that all
   components can be reasonably obtained or produced by a member of the
   public. This means that no unreasonably uncommon or expensive
   components will be used as part of the manufacturing of the rocket.
   ***TODO*** This includes 3d printers, and ... (What else is essential
   to produce or assemble the pcb / components of the rocket.

***Software Requirements***

1. Rocket's software must react to wind speed within the maximum wind
   conditions specified within the safety requirements document. This
   will be in the form of error correction where the rocket will attempt
   to stabilise based off internal readings from the internal sensors,
   as well as potentially external readings such as those provided from
   sensors in the base station or environmental conditions provided by
   mission control.
2. The rocket must log all flight data. This will include the logging of
   all internal sensor data, as well as commands issued to the IMU. The
   components in particular whose readings should be logged include the
   IMU, Radio and GPS. The readings must be logged to a file within the
   SD card for post launch analysis as well as some critical readings
   broadcast over LoRa.
3. The rocket's software must attempt to perform in air error analysis.
   This critical component of the rocket is fundamental to the safety of
   the rocket and any people or objects in the surrounding area. It is
   critical the rocket can respond correctly to erroneous data.
   Erroneous data could be observed via any readings from components
   whose output is part of the integral control system. The components
   that meet this category is the IMU, the battery and the SD card.

### 3.3 Usability Requirements

The usability requirements should enable any individual from the wider
rocketry community to launch and operate the rocket, and to use its
accompanying avionics package with relative ease. To ensure that this is
achieved, all scenarios in which the rocket and the avionics package is
used in should feature certain properties.

#### Scenarios and Usecases

##### Usability: Transporting

The rocket should feature the following properties to make it portable
and easy to transport:

- Contained within a single physical construct or kit.
- Should weigh no more than 1.5kg as per the NZCAA regulations \[2]
- Should possess reasonable dimensions (_**TODO:**_ Insert numbers here)

##### Usability: Base Station Setup and Interactivity

Before commencing with a launch, the rocket needs to establish a
connection with the base station module. The base station module
consists of a laptop to run the avionics package that will control the
flight of the rocket, and a USB LoRa to enable bi-directional
communication between the rocket and the laptop. Base station setup
should take 5 minutes maximum.

##### Usability: PreUsability: -Flight Tuning

A software platform should be provided to enable the user of the rocket
to make quick changes to any aspect of the rocket, launch, and its
flight that can be reasonably altered by means of software. This
pre-flight tuning platform should be in the form of a basic input/output
system to minimize the time required to make changes. **It is crucial
that user input is validated** to prevent the system from entering an
incorrect state.

##### Usability: Launch

During launch, the usability of the system should be centered around
reliability and safety. The rocket should feature the following features
to ensure this:

- The rocket should feature manual ignition to minimize the risk of
  premature ignition
- Ignition system should feature at least a 10m wire from the motor of
  the rocket to ensure the safety of the person igniting the rocket
- Launch critical features of the rocket are clearly marked and labeled
  for easy identification
- Hardware features to help mitigate the risk of incorrect operation of
  product, such as incorrect battery polarity.
- Software safety checks and pre-flight diagnostics to ensure all
  systems are operational
- Setting up the rocket should take no more than 15 minutes

##### Usability: Mid-Flight Diagnostics/Readings

During the flight, the system should:

- Broadcast telemetry at regular intervals to the base station to enable
  stakeholders manning the base station to monitor the flight in
  real-time
- Readings are stored into the on-board SD card to enable project
  stakeholders to analyse the performance of the rocket throughout the
  entire flight, after the flight.
- All logged data (logged to base station and the SD card) must be in a
  readable format
- Logging rate should be at a sufficient to enable stakeholders to
  monitor the flight easily

##### Usability: Recoverability

The rocket should be in a stable physical form at the end of the flight.
This can be achieved by doing the following:

- A parachute system is deployed after a specific amount time provided
  by the user by means of software
- Alternatively, the parachute system is deployed when an onboard
  barometer detects a decrease in air pressure

##### Usability: Post-Flight Diagnostics/Analysis

At the end of a launch, the rocket should be in a state that enables the
project team and stakeholders to evaluate the performance of the rocket.
To allow this, the system should do the following:

- On-board SD card should be stored in an easily accessible part of the
  rocket to allow for quick installation and removal
- On-board SD card should be protected to withstand high velocities or
  hard impacts
- Broadcast mid-flight telemetry data should be stored onto a file at
  the base station's laptop as a backup to the SD card
- Disassembly of the rocket should take no longer than 15 minutes

##### Usability: Future Development

The purpose of the project is to contribute to the existing body of
knowledge about rocketry. To make the project usable by members of the
wider rocketry community should they choose to contribute to the
project, the project needs to have the following:

- Documentation in the form of manuals
- Extensive software documentation through commenting
- Open source and freely available

### 3.4 Performance requirements

This section details the specific performance requirements that the user
can expect from the finished rocket.

The avionics package is expected to be capable of polling the onboard
IMU at least 100 times per second. This is important for the active
control aspect of the rocket. Due to the high velocity of the rocket,
the onboard microcontroller requires frequent input signals from the IMU
in order to make timely adjustments to the motor's vector in order for
the rocket to achieve an optimal flight path. If the IMU was polled at a
slower frequency the microcontroller would not receive sufficient
information regarding its current velocity and could overcompensate for
slight deviations resulting in stability issues. In addition to
providing active control of the rocket, the avionics package should
store these measurements at the same frequency on an SD card. These
measurements will also be supplemented by readings of the batteries'
voltage and current at a frequency of 10 measurements per second to
provide sufficient data to the user for post flight analysis.

Assessing the flight path, the rocket should be capable of consistently
achieving an apogee greater than 4 metres above the launch pad. The
rocket should also land with a horizontal displacement no greater than
25 metres to reduce the risk of people being injured or property being
damaged.

The GPS should provide accurate readings to within a five metre radius
of the rocket. This is to ensure that in the event that the rocket's
landing position is not immediately known, the GPS is able to provide
effective assistance in locating the rocket. In addition to this, the
rocket's radio unit is expected to achieve reliable connection to the
base station at distances of up to 80 metres without line of sight. This
is so that the GPS location can be successfully broadcast to the base
station even when environmental features obstruct vision.

In terms of durability, the rocket's design is required to be robust
enough to remain fully functioning following 10 individual launches.
This requires the rocket's onboard electronics, software and body to be
designed in such a way that ensures it is capable of enduring
accelerations in excess of 120 metres per second per second. This is an
important factor as the rocket's target demographic is the budget
conscious hobbyist. It also ensures, that the user is able to tune the
rocket over multiple consecutive launches to their preference.

### 3.5 Logical database requirements

This section outlines the software system that will be implemented for
the rocket.

![UML Class Diagram](/architecture_design/software_architecture/Yed/rocket.png)

The software system is split into 3 main parts - Control, Sensors, and
Communication.

#### Logical: Control

The control system is responsible for correctly guiding the rocket
during its flight. For this module, the task of controlling the rocket
is separated into 3 other sub modules, each of which serving a crucial
role for controlling the rocket

##### Logical: Gimbal

- This module is responsible for facilitating the interaction between
  the Gimbal and the Servos of the rocket.

##### Logical: Guidance System

- The guidance system of the software is where the majority of the PID
  related calculations will take place during the rocket's flight. The
  PID class within this module will perform calculations based on PID
  parameters provided by the user, as well as the current state of the
  Gimbal and other sensor readings from the Sensors module.

##### Logical: Landing

- The landing module will serve the purpose of initiating and
  controlling the landing sequence of the rocket. The Parachute software
  component will trigger the deployment of the parachute, while the
  Lander component will determine when to deploy the parachute, and if
  it is safe to do so.

#### Logical: Sensors

The sensor module is responsible for interfacing with the on-board
sensors of the rocket. The modules within this module include:

##### Logical: Battery

- A simple software module that tracks the voltage and remaining
  capacity on the on-board battery

##### Logical: IMU

- This module will take readings from the IMUs on-board the rocket to
  obtain crucial information regarding the accelerometer, gyro and other
  sensors for the control system module.

##### Logical: SensorManager

- The SensorManager module serves as a reader of all sensor readings of
  the rocket. This module interfaces with the communication module of
  the rocket to send the sensor readings from the rocket, to the base
  station. Note that this module will maintain a collection of all
  on-board sensors but will read the sensors and cannot mutate the state
  of the sensors in any way.

##### Logical: GPS

- The GPS module will read the coordinates of the rocket and send it
  back to the base station. This contributes to the recoverability use
  case of the rocket since it will assist the project stakeholders in
  recovering the rocket after a flight.

#### Logical: Communication

The communication module is the software interface that will enable
bi-directional communication between the rocket and the base station.
The purpose of the communication module is centered around the
establishing a connection with the rocket's antenna and the USB LoRa on
the base station, and logging information about the state of the rocket
during a flight.

##### Logical: Radio

- The Radio module serves the purpose of establishing a connection
  between the rocket's antenna and the base station, as well as the
  control of what information should be retrieved from the rocket.

##### Logical: Logging

- This module is responsible for logging the data retrieved from the
  sensors into the on-board SD card, as well as to a location within the
  base station laptop specified by the user. This module is also
  responsible for transforming the sensor data into a human readable
  format to contribute the usability of the logging system.

### 3.6 Design constraints

#### 3.6.1 Hardware Design Constraints

For this project, the hardware design constraints are restrictions
imposed upon the rocket being built. The primary source of these
restrictions will come from legal requirements, given that the client
has specified only a single design constraint and has granted the
project team more freedom regarding the hardware design.

##### Physical Construction of the Rocket

According to the New Zealand Rocketry Association \[1], the physical
construction of a rocket with a motor class ranging from A-F must adhere
to the following rules:

- The rocket's body, nose, and fins are made of lightweight, non-metal
  parts only. The following materials have been approved:
  - Paper
  - Wood
  - Rubber
  - Plastic
  - Fiberglass
- The motor used must be commercially manufactured and certified.
- The rocket must be ignited through an electric ignition system with
  electric motor igniters with a removable safety interlock.
- The rocket cannot contain more than 125g of propellant.
- The rocket must not weight more than 1500g at lift off.
- The rocket cannot produce more than 320N-secs of total impulse.
- The rocket must have a recovery system in the form of a streamer, or a
  parachute, so it can land safely.
- Recovery wadding used must be fire-resistant or fire-proof.
- The rocket must not contain any payload that is intentionally
  flammable or to cause harm.

The rocket must also conform to regulation 9 of the Radio communications
Regulations 2001\[5]\[6]. Regulation 9 defines the available frequencies
for broadcast on a general user radio licence, it also as the maximum
broadcast power in DBW (Decibel Watts). We must also ensure that we
chose to broadcast on a frequency that doesn't have heavy traffic
inorder to negate the affects of interference.

In addition to these regulations, the client has specifically stated the
following hardware design constraint:

- The airframe's diameter must not exceed 29mm (preferably, the airframe
  is less than 29mm for usability and cost-efficiency purposes)
- The rocket must use the QFN package type for any integrated chips it
  uses.

#### 3.6.2 Software Design Constraints

##### Open Source Software

The client has clearly specified that the final result of the project is
intended to contribute to the existing body of knowledge for rocket
enthusiasts. The best way to ensure that this requirement is met is by
making sure that the software produced by the project is open source and
can be freely accessed by anyone. The open source nature of our software
introduces some constraints, one of which is that the software produced
during the project **cannot use non-open source 3rd party libraries**.
This limits the number of libraries that can be utilized for the
development of the software. Furthermore, the 3rd party libraries that
are used must not have any transitive dependencies with other libraries
that are not open source.

### 3.7 Nonfunctional system attributes

#### 3.7.1 Hardware Non-Functional System Attributes

##### Accessibility

The client has outlined that in previous iterations of this project, the
final product had issues with the accessibility of the physical rocket
hardware. It is imperative these issues are resolved as the client has
outlined that one of the purposes of this project is to contribute to
the wider rocket building community. Accessibility of the rocket in this
context means that the rocket will be relatively easy to assessable and
disassemble before and after launches. There must also be easy access to
all external interfaces on the rocket, including but not limited too:

- Power switch
- Launch Safety Switch
- USB Programming Port
- SD Card
- Battery Connector
- Parachute deployment charges

##### Reliability

It is crucial the hardware of the rocket is reliable as we are dealing
with potentially dangerous and harmful equipment. It was also specified
by the client that the hardware should not be able to be damaged though
simple actions like plugging in the battery or the sensors into the
main-board incorrectly. To assure that the features are met, we can take
measure to assure that incorrect use of the rocket will not result in
the destruction of the hardware, or harm to the user. To protect the
hardware, we can ensure that components such as sensors are either
attached through non-reversible connectors, or directly connected to the
main-board of the rocked. We can also ensure that all power systems are
connected to the main-board with non-reversible connectors, and that
there are reverse polarity protections present on the board.


#### 3.7.2 Software Non-Functional System Attributes

##### Correctness and Reliability

The client has highlighted that past attempts at the project by other
teams had issues regarding the correctness and reliability of the
software. This is especially important given that the project itself has
elements that is potentially dangerous. Through these factors, it is
paramount that the software works correctly and reliably. To assure the
correctness of the software, the project team will continually discuss
what is defined as correct behaviour as the project enters the execution
phase. The software will be packaged with extensive unit testing suites
to prove that the software is performing as intended. Continuous
Integration will be setup in the GitLab repository of the project to
ensure that features merged into production does not cause errors with
the existing code base. From a coding perspective, the developers of the
software should apply programming techniques such as error handling,
pre/post condition checking and the maintenance of invariants. Observing
these techniques should mitigate the risk of the software entering an
incorrect state and can help assure its correctness and reliability.

##### Maintainability and Extensibility

Since the client has outlined that one of the purposes of the project is
to contribute to the wider rocket community, the software developed for
the project should be easily maintainable and extensible. This is
important since these attributes of maintainability and extensibility
should facilitate easier contribution to the project by other
individuals of the wider rocketry community. To achieve good
maintainability, the software needs to follow existing coding
conventions. Any 3rd party dependencies introduced to the software
should be well-known, easily adaptable, and adheres to a standard of
quality and usefulness agreed upon by the project team. From a lower
level perspective, maintainability can be achieved by observing the
'low-coupling, high cohesion' relationship between the different modules
of the software system. Extensibility can also be achieved by using
these techniques and is therefore important if the software is to be
added to or improved upon by other individuals after the completion of
the project.

##### Testing

Testing is crucial in the process of assuring the correctness and
reliability of the software. The testing strategy the project team will
adopt is a combination of regular unit testing and integration testing.
Unit testing will cover technical, lower-level aspects of the software
to ensure that the logic is correct. Unit testing should become a
regular part of the developer's workflow by running the unit tests
before pushing changes to the remote repository. Integration testing
will be accommodated by GitLab's CI/CD (Continuous
Integration/Continuous Delivery) feature. This will assist in ensuring
that code being merged into production meshes well with the existing
code base.

Other non-functional requirements from a software perspective include
the following:

- **Documentation** - The software package should have comprehensive
  documentation to clearly convey the intent and purpose of the code.
- **Code Quality** - The software should adhere to existing coding
  conventions and follow design patterns where appropriate. The software
  should facilitate easy maintenance and adaptability.
- **Logger** - The software can include a logging module that is used to
  report telemetry data and other useful information about the state of
  the avionics package.
- **Ease of Deployment** - Deployment of the software system should be
  easy for the user. A manual should accompany the software to describe
  how to use it, and to describe any important parts of the software the
  user should be made aware of.

### 3.8 Physical and Environmental Requirements

#### 3.8.1 Physical Requirements

_**TODO:**_ Need to decide what hardware components we are going to use.
See suggested content above.

#### 3.8.2 Environmental Requirements

The environmental requirements are based primarily around legal
restrictions and safety requirements. According to the New Zealand
Rocketry Association \[1], a rocket with a motor class ranging from A-F
can only be launched under the following environmental circumstances:

- Wind speeds at the site of the launch do not exceed 32km/h
- No dry grass must be present near the launching location of the rocket
- People must maintain at least 5m distance from the rocket during a
  launch

In addition to the guidelines provided by the New Zealand Rocketry
Association, the New Zealand Civil Aviation Authority (NZCAA) Rules Part
101 \[2] places the following restrictions:

- A rocket cannot be operate on or within 4km of an aerodrome boundary
  unless permission is given by the aerodrome operator
  - If permission is granted, the rocket still has the following
    environmental restrictions:
    - The rocket cannot fly above 400 feet (121.92m) AGL (Height above
      ground level)
    - The rocket cannot interfere with the flight path of any aircraft
    - The rocket cannot be operated over an active runway
- A rocket cannot be operated within 4km to 8km of an aerodrome boundary
  if it exceeds an altitude of 400 feet AGL.
- A rocket cannot be launched in an environment where clouds or other
  obscuring meteorological phenomena has a substantial presence
- A rocket cannot be launched if horizontal visibility is less than 8km
- Rockets cannot be launched at night under any circumstance

### 3.9 Supporting information

##### Open Source

The client has communicated that their intention with the project after
its completion is to contribute to the wider rocketry community. As a
result, all of the project's content including hardware design and
source code will be freely available to the public both for viewing and
editing. This is an important factor in the design of the hardware and
software systems since it imposes certain restrictions that the project
team has to work around. Despite the restrictions, making the project
open source allows the project to be improved upon by other individuals
outside of the project team, and hopefully, provoke continued interest
for the wider rocketry community.

##### Legal Regulations

The project is subject to a wide range of legal regulations given the
potentially dangerous nature of the product being developed. **It is
critical that all legal regulations are followed by the design** of the
system as any breaches can pose a real threat to the health and safety
of the relevant project stakeholders. Furthermore, the legal
repercussions from the breaches will drastically impact the project and
its ability to continue.

---

## 4. Verification

This section outlines how specific requirements of the avionics package
will be verified. Where possible this includes testable and measurable
acceptance criteria.

### 4.1 External Interfaces

The requirements for assessing whether the individual external
interfaces can be verified are listed.

#### Interface: Radio Antenna

For the radio antenna to be verified it must meet the following
criteria. The radio antenna upon request from the base station should be
able to transmit the geographical location data and be received at the
base station without error. The radio antenna must also have the
capacity to receive and respond to three distinct commands and provide
live telemetry of at least one flight critical variable at least twice a
second.

#### Interface: SD Card

The SD card storage will be deemed satisfactory if it can store data
provided by the IMU and GPS during flight in a format that can be
interpreted by the user later. As long as the data can be read and does
not contain any corrupted data, it will be verified.

#### Interface: Internal Measurement Unit (IMU / Sensors)

The onboard IMU will be verified, provided that it is able to reliably
produce data throughout the duration of the flight. The data must also
match the observed flight path of the rocket to a reasonable extent.

#### Interface: Guidance System

In order to verify the guidance system, software testing of the
controller must produce evidence that the guidance system is able to
offset/correct to any given extent three consecutive deviations in the
simulated flight of the rocket.

#### Interface: Gimbal

The Gimbal can be verified granted that it is able to vector the rocket
motor on two axis and is observed to change the motors vector at least
once during flight.

#### Interface: GPS

The GPS will be verified if and only if following the flight of the
rocket, the geographical location data produced by the unit is accurate
to within a 5 metre radius of the rocket.

### 4.2 Functions

#### 4.2.1 Verifying Use Cases

1. Launch the rocket This use case is verified if project stakeholders
   are able to launch the rocket safely through manual ignition.
2. Transportation of Rocket This use case is verified if the rocket is
   able to be transported from one location to another safely. Any
   stakeholder should be able to transport the rocket with relative ease
   unless the rocket is in a state of being susceptible to ignition, in
   which case a professional or experienced stakeholder can transport
   the rocket safely
3. Assembly of Rocket This use case is verified if the rocket is able to
   be assembled within 15 minutes.
4. Disassembly of Rocket This use case is verified if components of the
   rocket are able to be removed in order to be replaced.
5. Reading of Flight Data This use case is verified if the rocket
   successfully transmits critical telemetry data to the base station
   during launch and its flight to enable project stakeholders to
   monitor the flight.
6. Analysis of Flight Data This use case is verified if the the
   broadcast telemetry data is recorded and stored in a way that
   enables the project stakeholders to analyse the flight.

#### 4.2.2 Verifying Requirements

1. Rocket is safe to transport This requirement is verified if the
   rocket can be held and taken from one location to another with full
   assurance that it is of no danger to any person or property. The only
   exception to where it should not be safe to transport is during
   launch.
2. Rocket is re-usable Reusability of the rocket is verified if the
   rocket does not sustain significant physical damage after a flight,
   and that a recovery system in the form of a parachute or streamer
   \[2] is implemented to ensure this.

3. System enables the conduction of post-flight analysis This
   requirement is verified if the system has a way of sensing, recording
   and broadcasting telemetry data during launch and flight. The system
   should log this data to both an on-board SD card, and the base
   station. The verification of this requirement will fail if **both**
   of the platforms logged to by the rocket (on-board SD card and base
   station) cannot display the logged data due to some failure.
4. Rocket is tunable for optimisation **TODO:**
5. Rocket can be assembled and launched within 15 minutes after flashing
   This requirement is verified if the assembly process of the rocket
   takes no longer than 15 minutes.
6. Rocket consists of a single kit This requirement is verified if all
   components required to assemble the rocket are small enough to fit
   into a suitable sized container.

***Hardware Requirements***

1. Withstanding Significant Acceleration - The rocket and its components
   must be able to withstand at least 20ms<sup>-2</sup> of acceleration
   during its flight in order for this requirement to be verified. If
   components are unintentionally separated from the rocket, or is
   dislodged from its intended position within the rocket, this
   requirement will fail to meet the verification standards. Verifying
   this requirement can be achieved by ensuring secure mounting of
   components within the rocket.
2. Safe Landing - This requirement is verified if the rocket is able to
   perform a safe and slow landing as a result of deploying a recovery
   system after a set amount of time during its flight. **TODO:** (Or
   when an on-board barometer detects a drop in air pressure). A landing
   that causes noticeable damage to any person or property despite the
   deployment of the recovery system will mean that this requirement
   will fail to meet the verification standard.
3. Fits within X*Y*Z enclosure - This requirement is verified if the
   entire rocket posses a width, height and depth of no more than
   `TODO`, `TODO`, `TODO` respectively. The rocket must also fit within
   an airframe whose maximum width does not exceed 29mm. Exceeding any
   of the specified dimensions fails the verification of this
   requirement.
4. Open Source and Accessible - This requirement is verified if all work
   contributing to the development of the hardware system of the rocket
   is openly visible to the public, and that the total cost of all
   components is less than or equal to $300 NZD. To verify this requirement, all
   schematics, plans and diagrams related to the hardware system of the
   rocket will be available on GitLab. Tools used to create schematics,
   plans and diagrams will be open source, or free to use.

***Software Requirements***

1. Error Correction and Control This requirement is verified if the
   software system correctly guides the rocket to take a safe, upward
   trajectory despite the influence of external factors such as wind
   speed and direction. The software system must use a combination of
   internal sensor readings on-board the rocket, as well as data from
   mission control software.
2. Logging This requirement is verified if the software system
   successfully logs important data from the IMU, Radio and GPS to both
   an on-board SD card and base station during flight. The logged
   information must be accessible post flight, otherwise this
   requirement is not verified. This can be verified by creating a
   dedicated Logger module that logs important data to target components
   (on-board SD card and base station) during the flight at a sufficient
   rate to be useful.
3. Mid-Flight Error Analysis This requirement is verified if the rocket
   responds to erroneous data in a way that does not cause the rocket to
   fail, or enter a state where it can no longer be trusted to take a
   safe trajectory. This requirement can be verified by conducting
   extensive software testing.

### 4.3 Usability Requirements

The usability of the rocket revolves around the idea of how the user
will interact with the system to achieve important use cases, and how
easy this is to do. To verify the usability requirements, each important
scenario/use case must have a set of criteria that must be met to
indicate that the usability of the system under that scenario has been
verified.

#### Verification Under Specific Scenarios

The following specifies a what must be done for each important use
case/scenario in order to verify the usability of the system.

##### Transporting

- The final version of the rocket is contained within a **single
  physical construct or kit**
- The total weight of the final rocket and its components weigh less
  than or equal to **1.5kg** \[2]
- At its widest point, the rocket has a diameter of less than or equal
  to 29mm

##### Base Station Setup and Interactivity

- The setup of the base station laptop, USB LoRa, and the software
  module to enable interaction between the rocket and the base station
  takes no longer than **5 minutes to setup.**

##### Pre-Flight Tuning

- A basic, intuitive input/feedback system is implemented
- User input is validated
- Useful **feedback** is provided to the user if invalid input is
  detected

##### Launch

- The stakeholders are able to perform a successful launch at a safe
  distance from the rocket
- Manual ignition is featured as the primary ignition method to assure
  the safety of the stakeholders
- Launch critical features are easily identified by stakeholders or by
  people who are unfamiliar with the rocket as a result of effective
  marking and labelling
- The rocket can be assembled by stakeholders in under **15 minutes**

##### Mid-Flight Diagnostics/Readings

- Stakeholders can easily read the logged data
- Stakeholders manning the base station can make confident deductions
  about the flight as a result of a sufficient logging rate and format

##### Recoverability

- A parachute system is deployed to enable the rocket to land safely
- GPS system is accurate to within **5 m** of the rocket's landing site
  to enable project stakeholders to quickly locate the rocket upon
  landing

##### Post-Flight Diagnostics/Analysis

- Stakeholders are able to retrieve the on-board SD card without the
  need to fully disassemble the rocket
- On-board SD card is intact at the end of the flight
- Rocket disassembly takes no more than **15 minutes**

##### Future Development

- Documentation in the form of manuals are written to enable any
  potential user to understand the system quickly
- Software is documented appropriately to **support the ability of
  future contributors to adapt the code**
- The project is open source so any future contributors can easily
  access the project

### 4.4 Performance Requirements

#### In-Flight Verification

The avionics package will have met the performance requirements provided
the rocket maintains a flight trajectory of no more than 30 degrees from
the vertical while the motor is still producing thrust. This is evidence
that the onboard controller provided sufficiently accurate and
well-timed signals to the gimbal in order to achieve controlled flight.
If the rocket deviates from the vertical by greater than 30 degrees, the
avionics package will not have met the performance requirements. In
addition to this the avionics package must achieve an apogee of at least
4 meters, and a horizontal displacement upon landing of at least 25
metres to be verified.

The avionics package must also have in some capacity, stored data
collected from the onboard IMU and GPS during flight to be verified.

#### Physical Attribute Verification

Lastly, the avionics are required to be able to perform two consecutive
launches. This provides evidence that the package is capable of
completing a launch and being recovered in working condition. Minor
damage, that is damage requiring no spare parts and less than 30 minutes
of attention to fix, is permitted. If the package fails to meet this
requirement it is evidence that its physical attributes were not
acceptable and hence the package cannot be verified.

### 4.5 Logical Database Requirements

The logical database requirements are focused around the idea of how the
software developed will be laid out, as well as the connections and
dependencies that exist between the software modules to enable each
other's functionality. This is verified as a whole if the final software
system achieves the core functionality outlined in each of the software
modules, but still retaining overall architecture of the system. This
means that the separation of duties must be enforced as the software
system is developed. By doing this, the software system will achieve
high cohesion, maintainability and good modularity.

To verify these requirements, the developers of the software system
should make a conscious effort to become familiar with the desired
architecture of the software system and the different modules that needs
to be implemented before actually coding it. The project team should
regularly consider if changes can be made to the logical database
requirements that will have a beneficial impact to the software system.

The logical database requirements will fail to meet verification
standards if the software system's architecture has deteriorated beyond
recognition. This can potentially happen due to poor execution and
failure to follow the outlined software architecture/layout as outlined
in section 3.5.

### 4.6 Design Constraints

#### 4.6.1 Verifying Hardware Design Constraints

The hardware design constraints of the project will have been satisfied
if the final rocket's properties abide by both legal regulations \[2],
and what the client imposes as a hardware constraint.

For the legal regulations, the hardware design constraints are satisfied
if:

- The rocket weighs less than or equal to 1.5kg at liftoff
- The rocket contains no more than 125g of propellant
- The rocket's body is composed of non-metal materials
- The rocket has a recovery system in the form of a streamer or
  parachute
- The rocket's motor must be for commercial use and officially certified
- The rocket must be manually ignited through an electric ignition
  system

The client has provided only a single hardware design constraint: The
rocket's airframe must not exceed a diameter of 29mm. This hardware
design constraint is satisfied if the diameter of the rocket's body is
less than or equal to 29mm, although preferably less than 29mm for
transportability, aerodynamics, and cost-efficiency purposes. To ensure
that these hardware design constraints are met, the project team will
consult these design constraints regularly during the execution phase of
the project. It is important to note that the majority of the hardware
constraints are sourced from legal regulations in accordance with the
NZCAA \[2]. As a result, the team will closely monitor if any changes to
the legal regulations occur and update the design constraints as
necessary to make sure that the hardware design constraints are verified
at the end of the project.

#### 4.6.2 Verifying Software Design Constraints

One of the primary software design constraints that needs to be verified
would be the fact that the software package must be open source, and in
turn, can only use 3rd party libraries/APIs that are also open source.
To satisfy this constraint, each 3rd party library the project team
elects to use must be open source. This can be achieved by making sure
that the library/API is licensed under a license that is consistent with
those outlined by the Open Source Initiative \[4]. Such licenses include
the following but are not limited to:

- Apache License 2.0
- MIT License
- GNU General Public License (GPL)
- BSD-3 Clause ("New" or "Revised" License)

Transitive dependencies (other libraries/APIs used by the 3rd party
library/API) must also be open source. If this is not the case, then the
project will fail to meet the open source software design constraint of
the project.

### 4.7 Nonfunctional System Attributes

#### 4.7.1 Verifying Hardware Non-Functional System Attributes

**Attribute 1: Accessibility**

The client has specified that previous attempts at the physical design
of the rocket suffered from accessibility issues. As a result, it is
important that the rocket is built to facilitate easy access to its
components. This non-functional requirement is verified if the client
can make the assessment that all external interfaces on the rocket
are accessible with minimal effort.

**Attribute 2: Reliability**
The verification of this attribute will rely on the fact that the
rocket and its components does not sustain any significant damage
during normal use. The rocket is considered reliable if it is
able to undertake several flights, and is constructed in a way
that prevents physical damage to its components.

#### 4.7.2 Verifying Software Non-Functional System Attributes

##### Attribute 1: Correctness and Reliability

The verification of this attribute requires a large amount of testing.
Verifying the correctness and reliability of the software system can be
achieved through rigorous unit testing to verify the lower level logic
of the code. Unit testing will be conducted on _all_ software modules to
verify the overall correctness and reliability of the software.
Furthermore, unit testing will be integrated into the regular workflow
of the team. This means that at every
sprint, a set of test cases will be formed, which the target software
module must pass at the end of the sprint. For software tests that
require the usage of hardware components or a fully/partially built
rocket, testing will be conducted in a highly controlled environment
where the project team has full control over what happens to the
components, and the outcome is known. This attribute is verified if the
software performs as intended and is deemed as sufficient by the project
team, and the client.

##### Attribute 2: Maintainability and Extensibility

To verify this attribute, the project team members in charge of
developing the software must be in **full agreement** that relevant
programming techniques that promote maintainable and extensible design
were observed to the best ability of the developers. Some of the
programming techniques that can facilitate maintainable and extensible
software include the following but are not limited to:

- Observing low coupling - high cohesion where appropriate
- Adhering to existing coding conventions
- Commenting
- Proper usage of abstraction
- Observing 'DRY' (Do not repeat yourself)
- Formal documentation in the form of documentation comments and/or API
  manuals

Furthermore, personas will also be used in the verification process of
this attribute. Each persona will be considered to see if that persona
can understand the code-base and the manuals provided in a way that will
enable them to make suggestions or apply changes to the code.

##### Attribute 3: Testing

This attribute can be verified by assessing the attribute against a
range of both quantitative and qualitative metrics. From a quantitative
point of view, this attribute is verified if the following conditions
are met:

- 90% overall code coverage is achieved by all unit tests
- A quota of _**\[TODO: Insert Number Here]**_ unit testing methods are
  achieved by the end of the project

From a qualitative point of view, this attribute is verified if the
following conditions are met:

- All tests pass across all software modules by the end of the project
- Test cases written for a specific software module should lead to the
  software module working as expected. This will indicate that the tests
  are valid.
- A wide range of potential cases are covered, including valid, invalid
  and edge cases
- Gitlab's CI/CD feature is used appropriately to facilitate system and
  integration testing

Note that Attribute 1 (Correctness and Reliability) depends heavily on
this attribute. It is important that the verification of this attribute
is achieved, and done so comprehensively, given the potentially
dangerous nature of the product being developed by the project.

### 4.8 Environmental and Physical Verification

#### 4.8.1 Physical Verification

_**TODO:**_ Can be written after physical requirements are written
(3.8.1)

#### 4.8.2 Environmental Verification

The environmental requirements can be verified given:

The environmental conditions meet the requirements of the New Zealand
Rocketry Association \[1] which specify:

- The wind speeds do not exceed 32km/hr
- No dry grass is present near the launch pad
- No one is situated within 5m of the rocket during the launch sequence

The environmental conditions adhere to the New Zealand Civil Aviation
Authority Rules Part 101 \[2] which specify:

- The launch site must be further than 4km from an aerodrome boundary
  unless prior permission is granted by the aerodrome operator
- The rocket cannot fly above 121.92m above ground level
- The rocket cannot interface with the flight path of an aircraft
- The rocket cannot be operated over an active runway
- The rocket cannot be launched into clouds or any other meteorological
  phenomena which obscures the air space
- The rocket cannot be launched where horizontal visibility is less than
  8km
- The rocket cannot be launched at night

The rocket adheres to the guidelines presented by the Faculty of
Engineering and Computer Science at Victoria University which will be
checked at all times throughout the duration of the project.

The rocket is launched at a location permitted by the Wellington City
Council and does not damage the surrounding property or the environment.

---

## 5. Development schedule

### 5.1 Schedule

***Original Instructions***

> Identify dates for key project deliverables:
>
> 1. architectural prototype
> 2. minimum viable product
> 3. further releases
>
> (1 page).

- 5.1 Schedule
- 5.1.1 Architectural Prototype
  - Set out a date that we want to have the architectural prototype done by.
- 5.1.2 Minimum Viable Product
  - Set out a date that we want to have the minimum viable product done by.
  - Section 1.3
- 5.1.3 Further Releases.
  - Final prototype due, as well as any other planned significant releases.
  (Perhaps improvements) Will software and hardware be published
  differently? This will be announced in Section 1.3 as well.

### 5.2 Budget

Present a budget covering the cost of all of the component? Are we going
to use hardware next tri? Perhaps we are paying for some of the software
for simulation?

### 5.3 Risks

The content below outlines the 10 most important risks that can impact
achieving project goals. Attributes of each risk such as the likelihood
of the risk occurring and its impact is described using the following
levels:

 - Likelihood: - Unlikely, Likely, Very Likely 
 - Impact - Mild, Moderate, Severe


**Risk 1: Rocket falls on a person causing injury**

- **Risk Type:** Health and Safety
- **Likelihood:** Unlikely
- **Impact:** Severe
- **Mitigation Strategy:** During a rocket launch, all attending project
  members and other stakeholders/spectators are required to maintain a
  safe distance from the rocket. Any member of the public present at the
  launch site will be informed of the rocket launch so that they are
  made aware of the potential danger. During the rocket's flight, the
  trajectory and status of the rocket will be closely monitored to
  ascertain the landing location of the rocket. If there are too many
  people at the launch site, the launch will be postponed. Ensure that a
  recovery system in the form of a streamer or parachute is implemented
  \[1] to minimize the damage done by an impact with a person during
  landing. Project stakeholders involved with the rocket launch will
  maintain a minimum distance of 5m from the rocket during a launch, as
  required by the NZRA \[1].

**Risk 2: Rocket contacts object causing damage**

- **Description:** Rocket unintentionally makes contact with an object
  during flight or when it lands, causing damage to property
- **Risk Type:** Health and Safety, Environmental
- **Likelihood:** Unlikely
- **Impact:** Moderate
- **Mitigation Strategy:** The site of the rocket launch will be
  inspected closely prior to the launch to determine if there are any
  objects belonging to the project members or to the members of the
  public. The location of the launch site must be a safe distance away
  from any buildings, cars and roads. Ensure that a parachute deployment
  system is implemented to minimize the damage done by an impact with an
  object during landing.
- _**TODO:**_ One potential mitigation strategy is to limit the altitude
  the rocket can reach? Customer specifically said that the priority of
  the project is control and that the rocket reaching high altitudes is
  not the goal/desired. This mitigation strategy can also apply to Risk
  1\.

**Risk 3: Rocket takes unsafe path due to wind causing damage**

- **Description:** Rocket's trajectory affected by winds, causing it to
  take an unsafe flight path and in turn, causing injury to people or
  damaging
- **Risk Type:** Environmental
- **Likelihood:** Unlikely
- **Impact:** Severe
- **Mitigation Strategy:** Consult mission control software before a
  rocket launch to determine if the current wind speeds can safely
  accommodate a flight. Launches will be postponed if wind speeds exceed
  **32km/h** \[1].

**Risk 4: Rocket disassembles during flight**

- **Description:** Rocket parts unexpectedly disassembles during flight
  debris emitted causes damage to people and property.
- **Risk Type:** Health and Safety/Environmental
- **Likelihood:** Unlikely
- **Impact:** Moderate
- **Mitigation Strategy:**

**Risk 5: Covid-19 pandemic causes lock-down hindering progress**

- **Risk Type:** Legal/Health and Safety/Environmental
- **Likelihood:** Very Likely
- **Impact:** Moderate
- **Mitigation Strategy:** The project team will continue to work
  remotely, using tools as specified in the team contract to maintain
  communication during the lock-down period. Hold meetings remotely as
  outlined in the team contract to continually assess and provoke
  progress. Focus of the project will shift to parts of the project that
  do not require the practical application of hardware. Hardware related
  components of the project will be simulated. Project members will
  closely monitor the situation and decide on the achievability of
  certain project objectives in a reactive manner.

**Risk 6: Covid-19 pandemic affects global logistics**

- **Description:** Covid-19 pandemic affects global logistics, making it
  difficult to procure equipment and parts.
- **Risk Type:** Resources
- **Likelihood:** Very Likely
- **Impact:** Moderate
- **Mitigation Strategy:** The project team will continue to plan and
  budget for the equipment and parts required so when the ability to
  order parts becomes feasible, the team is able to order such parts
  immediately and mitigate the time lost to progress with the project.
  The project team will discuss with the client if certain parts can be
  recycled from previous attempts at the project by other teams.

**Risk 7: Rocket ignites prematurely causing injury to people**

- **Risk Type:** Health and Safety
- **Likelihood:** Unlikely
- **Impact:** Severe
- **Mitigation Strategy:** At all times during a launch, project
  stakeholders involved with the launch must maintain a safe distance of
  at least 5m. Manual ignition system must be electric, and have a
  safety interlock in place \[1]. A first aid kit will be brought to the
  launch site to treat any injuries immediately. A comprehensive physical
  interlock system will be implemented such that a conscious effort has
  to be made by a stakeholder to initiate a launch.

**Risk 8: Rocket takes unsafe path due to software failure**

- **Description:** Rocket takes an unsafe trajectory mid-flight due to
  software error, causing damage to people or objects.
- **Risk Type:** Health and Safety/Environmental
- **Likelihood:** Unlikely
- **Impact:** Severe
- **Mitigation Strategy:** The project team will extensively test the
  software to validate its correctness before proceeding with a rocket
  launch. An alert system implemented by the software will trigger to
  inform the relevant stakeholders of the impending situation so that
  stakeholders are able to act appropriately. (_**TODO:**_ In a meeting
  with the client, they stated that it would be a nice feature to have
  the ability to manually deploy the drogues in the event a situation
  like this happens)

**Risk 9: Rocket ignition causes a fire**

- **Risk Type:** Health and Safety/Environmental
- **Likelihood:** Unlikely
- **Impact:** Moderate
- **Mitigation Strategy:** Project stakeholders must undertake a health
  and safety induction prior to the launch In accordance with the NZCAA
  \[1], the selected launch site must be clear of dry grass to lower the
  risk of causing a fire during a rocket ignition. The project
  stakeholders involved with the launch will closely inspect the launch
  site for flammable material to remove them. A rocket launch will be
  postponed if the fire alert level is high, or if the temperature is
  unusually high. A fire extinguisher will be brought by the team at
  the launch site to counter small fires.

**Risk 10: Sudden change in wind speed mid flight**

- **Description:** Wind speeds suddenly exceed the safe wind speed for
  the rocket during flight
- **Risk Type:** Health and Safety, Environmental,
- **Likelihood:** Unlikely
- **Impact:** Moderate
- **Mitigation Strategy:** The rocket launch will only proceed if the
  current wind speeds are well below the maximum wind speed determined
  for the rocket. Wind speeds will be continually monitored during the
  flight to keep the team informed on the safety of the flight. Recovery
  system will be manually deployed in the event that the wind speed
  rises to an unsafe level.

### 5.4 Health and Safety

**1. Managing computer related risks**

   - It is the responsibility of the individual to make sure they have
      done he best they personally can to ensure they have a healthy,
      safe and tidy working environment. However, if for any
      circumstances these conditions cannot be met for an individual,
      there are still options that can be done as a team to ensure
      everyone's health and safety when undergoing computer related
      activities.
   - In general, when it comes to computer usage, it isn't healthy to
      spend an inordinate amount of time in front of the screen. This
      often can be amplified by complications regarding the suitability
      of their working environment. If any team member feels they have
      an inadequate working environment or an excessive amount of work
      they have been assigned. Then their obligation is to let the rest
      of the team know of their situation. The importance of this is as
      a team, we all share common interests and goals for the project.
      In sharing their situation with the team, it is then the teams
      responsibility to reassess the full situation. The team will get
      together and discuss what they can do to lighten the burden off of
      the affected team member. This could be in the form of lightening
      the sum of work assigned to the individual. However, it might also
      look like changing the type of work assigned in order to meet the
      means of the affected individual. An example of this might be if a
      team member was tasked with a computationally demanding task such
      as that requires running a heavy simulation on their device. If
      the team member did not have access to a sufficiently powerful
      machine, then they are obliged to notify the team of their current
      situation. The team is then obliged to consider the members
      request and discuss rescheduling work appropriately. This might
      also look like the individual has a computer that is not
      physically compatible with the assigned tasks, or their device
      requires an exceptional amount of work to configure (software
      incompatible -> such as wrong operating system). What is
      considered physically incompatible may also be vague. For example,
      another interpretation of this might be, if a pending task
      required creating large state diagrams (requiring a bigger
      monitor), and the team member only had access to a small laptop
      screen. The team member could ask for a reassessment of work such
      that they can find something that suits their means.

**2. External Testing Sites**

   - In the event that the team decides to perform work or testing at
      any external (off-campus) workplaces/sites, it is paramount that
      appropriate considerations are made ahead of time. These
      considerations will be realised in the form of a health and safety
      plan. Before the team visits any planned locations, they must
      first as a group brainstorm or discuss any health and safety risks
      that might be applicable to the location. It is important to note
      that mental health is also a vital consideration. Once these risks
      have been accessed, both the likelihood and what mitigation can /
      will be undertaken to reduce the risks. If any individual has
      concerns conflicting with the team about any offsite locations,
      then they can either express their stance with the team, or
      discretely raise the concern with the course coordinator / health
      and safety officer. Any industrial locations must require an
      induction, whether this is official, or provided unofficially by a
      member with strong knowledge of the environment.

**3. Test Subjects and Ethics**

   - The team as a whole has stated that they have strong objections
      with any work or testing on any animal subjects. The scope of this
      project entails creating software and hardware for miniature model
      rockets strictly used for conventional hobby-like activities. In
      the unlikely event where the team becomes aware of the intention
      of either their software or hardware being used for unethical or
      extreme activities, then the team will halt any work until they
      have thoroughly assessed the situation. Should the intentions of
      the project usage, or scope change to an undesirable nature, then
      they have the right to halt all work undertaken indefinitely.

#### 5.4.1 Safety Plans

Refer to the project's [Safety Plan Analysis](https://gitlab.ecs.vuw.ac.nz/course-work/engr300/2020/group3/group-3/-/blob/72-proofread-requirements-doc/project_requirement/safety-plan-analysis.md) document for further information.

---

## 6. Appendices

### 6.1 Assumptions and dependencies

One page on assumptions and dependencies (9.5.7).

### 6.2 Acronyms and abbreviations

One page glossary _as required_.

---

## 7. Contributions

A one page statement of contributions, including a list of each member
of the group and what they contributed to this document.

---