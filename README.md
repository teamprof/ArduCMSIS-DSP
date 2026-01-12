# CMSIS-DSP Arduino Library

This is a fork of precompiled Arduino library package for ARM CMSIS-DSP (Cortex Microcontroller Software Interface Standard - Digital Signal Processing Library) maintained by teamprof.net@gmail.com

## Features (NOT fully tested)

- FFT (Fast Fourier Transform) and IFFT
- Matrix operations (multiplication, transpose, inverse)
- Filtering (FIR, IIR)
- Statistical functions (mean, variance, RMS)
- Vector operations
- Controller functions
- Support for floating-point and fixed-point arithmetic
- Optimized for ARM Cortex-M processors

## Installation

1. Download this library folder
2. Place it in your Arduino `libraries` directory:
   - **Windows**: `Documents\Arduino\libraries\`
   - **macOS**: `~/Documents/Arduino/libraries/`
   - **Linux**: `~/Arduino/libraries/`
3. Restart Arduino IDE

## Usage

Include the CMSIS-DSP header in your sketch:

```cpp
#include <arm_math.h>

void setup() {
  Serial.begin(115200);
}

void loop() {
  // Use CMSIS-DSP functions here
  float32_t input = 3.5f;
  float32_t output;
  arm_abs_f32(&input, &output, 1);
  Serial.println(output);
  delay(1000);
}
```

## Documentation

For complete documentation and API reference, visit:
- [CMSIS-DSP GitHub Repository](https://github.com/ARM-software/CMSIS-DSP)
- [ARM CMSIS Documentation](https://arm-software.github.io/CMSIS-DSP/)

## Library Contents

- `libCMSISDSP.a` - Precompiled static library (cortex-m0plus)
- `include/` - Header files for all CMSIS-DSP functions
- `src/` - Arduino wrapper code

## License

This library is based on ARM CMSIS-DSP which is licensed under Apache License 2.0.
See the original repository for details.

## Version Information

### MSIS-DSP Version: 1.0.0
### Arduino IDE version: 2.3.6

- Board: Raspberry Pi Pico - Arduino Mbed OS RP2040 Boards
- Target: ARM Cortex-M0+ (RP2040)
- Compiler: arm-none-eabi-gcc 7.2.1

- Board: Raspberry Pi Pico 2
- Target: ARM Cortex-M33 (RP2350)
- Compiler: arm-none-eabi-gcc (GCC) 14.3.0