TOF - VL53L0X Time of Flight distance sensor library

Here there is a modified version of very good Larry Bank's VL53L0X library.
My version has functions to work in non blocking mode.
I added two new functions: 
- tofStartReadDist is called to initiate the reading,
and return soon to caller; 
- tofReadDistanceAsync must be called after a delay of 200 ms or more, this delay
is need from device to complete the reading in the worst case.
With the two functions a caller can use the library in a non blocking mode,
doing some other processing in the delay. This could be required in realt-time
programs.
Included an example to use the new functions, mainAsync.c .
And a script to compile as a shared library, libVl53l0x.so .

From Larry Bank original version:

This code is based on the Pololu Arduino library (see LICENSE.txt)
My aim with this project was to simplify that code and port it to Linux
for use on boards like the Raspberry Pi. The problem with ST Micro's part
and support software are that they designed their I2C interface specifically
to rely on 'magic numbers' for initialization and publish a software library
which requires adherance to restrictive licensing terms. By publishing this
library, I hope to help more people use the sensor in more ways. The technology
and low cost of the sensor make it a valuable addition to the IoT world, but
ST Micro's attempt to obfuscate the interface and control the software goes
against the open nature of the community.

This code puts the sensor into continous sample mode and allows selection
between the default mode (30-800mm) and the long range mode (30-2000mm).

From my limited testing, it appears to give accurate results in the range
40-600mm. Beyond that and the results are less accurate and more prone to being
interfered with by ambient light.
