/*
  SimpleFFT Example
  
  This example demonstrates how to use CMSIS-DSP for simple FFT operations.
  
  Circuit: None required
*/

#include <arm_math.h>

// Define input length
#define TEST_LENGTH_SAMPLES 32

// Define FFT size
#define FFT_SIZE 32

// Input and output buffers
float32_t input[TEST_LENGTH_SAMPLES];
float32_t output[FFT_SIZE];

// FFT instance
arm_rfft_fast_instance_f32 S;

void setup() {
  Serial.begin(115200);
  
  // Initialize FFT
  arm_rfft_fast_init_f32(&S, FFT_SIZE);
  
  // Generate simple test signal (sine wave)
  generateTestSignal();
  
  Serial.println("CMSIS-DSP FFT Example");
  Serial.println("=====================");
}

void loop() {
  // Perform FFT
  arm_rfft_fast_f32(&S, input, output, 0);
  
  // Calculate magnitude spectrum
  float32_t magnitude[FFT_SIZE/2];
  arm_cmplx_mag_f32(output, magnitude, FFT_SIZE/2);
  
  // Print results
  Serial.println("\nFFT Magnitude Spectrum:");
  for (int i = 0; i < FFT_SIZE/2; i++) {
    Serial.print("Bin ");
    Serial.print(i);
    Serial.print(": ");
    Serial.println(magnitude[i]);
  }
  
  delay(5000);
}

void generateTestSignal() {
  // Generate a simple sine wave at 1 kHz (assuming 16 kHz sampling rate)
  float32_t frequency = 1000.0f;
  float32_t samplingRate = 16000.0f;
  
  for (int i = 0; i < TEST_LENGTH_SAMPLES; i++) {
    float32_t phase = 2.0f * 3.14159265f * frequency * i / samplingRate;
    input[i] = arm_sin_f32(phase);
  }
}
