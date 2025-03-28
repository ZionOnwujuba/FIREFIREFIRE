
#include <Adafruit_GFX.h> // Core graphics library
#include <Adafruit_ST7735.h> // Hardware-specific library for ST7735
#include <SPI.h>

#define TFT_CS 6 // Chip Select pin
#define TFT_RST 8 // Reset pin
#define TFT_DC 9  // Data/Command pin

Adafruit_ST7735 tft = Adafruit_ST7735(TFT_CS, TFT_DC, TFT_RST);

void LCDsetup() {
  // put your setup code here, to run once:
  tft.initR(INITR_BLACKTAB); 
  tft.fillScreen(ST7735_BLACK);
}

void clearScreen() {
  tft.fillScreen(ST7735_BLACK);
}

void Pan1_Text() {
  // put your main code here, to run repeatedly:
  tft.setCursor(0, 0); // Top left corner

  // Set the text color
  tft.setTextColor(ST7735_WHITE); // Or any other color

  // Set the text size (optional)
  tft.setTextSize(1); // 1, 2, 3 are common sizes

  // Print the message
  tft.println("Location Activated\n");
  tft.println();
  tft.println("AI instructions sent to device\n");
  tft.println();


  delay(5000); // Display for 2 seconds
  tft.fillScreen(ST7735_BLACK);
}

void Pan2_Text() {
  // put your main code here, to run repeatedly:
  tft.setCursor(0, 0); // Top left corner

  // Set the text color
  tft.setTextColor(ST7735_WHITE); // Or any other color

  // Set the text size (optional)
  tft.setTextSize(1); // 1, 2, 3 are common sizes

  // Print the message
  tft.println("Location Activated\n");
  tft.println();
  tft.println("AI instructions sent to device\n");
  tft.println();
  tft.println("Messaged emergency \ncontacts\n");

  delay(5000); // Display for 2 seconds
  tft.fillScreen(ST7735_BLACK);
}

void Pan3_Text() {
  // put your main code here, to run repeatedly:
  tft.setCursor(0, 0); // Top left corner

  // Set the text color
  tft.setTextColor(ST7735_WHITE); // Or any other color

  // Set the text size (optional)
  tft.setTextSize(1); // 1, 2, 3 are common sizes

  // Print the message
  tft.println("Location Activated\n");
  tft.println();
  tft.println("AI instructions sent to device\n");
  tft.println();
  tft.println("Messaged emergency \ncontacts\n");
  tft.println();
  tft.println("First responders \ncontacted\n");
  tft.println();
  tft.println("Press again to \ndeactivate\n");  

  delay(5000); // Display for 2 seconds
  tft.fillScreen(ST7735_BLACK);
}


void cancelled_Text() {
  tft.setCursor(0, 0); // Top left corner

  // Set the text color
  tft.setTextColor(ST7735_WHITE); // Or any other color

  // Set the text size (optional)
  tft.setTextSize(1); // 1, 2, 3 are common sizes

  tft.println("Cancelled!");
  delay(5000); // Display for 2 seconds
  tft.fillScreen(ST7735_BLACK);
}
