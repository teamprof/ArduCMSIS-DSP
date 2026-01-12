/*
  SimpleFloat32 Example

  This example demonstrates how to use CMSIS-DSP for simple float32_t operations.

  Circuit: None required
*/

#include <arm_math.h>

void setup()
{
    Serial.begin(115200);
    delay(1000);

    Serial.println("CMSIS-DSP Float32_t Example");
    Serial.println("=====================");
}

void loop()
{
    // Use CMSIS-DSP functions here
    float32_t input = 3.5f;
    float32_t output;
    arm_abs_f32(&input, &output, 1);
    Serial.println(output);
    delay(1000);
}
