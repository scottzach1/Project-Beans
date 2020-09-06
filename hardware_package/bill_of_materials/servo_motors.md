# Servos

Required for the Gimbal. Desired specifications are, Low profile, decent
torque, ideally very light, cheap and low power draw. Voltage range
(within 3-7V). (want to update servos around 40Hz should complete 0.5
rpm in 1/40seconds so RPM should be around 20+)

| Product   | Strength        | RPM           | Voltage Range | Peak current Draw | Weight   | Dimensions            | Price     | Link                                                                                                    |
|:----------|:----------------|:--------------|:--------------|:------------------|:---------|:----------------------|:----------|:--------------------------------------------------------------------------------------------------------|
| ROB-16413 | -               | 90 RPM (4.5V) | 3 ~ 9VDC      | -                 | ?        | 80x22.4x25.8mm        | $12.30500 | <https://www.digikey.co.nz/product-detail/en/sparkfun-electronics/ROB-16413/1568-ROB-16413-ND/12178435> |
| 2442      | 147.4(mNm)      | 130()         | 4.8-6V        | 100 mA            | 9.07 g   | 32mm x 30mm x 12mm    | $15.51350 | <https://www.digikey.co.nz/product-detail/en/adafruit-industries-llc/2442/1528-1501-ND/5774227>         |
| SER0039   | 1.8kg*cm torque | 130           | 4.8~6V        | -                 | 12 grams | 22.3 x 11.8 x 26.3 mm | $12.32800 | <https://www.digikey.co.nz/product-detail/en/dfrobot/SER0039/1738-1255-ND/7087152>                      |

## Notes

### Brushed

- Low overall construction costs;
- Simple and inexpensive controller; <----------
- Controller not needed for fixed speed;
- Ideal for extreme operating environments. <----------

### Brushless

- Less overall maintenance due to lack of brushes;
- Operates effectively at all speeds with rated load;
- High efficiency and high output power to size ratio; <----------
- Reduced size with far superior thermal characteristics; <----------
- Higher speed range and lower electric noise generation. <----------

ref:
<https://www.motioncontrolonline.org/blog-article.cfm/Brushed-DC-Motors-Vs-Brushless-DC-Motors/24#:~:text=What%20is%20the%20Difference%20Between,as%20a%20two%2Dpole%20electromagnet.&text=A%20brushless%20motor%2C%20by%20contrast,magnet%20as%20its%20external%20rotor.>

### Stepper vs Servo

"The basic difference between a traditional stepper and servo-based
system is the type of motor and how it is controlled. Steppers typically
use 50 to 100 pole brushless motors while typical servo motors have only
4 to 12 poles. A pole is an area of a motor where a North or South
magnetic pole is generated either by a permanent magnet or by passing
current through the coils of a winding.

Steppers don't require encoders since they can accurately move between
their many poles whereas servos, with few poles, require an encoder to
keep track of their position. Steppers simply move incrementally using
pulses \[open loop] while servo's read the difference between the motors
encoder and the commanded position \[closed loop], and adjust the current
required to move."

#### ADV/DISADV

- "One rotation of a stepper motor requires many more current exchanges
  through the windings than a servo motor."
- "he stepper motor's design results in torque degradation at higher
  speeds when compared to a servo"
- "Conversely, a high pole count has a beneficial effect at lower speeds
  giving the stepper motor a torque advantage over the same size servo
  motor."

"Servo control systems are best suited to **high speed**, **high
torque** applications that involve **dynamic load changes**. Stepper
control systems are **less expensive** and are optimal for applications
that require **low-to-medium acceleration**, **high holding torque**,
and the flexibility of open or closed loop operation."

ref:
<https://www.amci.com/industrial-automation-resources/plc-automation-tutorials/stepper-vs-servo/#:~:text=Stepper%20motors%20have%20many%20more,when%20compared%20to%20a%20servo.>
