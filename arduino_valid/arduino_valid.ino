#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);
// set the LCD address to 0x27 for a 16 chars and 2 line display
// 16 caracteres 2 lignes

/* Function to initialize the LCD screen */
void initializeLCD()
{
  lcd.init();       // Initialize the LCD
  lcd.backlight();  // Turn on the backlight
  displayCardWaiting();
}

/* Function to display the "Card Waiting" message on the LCD screen */
void displayCardWaiting()
{
  lcd.clear();        // Clear the LCD screen
  lcd.setCursor(1, 0); // Set the cursor position
  lcd.print("***Waiting***"); // Display "Card Waiting" message
}

/* Function to display the result message on the LCD screen */
void displayResultMessage(bool matricule)
{
  lcd.clear();             // Clear the LCD screen
  lcd.setCursor(1, 0);      // Set the cursor position

  if (matricule)
  {
    lcd.print("Voiture Exists"); // Display "matricule Exists" message
  }
  else
  {
    lcd.print("Not Exist"); // Display "matricule Does Not Exist" message
  }
}

void setup()
{
  initializeLCD(); // Initialize the LCD
  Serial.begin(9600); // Initialize serial communication
}

void loop()
{
  
  char read;

  /* Qt Input */
  if (Serial.available())
  {
    read = Serial.read(); // Read data from Qt  

    bool matricule = (read == '1'); // Check if the received value indicates matricule existence

    displayResultMessage(matricule); // Display result message based on matricule existence
    delay(2000);
    displayCardWaiting(); // Display "Card Waiting" message
    delay(1000);
  }
}
