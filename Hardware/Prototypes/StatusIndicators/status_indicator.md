## Status Indicator Design for Indicating Armed State
It's important during launch for the operator to quickly be able to determine
state of the system to speed up troubleshooting and for safety reasons. In
particular it isn't important for there to be a clear queue once the rocket
is armed, that is when the motor is ready for ignition or charges for the
parachute deployment are armed. This is to ensure the operator is aware of the
danger the rocket poses during this time. A clear status indicator would be to
have a LED or alarm to sound once the rocket is armed.

A buzzer/alarm would be a sensible option as this does not require line of
sight. Therefore a small magnetic transducer which converts electrical energy
into sound energy would be suitable. This device requires a 2kHz Square wave with
a zero-peak voltage of 3V. One option for generating this would be an
oscillator driven by operational amplifiers. [Op Amp Oscillator](OpAmpOsci.PNG)

A better option is to use a 555 timer. [555 timer oscillator](555timerOscillator.PNG)
Where C = 10nF, R1 = 10kOhms and R2 = 33 kOmhs. This would produce a square wave
with duty cycle 56.58% and a frequency of 1895Hz which is ideal for the transducer.
This then just needs to be wired to the hardware safety interlocks, so that
when the safety lock is removed, the connection between the 555 timer and the
transducer is bridged therefore giving off an audible beeping when the rocket is
armed.
