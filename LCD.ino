
#include <Adafruit_GFX.h> // Core graphics library
#include <Adafruit_ST7735.h> // Hardware-specific library for ST7735
#include <SPI.h>

#define TFT_CS 6 // Chip Select pin
#define TFT_DC 9  // Data/Command pin
#define TFT_RST 8 // Reset pin

Adafruit_ST7735 tft = Adafruit_ST7735(TFT_CS, TFT_DC, TFT_RST);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  tft.initR(INITR_BLACKTAB); 
  tft.fillScreen(ST7735_BLACK);
}

void loop() {
  // put your main code here, to run repeatedly:
  tft.setCursor(0, 0); // Top left corner

  // Set the text color
  tft.setTextColor(ST7735_RED); // Or any other color

  // Set the text size (optional)
  tft.setTextSize(2); // 1, 2, 3 are common sizes

  // Print the message
  tft.println("Hello, Adafruit ST7735.");

  delay(5000); // Display for 2 seconds
}
