
- date this in case modified in final week push (unlikely)


- As explained in the software_package [README](./software_package/README.md) this directory is solely dedicated to testing of the hardware.
- more about mocking up code that works rather than "perfect" code
    - code used in here is then iterated on in the `development` package
- for the most part this code is more basic and less structured than found in `development`
- a lot of Serial printing
- getting an understanding of hardware specific libraries, eg. Adafruit for MPU, as well as how they interact with the PIO structure

### Lora testing

- used for initial setup
    - testing out lora module
    - communication with base station, critical to develop this for mission control teams
    - found that it struggled to perform communication at a high enough frequency
    - a lot of tuning done in here to maximise this frequency
    - Lora Base station
        - transmition of packets
    - Lora STM32
        - reading of packets

### Generic Testing

- MPU
    - initialisation
    - reading
    - Accelerometer
        - range Testing
        - (x,y,z) printouts
    - Gyrometer
        - range testing
        - (x,y,z) printouts
    - different filter bandwidths
- SD
    - write to a file
    - reading from a file
- method testing
    - double()
    - effectiveness of calculations with data on hardware
