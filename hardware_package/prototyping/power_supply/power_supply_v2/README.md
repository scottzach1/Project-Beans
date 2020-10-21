# Revised PSU Design (5/08/2020)

Power supply with 6V (1A max) and 3.7V outputs.

7.4V LiPo pack will be used as a power source. Most of these packs have
a JST XH header (info regarding this can be found
[here](https://sites.google.com/site/tjinguytech/charging-how-tos/balance-connectors/)).
The benefit of this is that there is a lead running from each cell in
the battery (+7.4V, +3.7V and GND). The Adafruit Feather can be directly
powered directly from one of these cells, and therefore only one
regulator should be required.

Switching regulator then selected for providing 6V output to servos as
it is more efficient and therefore additional heatsinks won't be
required. Design for this again sourced through WEBENCH POWERDESIGNER
([Link](https://webench.ti.com/power-designer/)).

PMOSFET included to protect against incorrect battery polarity, although
it is likely this would not be possible due to the JST connector only
connecting in one direction.

Further protective circuitry i.e over current, under voltage and over
voltage may need to be considered as well.
