#include <Arduino.h>
#include <Adafruit_NeoPixel.h>

// Define NeoPixel parameters
#define LED_PIN     12  // Data pin for the NeoPixel
#define POWER_PIN   11  // Power/enable pin for the NeoPixel
#define NUMPIXELS   1   // Number of NeoPixels on the board

// Declare our NeoPixel object
Adafruit_NeoPixel pixels(NUMPIXELS, LED_PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  // Set the power pin as output and turn it on
  pinMode(POWER_PIN, OUTPUT);
  digitalWrite(POWER_PIN, HIGH);

  // Initialize the NeoPixel library
  pixels.begin();
  pixels.setBrightness(50); // Set brightness (0-255)
  pixels.clear(); // Initialize all pixels to 'off'
  pixels.show(); // Send the updated pixel color to the hardware.
}

void loop() {
  // Red
  pixels.setPixelColor(0, pixels.Color(255, 0, 0));
  pixels.show();
  delay(1000);

  // Off
  pixels.clear();
  pixels.show();
  delay(500);

  // Green
  pixels.setPixelColor(0, pixels.Color(0, 255, 0));
  pixels.show();
  delay(1000);

  // Off
  pixels.clear();
  pixels.show();
  delay(500);

  // Blue
  pixels.setPixelColor(0, pixels.Color(0, 0, 255));
  pixels.show();
  delay(1000);

  // Off
  pixels.clear();
  pixels.show();
  delay(500);
} 