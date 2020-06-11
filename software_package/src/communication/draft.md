#### Currently just planning
- C/C++

##### Class hierarchy
- Communications
  - Radio
    - RadioImplementation
    - RadioInterface
  - Logging
    - Logger
    - SDCard
    - LogDB

- Will contain 2 main packages 'Radio' and 'Logging'
- Radio requires:
  - an interface
    - Will be able to be called by base station
    - call for pre flight diagnostics
    - call for getting in flight data - real time
    - call for post flight data
  - a concrete implementation
    - ability to poll all sensors
      - SensorManager
      - battery/accelerometer/gps/gyroscope
    - ability to poll all servos
    - get current position of rockets
    - get current state of rocket

- Logging requires:
  - Logger
    - read from memory
    - write to memory
  - SDCard
    - read SD
    - write to SD
  - LogDB?
    - database for entire flight?
    - clarify this exactly with team
