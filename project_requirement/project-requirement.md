# ENGR 301: Project Requirements Document

The aim of this document is to specify the requirements of the system your group is to build. The focus of a requirements document is the problem you are attempting to solve:  not a first attempt at a solution to that problem. This document should communicate clearly to the supervisor, client and course coordinator what the system you build is going to do, and what constraints it must meet while doing so.

The document should also demonstrate your understanding of the main analysis principles and quality guidelines, and applicable standards, using tools and notations as necessary to communicate the requirements precisely, unambiguously and clearly in a written technical document. Page specifications below are *limits not targets* and refer to the pages in the PDF generated from the markdown. Because the size of your document is necessarily limited, you should ensure that you focus your efforts on those requirements that are most important to completing a successful system: if sections are at their page limit, indicate how many items would be expected in a complete specification.

The ENGR 301 project proposal and requirements document should be based on the standard ISO/IEC/IEEE 29148:2011(E), primarily sections 8.4 and 9.5, plus section 9.4 for projects involving hardware and ISO 25010 SQuaRE for systemic requirements. While excerpts from the standard have been quoted within the template, to understand what is required it will be necessary to read earlier sections of the standards themselves. A supplementary treatment of requirements gathering in engineering projects may be found in [Requirements in Engineering Projects](https://victoria.rl.talis.com/items/F166DA94-DAD8-FBDB-0785-7A63C9BA3603.html?referrer=%2Flists%2F5886F297-2506-1F17-45D9-7F04CEE284EE.html%23item-F166DA94-DAD8-FBDB-0785-7A63C9BA3603) (Talis). The requirements document should contain the sections listed below, and conform to the formatting rules listed at the end of this brief.

All team members are expected to contribute equally to the document and list their contributions in section 6 of the document. You should work on your document in your team's GitLab repository. While collective contributions are expected to be the exception rather than the rule, if more than one team member has contributed to a particular commit then all those team member IDs should be included in the first line of the git commit message. `git blame`, `git diff`, file histories, etc. will be tools used to assess individual contributions, so everyone is encouraged to contribute individually, commit early and commit often. Any team wishing to separate individually contributed sections into a single file before collation into the single proposal document for submission is welcome to do so.

---

<div style="page-break-after: always;"></div>

# ENGR 301 Project *NN* Project Proposal and Requirements Document
#### Author list, a comma-separated list of the names of each member of the team.

## 1. Introduction
Requirement: "One page overall introduction including sections 1.1 and 1.2 (ISO/IEC/IEEE 42010:2011(E) clause 5.2)"

For rockets ranging from NASAs Saturn V to an amateur rocket enthusiasts first rocket, stability is a desireable. The method in which stable flight is achieved varies to a large degree, but can be divided into two basic categories. The most common being passively stablized rockets. These maintain a stable flight due to passive aerodynamic features, an example being fins that give the rocket a stablizing rotation (similar to the effect of rifling on a bullet).
The simplicity of a passive system is apealing but any error introduced to the system can cause an unwanted flight trajectory. Some examples of sources of error include, unexpected wind or a fin of differing size that is not accounted for.
The second category is an active control system. Onboard electonics can be used to achieve active course correction. Error in the rockets trajectory can be mitigated in a way that passive systems cannot. The drawbacks of this are the complexity and large overhead introduced when constructing the rocket.

Our customer is one day hoping to launch a rocket from a weather balloon at approximately 70,000ft. This will require an active control system. This project aims to covering the need for an active control system. Existing off-the-shelf avionics packages for amateur rocketry enthusiasts are available, but our customer finds them lacking. This is due to limited functionality and with most packages not open source, so they cannot be reprogrammed. This project aims to improve on an existing attempt at this control system, completed in 2018, and is working along side other teams to ensure all aspects are covered.

### Client

Our client for this project is Andre Geldenhuis. Andre is a rocket enthusiast who is part of the NZ Rocketry Association. As of writing this, the contact email is "andre.geldenhuis@vuw.ac.nz" and throughout the project, the team can also contact Andre via a live text chat (Mattermost) channel.


### 1.1 Purpose
Requirement: "One sentence describing the purpose of the system(9.5.1)"

The purpose of this system is to control a rocket in flight while being opensource and accessible so that it can be used in the amateur rocketry community.

### 1.2 Scope

Requirement: "One paragraph describing the scope of the system(9.5.2)"

The objective is to deliver an avionics system that will allow stable controlled flight while simultaneously logging and broadcasting data. This system must improve on the existing avionics package created by a team in 2018 for Andre. There is no requirement on height or flight time, only to demonstrate controlled flight. The flight data must be logged to an onboard SD card, and the broadcast data must be accesed realtime by a onsite personal computer. The broadcast data must include the GPS position of the rocket. The rocket will use C or D class solid fuel engines.
The improvements on the 2018 avionics package are the reduction in onboard PCB size, and reliability in the field. To be considered more reliable the avionics package will have to initialize and launch on the first attempt, the package must also not have loose wires or bare electronics.

### 1.3 Product overview
#### 1.3.1 Product perspective

One page defining the system's relationship to other related products
(9.5.3. but not the subsections in the standard.)


There is no specific larger system that this system will be part of. Rather this is intended to bring the goals of our customer closer and to add to the body of knowledge in the ameture rocketry community.
Our client is aiming to one day launch rockets from a weather balloon. This will require a system that can launch and achieve stable flight from a platform. This will require an active system. This project is creating and ensuring soundness of active control system that can be adapted in the future for this goal.

This project is opensource, allowing the final product to be tweaked and repuroposed by the community. This adds longevity to the project after it is officially ended. This can benefit the customers as this may result in further developent by the community.

A similar opensource project has been undertaken in 2018 for our customer. This project will used the existing projects resources and improve the system.

#### 1.3.2 Product functions
The requirements specified for the clients minimum viable product include:

**Base functionality Requirements**
- A rocket that achieves stable flight with an active control system.
    - Without the use of a launch rail.
- Records data from all sensors at a rate where the flight path could be reasonably reconstructed post flight.
- Broadcasts radio telemetry and battery level during the launch, burn and post-burn phase of flight.
- The rocket must land without sustaining disabling damage to the electronics.

**Required functionality Improvements**
- Software can be reliably initialized in the field.
- Must have protected electronics, wires and PCBs cannot be exposed.

#### 1.3.3 User characteristics

One of the key requests from our client is that the avionic package will be open source, which allows use and potential continuation of this product from anyone in the wider amateur rocketry community. Future users could include but it not limited to students, researchers, programmers and rocketry hobbyists.

Since there is a wide variation in the potential user, it is reccommened to have experience in certain technical areas before attempting any parts of this project.
these include:
- When installing the electrical components.
- The interaction of software and hardware.
- Dealing with and Complying with Civil Aviation Authority Regulations
- understand telemetry operations.
- Operating aircraft applications

Users should have an understanding of how this package will be applied to their own specific projects. It's also important that the users are able to fully comply with all of the health and safety regulations required by their local Authority body on civil aviation if a rocket is intended to be launched.

#### 1.3.4 Limitations

One page on the limitations on the product (9.5.6)

**Sensor Data and broadcasting limitations**

One of the main requirements is to store sensor data. This must be done at a fast enough rate. Not all of the sensors have the same polling speed so the complete state of the rocket (as seen through the sensors), can only be updated at the rate of the slowest sensor.

Terrain, distance and weather conditions will affect the strength and reliability of the broadcast data to the base-station. This will limit the range and conditions in which the rocket can operate in. The rocket should only be operated in line of sight of the base station to ensure a reliable connection.


**Conditions**

The rocket is not designed to be waterproof, neither is the control system designed to handle interaction with rain and high wind. Therefore, for protection of the onboard electronics, the rocket should be launched only on clear days with a wind speed less than 10 knots.

**Launch sites**

Due to the dangerous nature of a rocket, places where the rocket can be tested is limited. Open spaces with high visibiliy and with no people within a safe distance are the required constraints.



## 2. References

References to other documents or standards. Follow the IEEE Citation  Reference scheme, available from the [IEEE website](https://ieeexplore-ieee-org.helicon.vuw.ac.nz/stamp/stamp.jsp?tp=&arnumber=6146379&tag=1) (please use the search box). (1 page, longer if required)

_**TODO**_: Properly format these sources in IEEE standard.\
https://www.nzrocketry.org.nz/rocketry/rocket-safety [1] (Viewed 30/4/2020)\

https://www.aviation.govt.nz/rules/rule-part/show/101/4 [2] (Viewed 6/5/2020)\

https://www.grc.nasa.gov/WWW/K-12/airplane/vecthrst.html [3] (Viewed 13/5/2020)\

https://opensource.org/licenses [4] (Viewed 16/5/2020)


## 3. Specific requirements  

> Planing:
> - Hardware:
>> - Should be controlled (Some sort of control system).
>>> - Radio Antenna
>>> - SD Card
>>> - Internal Measurement Unit (IMU / Sensors)
>>> - Gimbal
>>> - Servos
>>> - GPS
> - Software:
>> - Database
>> - 

3.1 External Interfaces: Niels:
3.2 Functions: 

Use Cases for MVP:
- Rocket meets user objectives.
- Rocket reacts to wind speed.
- Rocket is safe to transport.
- Rocket consists of a single kit. (Pelican case) 
- Re-usability of rocket (at least 11 times).
- Post flight analysis. 
- Rocket is tunable / tweakable for optimisation.
- Rocket can be assembled and ready to launch within 15 minutes.
    - (Once flashed)
- Rocket is structurally sound.
    - Components can withstand 20 m/s -2.   

Software Functions: (Zac)
- Connecting and communicating data between the base station and the rocket.
- Processing of sensor data.
    - Logging sensor data
        - IMU (Once per meter)
        - Radio (Radio range of > 81m.
        - GPS accurate into at least 9m.
    - Checking validity of respective data.
        - Radio (Once every 11 sensor readings).
        - GPS
        - Write to SD card.
        - Battery
    - Sensor data for control.
        - IMU (Once per meter)
 
Usability Requirements: (Ron)
- Continuous battery readouts.

Performance Requirements: (Will)
- Rocket can get 2m off the ground.
 
 Non-Functional Requirements:
 - Rocket lands in starting spot.
 
 Logical Requirements: (Object-Oriented Domain Analysis).
 - GPS Coordinates
 - IMU Readings
 - Battery readings
 - SD Write 
 - <b><i>TODO: Billy's UML Diagram</i></b>

#### Summary:

This Section will go into depth describing every single requirement of the project, these requirements will then be expanded upon in the subheadings below.

**Original Instructions**<br>

> 20 pages outlining the requirements of the system. You should apportion these pages across the following subsections to focus on the most important parts of your product.


### 3.1 External interfaces

 #### Radio Antenna
The radio antenna will facilitate the transfer of data and commands between the avionics package and the base station. This radio antenna must allow for the live broadcast of the packages geographical location data, which will be provided by the GPS unit within the avionics package. This will allow for easier retrieval of the unit as specified by the customer. While in flight, the radio antenna will also facilitate the periodic sending of other sensor data to the base station for use in live monitoring of performance. This data will be sent according to the <b><i>TODO agreed on specification</i></b>, and will include but is not limited too:

 - Current gimbal position/angle
 - directional acceleration data
 - Battery voltage 
 
 This radio antenna will also allow for commands to be sent from the base station and received and processed by the avionics package. The commands will be able to query a range of current settings and readings available the avionics package, as well as altering the current state of the avionics package.

#### SD Card
The avionics package will be required to facilitate the logging of launch and flight data to an external SD card. The SD card will store the outputs of the sensory data provided by the internal measurement unit, as well as the geographical location data from the GPS unit. This data will be compiled into a CSV file and saved to the external SD, This data will be used for analysis of the launch. It will be required that the SD card is capable of writing data at the same rate that it is being polled from the internal measurement unit and the GPS, however this must not impact the performance of the guidance control systems. 

#### Internal Measurement Unit (IMU / Sensors)
To know the relative position of the rocket, the avionics package must track the linear acceleration, and rotational changes of the rocket. This will to performed by the internal measurement unit (IMU) of the avionics package. The IMU will be polled <b><i>TODO insert the required polling rate here</i></b> for 9-axis gyroscopic data, as well as linear acceleration data, which will be used to track the position of the rocket against the launch site reference point in real time. This positional and rotational data will then sent to the guidance system unit of the avionics package for processing, and to the SD card for logging. 

#### Guidance System
The avionics package will be required to facilitate controlled flight with self correction. To achieve this, the avionics package will contain a guidance system unit consisting of a tuned PID (proportional, differential and integral) controller. This unit will take the IMU data as well as the current position of the gimbal as inputs. It will then output positional information which will be used to alter the current position of the gimbal, in turn altering the position of the rocket via vector thrust [3]. The guidance system will be required to process this data at the same rate it is polled from the IMU, allowing for real time corrections. This guidance system will also log its outputs to the SD card for analysing the performance of the unit, and for tuning the PID controller. 

#### Gimbal
The Avionics package will require a gimbal unit to interface with the gimbal hardware of the rocket. This unit will be required to apply positional changes to the gimbal, as well as keep track of the current position of the gimbal, accounting for any drift in the positions of the servos due to forces applied by the motor charge.

#### GPS
The avionics package will be required to facilitate the retrevial of GPS cordinates. This GPS data must be accurate to within 5 meters, and will be passed to the radio antenna unit for broadcast to the base station. This will be used to help locate the rocket after a successful launch. The GPS unit will also log all of its outputs the SD card. 


### 3.2 Functions (can start)

#### Summary:

This section should outline each of the required functions that the stakeholder has outlined for the project, how we intend to meet these functions, what the use-cases for out project are. It should break down each of the project requirements into subsections outlining the approach we are taking to implement them.

**Suggested steps to make progress here:**

- Talk with the customer about what their requirements for the project are.
- Break down the requirements outlined by the customer into subsections which outline what we need to do to achieve them.
- Come up with a list of possible use cases for our project outcomes.

**Original Instructions**<br>
> This is typically the longest subsection in the document. List up to fifty use cases (in order of priority for development), and for at least top ten focal use cases, write a short goal statement and use case body (up to seven pages).  Identify the use cases that comprise a minimum viable product.


### 3.3 Usability Requirements
The usability requirements should enable any individual from the wider rocketry community to launch and operate the rocket, and to use its accompanying avionics package with relative ease. To ensure that this is achieved, all scenarios in which the rocket and the avionics package is used in should feature certain properties.

#### Scenarios
##### Transporting
The rocket should feature the following properties to make it portable and easy to transport:
- Contained within a single physical construct or kit
- Should weigh no more than 1.5kg as per the NZCAA regulations [2] 
- Should possess reasonable dimensions (_**TODO:**_ Insert numbers here)

##### Base Station Setup and Interactivity
Before commencing with a launch, the rocket needs to establish a connection with the base station module. The base station module consists of a laptop to run the avionics package that will control the flight of the rocket, and a USB LoRa to enable bi-directional communication between the rocket and the laptop. Base station setup should take 5 minutes maximum.

##### Pre-Flight Tuning
A software platform should be provided to enable the user of the rocket to make quick changes to any aspect of the rocket, launch, and its flight that can be reasonably altered by means of software. This pre-flight tuning platform should be in the form of a basic input/output system to minimize the time required to make changes. **It is crucial that user input is validated** to prevent the system from entering an incorrect state.
(_**TODO:**_ State specific parts of the system that can be altered by means of softwareas they become clearer. _Any_ aspect of the system seems a bit too ambitious)

##### Launch:
During launch, the usability of the system should be centered around reliability and safety. The rocket should feature the following features to ensure this:
- The rocket should feature manual ignition to minimize the risk of premature ignition
- Ignition system should feature at least a 10m wire from the motor of the rocket to ensure the safety of the person igniting the rocket
- Launch critical features of the rocket are clearly marked and labeled for easy identification
- Hardware features to help mitigate the risk of incorrect operation of product, such as incorrect battery polarity.
- Software safety checks and pre-flight diagnostics to ensure all systems are operational
- Launch system should take no more than 10 minutes to setup

##### Mid-Flight Diagnostics/Readings
During the flight, the system should:
- Broadcast telemetry at regular intervals to the base station to enable stakeholders manning the base station to monitor the flight in real-time
- Readings are stored into the on-board SD to enable project stakeholders to analyse the performance of the rocket throughout the entire flight, after the flight.
- All logged data (logged to base station and the SD card) must be in a readable format

##### Recoverability
The rocket should be in a stable physical form at the end of the flight. This can be achieved by doing the following:
- A parachute system is deployed after a specific amount time provided by the user by means of software
- _**TODO:**_ Client has also stated that another criterion that would constitute the deployment of the parachute is if the on-board barometer detects a decrease in pressure levels.

##### Post-Flight Diagnostics/Analysis
At the end of a launch, the rocket should be in a state that enables the project team and stakeholders to evaluate the performance of the rocket. To allow this, the system should do the following:
- On-board SD card should be stored in an easily accessible part of the rocket to allow for quick installation and removal
- On-board SD card should be protected to withstand high velocities or hard impacts
- Broadcasted mid-flight telemetry data should be stored onto a file at the base station's laptop as a backup to the SD card
- Disassembly of the rocket should take no longer than 15 minutes

##### Future Development
The purpose of the project is to contribute to the existing body of knowledge about rocketry. To make the project usable by members of the wider rocketry community should they choose to contribute to the project, the project needs to have the following:
- Documentation in the form of manuals
- Extensive software documentation through commenting
- Open source and freely available


### 3.4 Performance requirements
This section details the specific performance requirements that the user can expect from the finsihed
rocket.

The avionics package is expected to be capable of polling the onboard IMU at least 100 times per second. This is important for the active control aspect of the rocket. Due to the high velocity of the rocket, the onboard microcontroller
requires frequent input signals from the IMU in order to make timely adjustments to the motor's vector in
order for the rocket to achieve an optimal flight path. If the IMU was polled at a slower frequency the
microcontroller would not recieve sufficient information regarding its current velocity and could
overcompensate for slight deviations resulting in stability issues. In addition to providing active control
of the rocket, the avionics package should store these measurements at the same frequency on an SD card. These
measurements will also be supplemented by readings of the batteries' voltage and current at a frequency of
10 measurements per second to provide sufficient data to the user for post flight analysis.

Assessing the flight path, the rocket should be capable of consistently achieving an apogee greater than 4
metres above the launch pad. The
rocket should also land with a horizontal displacement no greater than 25 metres to reduce the risk of people
being injured or property being damaged.

The GPS should provide accurate readings to within a five metre radius of the rocket. This is to ensure
that in the event that the rocket's landing position is not immediately known, the GPS is able to provide
effective assistance in locating the rocket. In addition to this, the rocket's radio unit is expected to
achieve reliable connection to the base station at distances of up to 80 metres without line of sight.
This is so that the GPS location can be successfully broadcasted to the base station even when environmental features obstruct vision.

In terms of durability, the rocket's design is required to be robust enough to remain fully functioning
following 10 individual launches. This requires the rocket's onboard electronics, software and body
to be designed in such a way that ensures it is capable of enduring accelerations in excess of 120 metres
per second per second. This is an important factor as the rocket's target
demographic is the budget conscious hobbyist. It also ensures, that the user
is able to tune the rocket over multiple consecutive launches to their preference.





#### Summary: (Can't Start)

This section will define what the base expectation of our of our project outcome will be. This section requires that we talk to the customer before anything can be done as it is the very general overview of the project.

**Suggested steps to make progress here:**
-talk to the customer and find out what their requirements are.

**Original Instructions**<br>

>See 9.5.13. for most systems this will be around one page. Hardware projects also see section 9.4.6.
>
>> **9.5.13 Performance requirements** <br>
>> Specify both the static and the dynamic numerical requirements placed on the software or on human interaction with the software as a whole.
>>
>> Static numerical requirements may include the following:
>>
>> a) The number of terminals to be supported;  
>> b) The number of simultaneous users to be supported;  
>> c) Amount and type of information to be handled.
>>
>> Static numerical requirements are sometimes identified under a separate section entitled Capacity.
>>
>> Dynamic numerical requirements may include, for example, the numbers of transactions and tasks and the amount of data to be processed within certain time periods for both normal and peak workload conditions. The performance requirements should be stated in measurable terms.
>>
>>  For example, "_95 % of the transactions shall be processed in less than 1 second._" rather than, "An operator shall not have to wait for the transaction to complete."
>>
>> NOTE Numerical limits applied to one specific function are normally specified as part of the processing subparagraph description of that function.


### 3.5 Logical database requirements (Cannot Start)
#### Summary:

This section requires us to do some in-depth modelling  of the software system conveyed through a UML Class Diagram, and to provide descriptions. This seems difficult to achieve (as of 14 April) given that we need final clarification as to what the client wants and to conduct more planning regarding the software system that we need to implement.

**Suggested steps to make progress here**:

- Contact client to finalise software requirements
- Plan the software system at a _**highly abstract level**_. This can help us understand the different components of the software system and in turn, will allow us to start forming the different classes (If for some reason we are going to use OOP) or define the different modules of the software system and their relationships with one another.
- After these steps, we can use PlantUML or draw.io to form the UML class diagram.

**Original Instructions:**

> See 9.5.14. for most systems, a focus on d) and e) is appropriate, such as an object-oriented domain analysis. You should provide an overview domain model (e.g.  a UML class diagram of approximately ten classes) and write a brief description of the responsibilities of each class in the model (3 pages). You should use right tools, preferably PlantUML, to draw your URL diagrams which can be easily embedded into a Markdown file (PlantUML is also supported by GitLab and Foswiki).

### 3.6 Design constraints (Can Start)

**Suggested Content**:

- Two further subheadings - 3.6.1 Hardware Design Constraints, 3.6.2 Software Design Constraints
- We can also write about the restrictions of each specific hardware component once we decide what equipment we are going to use (Eg. is there a limitation of the specific hardware component we are going to use).

**Suggested steps to make progress here:**

- Contact client about further software design constraints.

**Original Instructions**
> 9.5.15 Design constraints<br>
> Specify constraints on the system design imposed by external standards, regulatory requirements, or project limitations.
>
> 9.5.16 Standards compliance<br>
> Specify the requirements derived from existing standards or regulations, including:
>
> a) Report format;<br>
> b) Data naming;<br>
> c) Accounting procedures;<br>
> d) Audit tracing.
>
> For example, this could specify the requirement for software to trace processing activity. Such traces are needed for some applications to meet minimum regulatory or financial standards. An audit trace requirement may, for example, state that all changes to a payroll database shall be recorded in a trace file with before and after values.


#### 3.6.1 Hardware Design Constraints

For this project, the hardware design constraints are restrictions imposed upon the rocket being built. The primary source of these restrictions will come from legal requirements given that the client has not specified any specific hardware restriction and has given us more control over the design.

##### Physical Construction of the Rocket

According to the New Zealand Rocketry Association [1], the physical construction of a rocket with a motor class ranging from A-F  must adhere to the following rules:

- The rocket's body, nose, and fins are made of lightweight, non-metal parts only. The following materials are approved:
  - Paper
  - Wood
  - Rubber
  - Plastic
  - Fiberglass
- The motor used must be commercially manufactured and certified.
- The rocket must be ignited through an electric ignition system with electric motor igniters with a removable safety interlock.
- The rocket cannot contain more than 125g of propellant.
- The rocket must not weight more than 1500g at liftoff.
- The rocket cannot produce more than 320N-secs of total impulse.
- The rocket must have a recovery system in the form of a streamer or a parachute so it can land safely.
- Recovery wadding used must be fire-resistant or fire-proof.
- The rocket must not contain any payload that is intentionally flammable or to cause harm.

_**TODO:**_ Identify any hardware design constraints imposed by the equipment and electronics we have agreed to use for our rocket. Place them in h5 subheadings here.

#### 3.6.2 Software Design Constraints
##### Open Source Software
The client has clearly specified that the final result of the project is intended to contribute to the existing body of knowledge for rocket enthusiasts. The best way to ensure that this requirement is met is by making sure that the software produced by the project is open source and can be freely accessed by anyone. The open source nature of our software introduces some constraints, one of which is that the software produced during the project **cannot use non-open source 3rd party libraries**. This limits the number of libraries that can be utilized for the development of the software. Furthermore, the 3rd party libraries that are used must not have any transitive dependencies with other libraries that are not open source.

_**TODO:**_ Maybe talk about the fact that we have to use a programming language that better caters for the open-source nature of our software? Eg is C better suited to fulfill the open source attribute of our software compared to rust? If so, then a software design constraint is that we have to use C..


### 3.7 Nonfunctional system attributes (Can Start)

#### Summary:

In this section, we need to write about the non-functional requirements of our software and hardware systems. This means we need to define the nature of a system through some characteristic. Eg  'The software system is easily extensible'. We need around **20 non-functional requirements** and _**write a description for the ones we think take the top priority.**_

**Suggested Content:**

- 2 further subheadings? - 3.7.1 Hardware Non-Functional Requirements, 3.7.2 Software Non-Functional Requirements

- Adaptibility - Our project is intended for the wider rocket community (clear this up with client?) therefore our codebase should easily adapt into different scenarios or use techniques or libraries that are known.
- Ensuring safety - This is important given that we are working with equipment that is potentially dangerous. This can be achieved by conducting extensive sofware correctness testing? As for hardware...... strictly adhere to legal/client restrictions hardware restrictions, especially for potential sources of danger?
- Code Quality? - Since its open source, we need to adhere to programming conventions where possible. Follow design patterns and observe proper coupling/cohesion where possible. Code must be documented!
- **Simulation part of the project (simulating hardware).... is this a non-functional requirement? Should the concept of simulation be stated under ensuring safety?- Contact course coordinators/client**

Theres a lot more to suggest from a software perspective. We can split some different characteristics into their own descriptions (eg Testing can be in its own paragraph instead of being listed under Ensuring safety description if we see the need to do so.). The  [2018 Project](https://github.com/andre-geldenhuis/team-rocket-2018-handover/blob/master/ENGR302-2019T2_Delivery_Team-12/Assignment1_Requirements.pdf) seems to do this very in-depth but it seems to have combined both hardware and software components into each non-functional requirement.

**Suggested steps to make progress here**:

- Contact client to clarify any more non-functional requirements, **particularly from a hardware perspective**. We can also clarify with the client if they have any specific non-functional requirements.


**Original Instructions:**

>Present the systemic (aka nonfunctional) requirements of the product (see ISO/IEC 25010). List up to twenty systemic requirements / attributes. Write a short natural language description of the top nonfunctional requirements (approx. five pages).

#### 3.7.1 Hardware Non-Functional System Attributes
_**TODO:**_ Try to list approximately 10 hardware non-functional requirements, a few of which need to be written about in detail.
- Accessiblity (Client made a point about this in a Q&A (see Q&A Session 04 20 2020 in wiki))?
- Drag?

#### 3.7.2 Software Non-Functional System Attributes

##### Correctness and Reliability
The client has highlighted that past attempts at the project by other teams had issues regarding the correctness and reliability of the software. This is especially important given that the project itself has elements that is potentially dangerous. Through these factors, it is paramount that the software works correctly and reliably. To assure the correctness of the software, the project team will continually discuss what is defined as correct behaviour as the project enters the execution phase. The software will be packaged with extensive unit testing suites to prove that the software is performing as intended. Continuous Integration will be setup in the GitLab repository of the project to ensure that features merged into production does not cause errors with the existing code base. From a coding perspective, the developers of the software should apply programming techniques such as error handling, pre/post condition checking and the maintenance of invariants. Observing these techniques should mitigate the risk of the software entering an incorrect state and can help assure its correctness and reliability.  

##### Maintainability and Extensibility
Since the client has outlined that one of the purposes of the project is to contribute to the wider rocket community, the software developed for the project should be easily maintanable and extensible. This is important since these attributes of maintainability and extensibility should facilitate easier contribution to the project by other individuals of the wider rocketry community. To achieve good maintainability, the software needs to follow existing coding conventions. Any 3rd party dependencies introduced to the software should be well-known, easily adaptable, and adheres to a standard of quality and usefulness agreed upon by the project team. From a lower level perspective, maintainability can be achieved by observing the 'low-coupling, high cohesion' relationship between the different modules of the software system. Extensibility can also be achieved by using these techniques and is therefore important if the software is to be added to or improved upon by other individuals after the completion of the project.

##### Testing
Testing is crucial in the process of assuring the correctness and reliability of the software. The testing strategy the project team will adopt is a combination of regular unit testing and integration testing. Unit testing will cover technical, lower-level aspects of the software to ensure that the logic is correct. Unit testing should become a regular part of the developer's workflow by running the unit tests before pushing changes to the remote repository. Integration testing will be accommodated by GitLab's CI/CD (Continuous Integration/Continuous Delivery) feature. This will assist in ensuring that code being merged into production meshes well with the existing code base. 

Other non-functional requirements from a software perspective include the following:
- **Documentation** - The software package should have comprehensive documentation to clearly convey the intent and purpose of the code.
- **Code Quality** - The software should adhere to existing coding conventions and follow design patterns where appropriate. The software should facilitate easy maintenance and adaptability.
- **Logger** - The software can include a logging module that is used to report telemetry data and other useful information about the state of the avionics package.
- **Ease of Deployment** - Deployment of the software system should be easy for the user. A manual should accompany the software to describe how to use it, and to describe any important parts of the software the user should be made aware of.


### 3.8 Physical and Environmental Requirements (Can Start)

#### Summary:

**Suggested Content:**
- 2 Subheadings - 3.8.1 Physical Requirements and 3.8.2 Environmental Requirements
- Environmental Requirements
  - Legal restrictions as to where we can launch rockets. (Conduct research and cite them)
  - Weather restrictions and how this can impact rocket launches/flight. What weather is acceptable/unacceptable for commencing with a launch.
  - 2018 Project also seems to cover obligations to the wider community and stakeholders. Eg rocket should be safe for residents of wellington region.
  - How the station will look like on launch day (eg setup of the base station)
- Physical Requirements
  - State the legal restrictions (There may be some repetition from hardware design constraints)
  - Identify the specific components that will be used to build the rocket and their purpose
  - Describe the rocket and its composition. Include info about dimensions, weight, height, volume, general shape
  - Describe where the parts come from and how they were procured

We need to get to a point where we can confidently say what hardware components we are going to use. That way, we can start listing them in this section and state their features and characteristics.

**Original Instructions:**

> For systems with hardware components, identify the physical characteristics of that hardware (9.4.10) and environment conditions in which it must operate (9.4.11).  Depending on the project, this section may be from one page up to 5 pages.

#### 3.8.1 Physical Requirements
_**TODO:**_ Need to decide what hardware components we are going to use. See suggested content above.

#### 3.8.2 Environmental Requirements

The environmental requirements are based primarily around legal restrictions and safety requirements. According to the New Zealand Rocketry Association [1], a rocket with a motor class ranging from A-F can only be launched under the following environmental circumstances:
- Wind speeds at the site of the launch do not exceed 32km/h
- No dry grass must be present near the launching location of the rocket
- People must maintain at least 5m distance from the rocket during a launch

In addition to the guidelines provided by the New Zealand Rocketry Association, the New Zealand Civil Aviation Authority (NZCAA) Rules Part 101 [2] places the following restrictions:
  - A rocket cannot be operate on or within 4km of an aerodome boundary unless permission is given by the aerodome operator
    - If permission is granted, the rocket still has the following environmental restrictions:
      - The rocket cannot fly above 400 feet (121.92m) AGL (Height above ground level)
      - The rocket cannot interfere with the flight path of any aircraft
      - The rocket cannot be operated over an active runway
  - A rocket cannot be operated within 4km to 8km of an aerodome boundary if it exceeds an altitude of 400 feet AGL.
  - A rocket cannot be launched in an environment where clouds or other obscuring meteorological phenomena has a substantial presence
  - A rocket cannot be launced if horizontal visibility is less than 8km
  - Rockets cannot be launched at night under any circumstance

_**TODO:**_ Make a statement about the actual wind speed our rocket can safely fly in once we can make this assessment confidently. Also state the required setup at the launch site if there are any.


### 3.9 Supporting information

#### Summary:

This section declares any additional information that could justify why we have listed any particular specific requirement for all of section 3.  We can start this section, but not much.

**Suggested Content:**

- State that it could potentially pave way for launching a rocket from a diverse range of launch sites, including from a balloon.

##### Open Source
The client has communicated that their intention with the project after its completion is to contribute to the wider rocketry community. As a result, all of the project's content including hardware design and source code will be freely available to the public both for viewing and editing. This is an important factor in the design of the hardware and software systems since it imposes certain restrictions that the project team has to work around. Despite the restrictions, making the project open source allows the project to be improved upon by other individuals outside of the project team, and hopefully, provoke continued interest for the wider rocketry community.

##### Legal Regulations
The project is subject to a wide range of legal regulations given the potentially dangerous nature of the product being developed. **It is critical that all legal regulations are followed by the design** of the system as any breaches can pose a real threat to the health and safety of the relevant project stakeholders. Furthermore, the legal repercussions from the breaches will drastically impact the project and its ability to continue.

## 4. Verification

//3 pages outlining how you will verify that the product meets the most important specific requirements. The format of this section should parallel ////section 3 of your document (see 9.5.18). Wherever possible (especially systemic requirements) you should indicate testable acceptance criteria.

This section will contain criteria used to assess whether the main performance requirements have been met and whether certain components of our design have improved on designs from previous years/

The main components that will be verified for example...
- Is the rocket capable of successfully being launched under the correct circumstances. This can be measured by observing whether the rocket makes it off of the launchpad.

- Does the rocket successfully deploy it's parachute within the correct time frame during its flight. This will also be measured by observation, does the parachute eject within a 2 second window of the rocket's apogee.

- Does the rocket land within a given radius of the launch site? Measurement based on distance from launch pad to landing site.

- Is the rocket able to be recovered without damage that may compromise future flights. Observation based measurement, assessed after launch and the next launch.

- Has our rocket's form factor improved on previous designs. This could be measured by comparing the dimensions, mass and volume of our rocket designs from previous years.

- Has the gimbal design been improved. This can be measured by performing simulations of stress tests, comparing the angle through which the gimbal can rotate in both directions. How compatible the gimbal is with different motors.

- Does the rocket have an effective active control system for gimballing the motor. This can be assessed by recording measurements from accelerometer, signals sent to gimbal servos, gps location and observation of the flight.

Verification Sections will likely be similar to 2018
- External interfaces
- functions
- Usability requirements
- Performance requirements
- Domain Model requirements
- Design constraints
- Software System attributes
- Physical and Environmental requirements

This list goes on. Essentially we need to determine what the requirements and goals for our rocket are first. Once we know what we want the rocket to achieve, then we can discuss how we can determine whether these goals/requirements were actually met. As mentioned above, our requirements are likely to be the same as previous years, however with the addition of extra requirements bought about by planned improvements on previous designs.

### 4.1 External Interfaces
_**TODO:**_ Assigned to Will

### 4.2 Functions
_**TODO:**_ Start doing this when we have final confirmation that 3.2 has a full draft

### 4.3 Usability Requirements
The usability of the rocket revolves around the idea of how the user will interact with the system to achieve important use cases, and how easy this is to do. To verify the usability requirements, each important scenario/use case must have a set of criteria that must be met to indicate that the usability of the system under that scenario has been verified.

#### Verification Under Specific Scenarios
The following specifies a set of criteria for each important use case/scenario that must be met in order to consider the usability of the system verified.

##### Transporting
- The rocket is contained within a **single physical construct or kit**
- Weighs less than or equal to **1.5kg** [2]
- Have a diameter of less than or equal to **29mm** at the rocket's widest point

##### Base Station Setup and Interactivity
- The setup of the base station laptop, USB LoRa, and the software module to enable interaction between the rocket and the base station takes no longer than **5 minutes to setup.** 

##### Pre-Flight Tuning
- A basic, intuitive input/feedback system is implemented
- User input is validated
- **Feedback** is provided to the user if invalid input is detected

##### Launch
- The stakeholder/s are able to maintain a safe distance from the rocket as the rocket is launched
- Manual ignition is featured to give stakeholder/s full control over the launch
- Launch critical features of the rocket are marked and stakeholder/s are able to identify these features intuitively as a result of the marking
- The setup takes no longer than **10 minutes**

##### Mid-Flight Diagnostics/Readings
- Logged data is stored into the on-board SD card
- Logged data is in a **readable format**
- Data is logged at regular intervals to both the SD card and the base station to enable the stakeholders to easily analyse any part of the flight both in real time, and post flight

##### Recoverability
- A parachute system is implemented to enable the rocket to land safely
- GPS system is accurate to within **5m** of the rocket's landing site to enable project stakeholders to quickly locate the rocket upon landing

##### Post-Flight Diagnostics/Analysis
- On-board SD card is easily accessible and retrievable from the rocket
- On-board SD card is intact at the end of the flight
- Rocket disassembly takes no more than **15 minutes**

##### Future Development
- Documentation in the form of manuals is written to enable any potential user to understand the system quickly
- Software is documented appropriately to **support the ability of future contributors to adapt the code**
- The project is open source so any future contributors can easily access the project

### 4.4 Performance Requirements
_**TODO:**_ Assigned to Will

### 4.5 Logical Database Requirements
_**TODO:**_ Start doing this when we have final confirmation that 3.5 has a full draft

### 4.6 Design Constraints

#### 4.6.1 Verifying Hardware Design Constraints
The hardware design constraints of the project will have been satisfied if the final rocket's properties abide by both legal regulations [2], and what the client imposes as a hardware constraint. 

For the legal regulations, the hardware design constraints are satisfied if:
- The rocket weighs less than or equal to 1.5kg at liftoff
- The rocket contains no more than 125g of propellant
- The rocket's body is composed of non-metal materials
- The rocket has a recovery system in the form of a streamer or parachute
- The rocket's motor must be for commercial use and officialy certified
- The rocket must be manually ignited through an electric ignition system

The client has provided only a single hardware design constraint: The rocket's airframe must not exceed a diameter of 29mm. This hardware design constraint is satisfied if the diameter of the rocket's body is less than or equal to 29mm, although preferably less than 29mm for transportability, aerodynamics, and cost-efficiency purposes. To ensure that these hardware design constraints are met, the project team will consult these design constraints regularly during the execution phase of the project. It is important to note that the majority of the hardware constraints are sourced from legal regulations in accordance with the NZCAA [2]. As a result, the team will closely monitor if any changes to the legal regulations occur and update the design constraints as necessary to make sure that the hardware design constraints are verified at the end of the project.

_**TODO:**_ If we add any design constraints related to the specific equipment/electronics we use in section 3.6, add how to verify those components in here.

#### 4.6.2 Verifying Software Design Constraints
One of the primary software design cosntraints that needs to be verified would be the fact that the software package must be open source, and in turn, can only use 3rd party libraries/APIs that are also open source. To satisfy this constraint, each 3rd party library the project team elects to use must be open source. This can be achieved by making sure that the library/API is licensed under a license that is consistent with those outlined by the Open Source Initiative [4]. Such licenses include the following but are not limited to:
- Apache License 2.0
- MIT License
- GNU General Public License (GPL)
- BSD-3 Clause ("New" or "Revised" License)

Transitive dependencies (other libraries/APIs used by the 3rd party library/API) must also be open source. If this is not the case, then the project will fail to meet the open source software design constraint of the project.

_**TODO:**_ If we discover any more design constraints are added to section 3.6, add them in here

### 4.7 Nonfunctional System Attributes

#### 4.7.1 Verifying Hardware Non-Functional System Attributes
_**TODO:**_ Need to write 3.7.1 first - Do this ASAP!

#### 4.7.2 Verifying Software Non-Functional System Attributes

##### Attribute 1: Correctness and Reliability
The verification of this attribute requires a large amount of testing. Verifying the correctness and reliability of the software system can be achieved through rigorous unit testing to verify the lower level logic of the code. Unit testing will be conducted on _all_ software modules to verify the overall correctness and reliability of the software. Furthermore, unit testing will be integrated into the regular workflow of the team. _**TODO: Confirm with team**_. This means that at every sprint, a set of test cases will be formed, which the target software module must pass at the end of the sprint. For software tests that require the usage of hardware components or a fully/partially built rocket, testing will be conducted in a highly controlled environment where the project team has full control over what happens to the components, and the outcome is known. This attribute is verified if the software performs as intended and is deemed as sufficient by the project team, and the client.

##### Attribute 2: Maintainability and Extensibility
To verify this attribute, the project team members in charge of developing the software must be in **full agreement** that relevant programming techniques that promote maintainable and extensible design were observed to the best ability of the developers. Some of the programming techniques that can facilitate maintainable and extensible software include the following but are not limited to:
- Observing low coupling - high cohesion where appropriate
- Adhering to existing coding conventions
- Commenting 
- Proper usage of abstraction
- Observing 'DRY' (Do not repeat yourself)
- Formal documentation in the form of documentation comments and/or API manuals

Furthermore, personas will also be used in the verification process of this attribute. Each persona will be considered to see if that persona can understand the code-base and the manuals provided in a way that will enable them to make suggestions or apply changes to the code.

##### Attribute 3: Testing
This attribute can be verified by assessing the attribute against a range of both quantitative and qualitative metrics. From a quantitative point of view, this attribute is verified if the following conditions are met:
- 90% overall code coverage is achieved by all unit tests
- A quota of _**[TODO: Insert Number Here]**_ unit testing methods are achieved by the end of the project

From a qualitative point of view, this attribute is verified if the following conditions are met:
- All tests pass across all software modules by the end of the project
- Test cases written for a specific software module should lead to the software module working as expected. This will indicate that the tests are valid.
- A wide range of potential cases are covered, including valid, invalid and edge cases
- Gitlab's CI/CD feature is used appropriately to facilitate system and integration testing

Note that Attribute 1 (Correctness and Reliability) depends heavily on this attribute. It is important that the verification of this attribute is achieved, and done so comprehensively, given the potentially dangerous nature of the product being developed by the project.


### 4.8 Environmental and Physical Requirements
_**TODO:**_ Assigned to Will

## 5. Development schedule.

### 5.1 Schedule

**Original Instructions**

> Identify dates for key project deliverables:

> 1. architectural prototype
> 1. minimum viable product
> 1. further releases

> (1 page).

5.1 Schedule

5.1.1 Architectural Prototype

Set out a date that we want to have the architectural prototype done by.

5.1.2 Minimum Viable Product

Set out a date that we want to have the minimumt viable product done by. Section 1.3

5.1.3 Further Releases.

Finanl prototype due, as well as any other planned significant releases. (Perhaps improvements)
Will software and hardware be published differently? This will be announced in Section 1.3 as well.

### 5.2 Budget

**Original Instructions**

> Present a budget for the project (table), and justify each budget item (one paragraph per item, one page overall).

Present a budget covering the cost of all of the component? Are we going to use hardware next tri?
Perhaps we are paying for some of the software for simulation?

- We should make a list of the hardware that we might need. (ie, micro controllers and sensors etc.)
- Ie, "This is our theoretical budget." Treat it as a grocery list.

### 5.3 Risks

**Original Instructions**

> Identify the ten most important project risks to achieving project goals: their type, likelihood, impact, and mitigation strategies (3 pages).

> If the project will involve any work outside the ECS laboratories, i.e. off-campus activities, these should be included in the following section.

Identify top 10 most important risks affecting the project goals.

- Global pandemic.
- Injury of team mates
- Distractions?

The content below outlines the 10 most important risks that can impact achieving project goals. Attributes of each risk such as the likelihood of the risk occuring and its impact is described using the following levels:

> Likelihood: - Unlikely, Likely, Very Likely
> Impact - Mild, Moderate, Severe

- #### Risk 1: Rocket falls on a person causing injury

  - **Risk Type:** Health and Safety

  - **Likelihood:** Unlikely

  - **Impact:** Severe

  - **Mitigation Strategy:** During a rocket launch, all attending project members and other stakeholders/spectators are required to maintain a safe distance from the rocket. Any member of the public present at the launch site will be informed of the rocket launch so that they are made aware of the potential danger. During the rocket's flight, the trajectory and status of the rocket will be closely monitored to ascertain the landing location of the rocket. If there are too many people at the launch site, the launch will be postponed. Ensure that a recovery system in the form of a streamer or parachute is implemented [1] to minimize the damage done by an impact with a person during landing. Project stakeholders involved with the rocket launch will maintain a minimum distance of 5m from the rocket during a launch, as required by the NZRA [1].

- #### Risk 2: Rocket unintentionally makes contact with an object during flight or when it lands, causing damage to property.

  - **Risk Type:** Health and Safety, Environmental

  - **Likelihood:** Unlikely

  - **Impact:** Moderate

  - **Mitigation Strategy:**  The site of the rocket launch will be inspected closely prior to the launch to determine if there are any objects belonging to the project members or to the members of the public. The location of the launch site must be a safe distance away from any buildings, cars and roads. Ensure that a parachute deployment system is implemented to minimize the damage done by an impact with an object during landing.

  - _**TODO:**_ One potential mitigation strategy is to limit the altitude the rocket can reach? Customer specifically said that the priority of the project is control and that the rocket reaching high altitudes is not the goal/desired. This mitigation strategy can also apply to Risk 1.



- #### Risk 3: Rocket's trajectory affected by winds, causing it to take an unsafe flight path and in turn, causing injury to people or damaging.

  - **Risk Type:** Environmental

  - **Likelihood:** Unlikely

  - **Impact:** Severe

  - **Mitigation Strategy:** Consult mission control software before a rocket launch to determine if the current wind speeds can safely accomodate a flight. Launches will be postponed if wind speeds exceed **32km/h** [1]. 



- #### Risk 4: Rocket parts unexpectedly disassembles during flight. Debris emitted causes damage to people and property.

  - **Risk Type:** Health and Safety/Environmental

  - **Likelihood:** Unlikely

  - **Impact:** Moderate

  - **Mitigation Strategy:**



- #### Risk 5: Covid-19 pandemic causes lockdown, hindering progress.

  - **Risk Type:** Legal/Health and Safety/Environmental

  - **Likelihood:** Very Likely

  - **Impact:** Moderate

  - **Mitigation Strategy:** The project team will continue to work remotely, using tools as specified in the team contract to maintain communication during the lockdown period. Hold meetings remotely as outlined in the team contract to continually assess and provoke progress. Focus of the project will shift to parts of the project that do not require the practical application of hardware. Hardware related components of the project will be simulated. Project members will closely monitor the situation and decide on the achievability of certain project objectives in a reactive manner.

  - Note: This is an ongoing issue as of 23/4/2020



- #### Risk 6: Covid-19 pandemic affects global logistics, making it difficult to procure equipment and parts.

  - **Risk Type:** Resources

  - **Likelihood:** Very Likely

  - **Impact:** Moderate

  - **Mitigation Strategy:** The project team will continue to plan and budget for the equipment and parts required so when the ability to order parts becomes feasible, the team is able to order such parts immediately and mitigate the time lost to progress with the project. The project team will discuss with the client if certain parts can be recycled from previous attempts at the project by other teams.

  - Note: This is an ongoing issue as of 23/4/2020



- #### Risk 7: Rocket ignites prematurely, causing injury to people

  - **Risk Type:** Health and Safety

  - **Likelihood:** Unlikely

  - **Impact:** Severe

  - **Mitigation Strategy:** At all times during a launch, project stakeholders involved with the launch must maintain a safe distance of at least 5m. Manual ignition system must be electric, and have a safety interlock in place [1]. A first aid kit will be brought to the launch site to treat any injuries immediately. _**TODO:**_ (Mention 10m wire connected to motor for manual ignition. Alternatively, we can ignite by means of software which would mean that we can be far away from the rocket for a long time. Although the client did say this is not the preferred method due to a number of safety precautions. Mention fire extinguisher)



- #### Risk 8: Rocket takes an unsafe trajectory mid-flight due to software error, causing damage to people or objects.

  - **Risk Type:**  Health and Safety/Environmental

  - **Likelihood:** Unlikely

  - **Impact:** Severe

  - **Mitigation Strategy:** The project team will extensively test the software to validate its correctness before proceeding with a rocket launch.

  - _**TODO:**_ Is there a way of developing some sort of manual kill switch so if we ever see the rocket taking an unsafe path (eg heading towards the ground or a person), we can kill its thrust to minimize impact damage?


- #### Risk 9: Rocket ignition causes a fire

  - **Risk Type:** Health and Safety/Environmental

  - **Likelihood:** Unlikely

  - **Impact:** Moderate

  - **Mitigation Strategy:** Project stakeholders must undertake a health and safety induction prior to the launch In accordance with the NZCAA [1], the selected launch site must be clear of dry grass to lower the risk of causing a fire during a rocket ignition. The project stakeholders involved with the launch will closely inspect the launch site for flammable material to remove them. A rocket launch will be postponed if the fire alert level is high, or if the temperature is unusually high. A fire extuinguisher will be brought by the team at the launch site to counter small fires. 


- #### Risk 10: Wind speeds suddenly exceed the safe wind speed for the rocket during flight

  - **Risk Type:** Health and Safety, Environmental, 
  - **Likelihood:** Unlikely
  - **Impact:** Moderate
  - **Mitigation Strategy:** The rocket launch will only proceed if the current wind speeds are well below the maximum wind speed determined for the rocket. Wind speeds will be continually monitored during the flight to keep the team informed on the safety of the flight. Recovery system will be manually deployed in the event that the wind speed rises to an unsafe level.

### 5.4 Health and Safety

**Original Instructions**

> Document here project requirements for Health and Safety. All teams must state in this section:

> 1. How teams will manage computer-related risks such as Occupational Over Use, Cable management, etc.  

> 2. Whether project work requires work or testing at any external (off-campus) workplaces/sites. If so, state the team's plans for receiving a Health and Safety induction for the external workplaces/sites. If the team has already received such an induction, state the date it was received.

> 3. Whether project work requires the team test with human or animal subjects? If so, explain why there is no option but for the team to perform this testing, and state the team's plans for receiving Ethics Approval _prior_ to testing.

> Also document in this section any additional discussions with the School Safety Officer regarding Health and Safety risks. Give any further information on relevant health and safety regulations, risks, and mitigations, etc.

>> Planning:
> - Computer related risks such as occupational overuse, cable management? Perhaps a couple points might tie in with 5.3? Mental health concerns are part of scope here.
> - Requirements for work or testing at external workplaces/sites. Discuss virtual testing? Perhaps we are going to be using hardware next tri?
> - Ethically concerned requirements for testing Human or animals? Not very relevant. Explain why? Discuss ethics?

**Section Draft**

1. How teams will manage computer-related risks such as Occupational Over Use, Cable management, etc.  

It is the responsibility of the individual to make sure they have done the best they personally can to ensure they have a healthy, safe and tidy working environment. However, if for any circumstances these conditions cannot be met for an indiviual, there are still options that can be done as a team to ensure everyone's health and safety when undergoing computer related activities.

In general, when it comes to computer usage, it isn't healthy to spend an inordinate amount of time in front of the screen. This often can be amplified by complications regarding the suitability of thier working environment. If any team member feels they have an inadequate working environment or an excessive amount of work they have been assigned. Then their obligation is to let the rest of the team know of their situation. The importance of this is as a team, we all share common interests and goals for the project. In sharing their situation with the team, it is then the teams responsibility to reassess the full situation. The team will get together and discuss what they can do to lighten the burden off of the affected team member. This could be in the form of lightening the sum of work assigned to the individual. However, it might also look like changing the type of work assigned in order to meet the means of the affected individual. An example of this might be if a team member was tasked with a computationally demanding task such as that requires running a heavy simulation on their device. If the team member did not have access to a sufficiently powerful machine, then they are obliged to notify the team of their current situation. The team is then obliged to consider the members request and discuss rescheduling work appropriately. This might also look like the indiviual has a computer that is not physically compatible with the assigned tasks, or their device requires an exceptional amount of work to configure (software incompatable -> such as wrong operating system). What is considered physically incompatable may also be vague. For examle, another interpretation of this might be, if a pending task required creating large state diagrams (requiring a bigger monitor), and the team member only had access to a small laptop screen. The team member could ask for a reassessment of work such that they can find something that suits their means.

2. Whether project work requires work or testing at any external (off-campus) workplaces/sites. If so, state the team's plans for receiving a Health and Safety induction for the external workplaces/sites. If the team has already received such an induction, state the date it was received.

In the event that the team decides to perform work or testing at any external (off-campus) workplaces/sites, it is paramount that appropriate considerations are made ahead of time. These considerations will be realised in the form of a health and safety plan. Before the team visits any planned locations, they must first as a group brainstorm or discuss any health and safety risks that might be applicable to the location. It is important to note that mental health is also a vital consideration. Once these risks have been accessed, both the likelihood and what mitigations can / will be undertaken to reduce the risks. If any individual has concerns conflicting with the team about any offsite locations, then they can either express their stance with the team, or discretely raise the concern with the course coordinator / health and safety officer. Any industrial locations must require an induction, whether this is official, or provided unofficially by a member with strong knowledge of the environment.

<i><b>TODO</b> This needs rewording to properly answer the question, but I can't quite figure out how. - Z</i>

3. Whether project work requires the team test with human or animal subjects? If so, explain why there is no option but for the team to perform this testing, and state the team's plans for receiving Ethics Approval _prior_ to testing.

The team as a whole has stated that they have strong objections with any work or testing on any animal subjects. The scope of this project entails creating software and hardware for miniature model rockets strictly used for conventional hobby-like activities. In the unlikely event where the team becomes aware of the intention of either their software or hardware being used for unethical or extreme activities, then the team will halt any work until they have thoroughly assessed the situation. Should the intentions of the project usage, or scope change to an undesirable nature, then they have the right to halt all work undertaken indefinitely.

#### 5.4.1 Safety Plans

**Original Instructions**

> Safety Plans may be required for some projects, depending on project requirements. Safety Plan templates are available on the course Health & Safety page. Two questions all teams must answer are:

> **Do project requirements involve anything that can cause serious harm or death?**  
> Examples: building/modifying devices using voltages > 60 V, chemicals, large moving machinery, flying devices, bodies of water.

> If so, you will have to write a separate Safety Plan as part of project requirements, and the Safety Plan must be referenced in this section. For health and safety risks involving serious harm or death, you must first contact the School Safety Officer and Course Coordinator first to discuss the Safety Plan and project requirements.

> **Do project requirements involve anything that can cause harm or injury?**  
> Examples: building/modifying things with voltages <= 60V, small moving machinery, wearable devices.

> If so, you will have to write a separate Safety Plan as part of project requirements, and the Safety Plan must be referenced in this section. For health and safety risks involving harm or injury, you should write a draft of the Safety Plan before contacting the School Safety Officer and Course Coordinator to discuss the Safety Plan and project requirements.

> If a safety plan is required, list in this section the date the School Safety officer accepted your Health and Safety plan (if accepted by submission date).

_If the project is purely software and requires no contact risks involving physical harm, then state "Project requirements do not involve risk of death, serious harm, harm or injury." in this section._

May be required depending on previously stated project requirements.

Do project requirements involve anythign that can cause serious harm or death?

> Hardware yeah? Risks of projectiles perhaps. incendiarys?. Will have to write indiviual safety plan as part of project requiements. Must contact School Safety officer and coordinator to discuss safety plan and project requirements.

Do project requirements involve anything that can cause harm of injury?

<i><b>TODO</b> perhaps this should be formatted as a table? - Z</i>

> Hardware electricution / chemical incendiaries - is this still a risk? Write safety plan as part of project requirements. For H&S risks write a draft for safety officer and coordinator to discuss the plan and project requirements.

Otherwise, if all software. We can state "Project requirements do not involve risk of death, serious harm, harm or injury."

## 6. Appendices
### 6.1 Assumptions and dependencies

One page on assumptions and dependencies (9.5.7).

### 6.2 Acronyms and abbreviations

One page glossary _as required_.

## 7. Contributions

A one page statement of contributions, including a list of each member of the group and what they contributed to this document.

---

## Formatting Rules

 * Write your document using [Markdown](https://gitlab.ecs.vuw.ac.nz/help/user/markdown#gitlab-flavored-markdown-gfm) and ensure you commit your work to your team's GitLab repository.
 * Major sections should be separated by a horizontal rule.


## Assessment  

The goal of a requirements document is the problem you are attempting to solve:  not a first attempt at a solution to that problem. The most important factor in the assessmernt of the document is how will it meet that goal. The document will be assessed for both presentation and content.

The presentation will be based on how easy it is to read, correct spelling, grammar, punctuation, clear diagrams, and so on.

The content will be assessed according to its clarity, consistency, relevance, critical engagement and a demonstrated understanding of the material in the course. We look for evidence these traits are represented and assess the level of performance against these traits. While being comprehensive and easy to understand, this document must be reasonably concise too. You will be affected negatively by writing a report with too many pages (far more than what has been suggested for each section above).

We aim to evaluate ENGR301 documents and projects as if they were real projects rather than academic exercises &mdash; especially as they are real projects with real clients. The best way to get a good mark in a document is to do the right thing for your project, your client, and your team. We encourage you to raise questions with your tutor or course staff, as soon as possible, so you can incorporate their feedback into your work.

---
