Why 0-1023 for the Potentiometer?
The Arduino’s analog pins (A0, A1, etc.) read analog input using a 10-bit Analog-to-Digital Converter (ADC). This means the input voltage (0V to 5V) is converted into a range of 0 to 1023.

How It Works:
The potentiometer acts as a voltage divider, outputting a voltage between 0V (GND) and 5V (VCC).

The analogRead() function converts this voltage to a digital value between 0 and 1023.

The conversion is based on:

ADC Value=(Input Voltage / 5v)×1023


Why not use a Digital Pin? Digital pins give binary output (0 and 1). When using a potentiometer this would have the effect of having the output start at 0, and about midway through turning the potentiometer it would switch to 1.

Analog requires a conversion, but it allows for us to use the exact positioning of the potentiometer. This allows for use to use exact angles such as through a mapping function shown in the program.