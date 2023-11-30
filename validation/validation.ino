#include <Wire.h>
#include <LiquidCrystal_I2C.h> // include the library code

#define I2C_ADDR 0x27 // Adjust the I2C address based on your LCD display
#define buttonPin 2    // Pin connected to the external button

LiquidCrystal_I2C lcd(I2C_ADDR, 16, 2);
// set the LCD address to I2C_ADDR for a 16 chars and 2 line display
// 16 caracteres 2 lignes


void setup() {
  Serial.begin(9600); // Initialiser la communication série
  Serial.println("Initializing LCD...");
  lcd.init();  // Initialize the LCD
  lcd.backlight();
  Serial.println("LCD initialized.");

  pinMode(buttonPin, INPUT_PULLUP); // Set up the button pin with an internal pull-up resistor
}

void loop() {
  String b = "marque: ";

  if (Serial.available() > 0) {
    String data = Serial.readStringUntil('\n');

    // Concatenate the two strings
    String result = b + data;

    lcd.clear();

    // Ensure that the result fits within the LCD dimensions
    result = result.substring(0, min(result.length(), 16));

    // Convert the string to a character array
    char charArray[result.length() + 1];
    result.toCharArray(charArray, sizeof(charArray));

    // Print each character to the LCD
    for (int i = 0; i < result.length(); i++) {
      lcd.setCursor(i, 0);
      lcd.print(charArray[i]);
    }

    Serial.println("Data received: " + data);
  }

  // Check if the external button is pressed
  if (digitalRead(buttonPin) == LOW) {
    handleExternalButton();
    delay(500); // Add a small delay to debounce the button
  }
}
void handleExternalButton() {
  // Wait for a longer duration to receive the complete data
  delay(500);

  // Read data from Serial (sent by Qt)
  String data = Serial.readStringUntil('\n');

  // Print the received data for debugging
  Serial.println("Received data from Qt: " + data);

  // Display the received data on the LCD
  sendDataToLCD(data);
}


void sendDataToLCD(String data) {
  String b = "marque: ";

  // Concatenate the two strings
  String result = b + data;

  lcd.clear();

  // Ensure that the result fits within the LCD dimensions
  result = result.substring(0, min(result.length(), 16));

  // Convert the string to a character array
  char charArray[result.length() + 1];
  result.toCharArray(charArray, sizeof(charArray));

  // Print each character to the LCD
  for (int i = 0; i < result.length(); i++) {
    lcd.setCursor(i, 0);
    lcd.print(charArray[i]);
  }

  Serial.println("Data sent to LCD: " + data);
}
