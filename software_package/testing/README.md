## Testing

As explained in the software_package [README](./software_package/README.md) this directory is solely dedicated to the testing of the hardware. For the most part the focus on this package is about gaining an understanding of the specific hardware components, as well as the libraries attached to them. This includes getting each of these working inside of the PIO structure.

The key goal of this package can be viewed as creating code that works. That which can than be iterated on and refined both here and in the `development` package. Due to the experimental nature of this package there is little structure to each package, with most testing packages just containing a single `main.cpp`.

### Lora testing

This package is and was used for the initial setup of the base station, which is critical for all communication with Mission Control. The communication for base station was achieved via the LoRa radio module. This package contains two further PIO project packages: `Lora STM32` for the transmission of packets, and `Lora Base Station` for the reading of packets,.

On of the key discoveries in this process was that the LoRa module struggled to perform communication at a reasonable frequency. A lot of this package contains the tuning and tweaking of the LoRa software to best optimise this transmission rate.

### Generic Testing

This package is and was used for testing a wide range of the components individually. This includes custom methods, eg. double_test(), for testing the effectiveness and limitations of performing calculations on the hardware.

The first iteration of our MPU and SD interaction can also be found here. This includes logic for initializing components, reading accelerometer and gyroscope values, adjusting filter bandwidth values, and reading and writing from files.
