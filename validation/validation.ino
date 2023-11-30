#include <Wire.h> //The Wire library is what Arduino uses to communicate with I2C devices.
#include <LiquidCrystal_I2C.h> // include the library code

#define I2C_ADDR 0x27 // Adjust the I2C address based on your LCD display
#define buttonPin 2    // Pin connected to the external button

LiquidCrystal_I2C lcd(I2C_ADDR, 16, 2);
// set the LCD address to I2C_ADDR for a 16 chars and 2 line display
// l'affciheur mte3na fih 16 caracteres 2 lignes


void setup() // fonction d'initialisation de la carte 
{
  Serial.begin(9600); // Initialiser la communication série
  Serial.println("Initializing LCD...");
  lcd.init();  // initialisation de l'afficheur 
  lcd.backlight(); // Envoi du message 
  // backlight jumper heya el partie el ka7la fel afficheur " le cavalier " 
  
  Serial.println("LCD initialized.");

  pinMode(buttonPin, INPUT_PULLUP); // Set up the button pin with an internal pull-up resistor
  // INPUT_PULLUP l'action tsir ki thez yedek mel boutton 
}

void loop() 
//loop est la  boucle qui s'exécute continuellement une fois que le programme a été lancé.
{
   //Check if the reset button has been pressed
  String b = "Marque: ";

  if (Serial.available() > 0) // Vérifie si des données sont disponibles sur le port série
  {
    String data = Serial.readStringUntil('\n'); 
    //na9raw el chaine de caractere mel port serie 
    //jusqu'à rencontrer un saut de ligne ('\n')  wbaad nestockiw el chaine fel variable data 

   String result = b + data; // Concatenate the two strings

    lcd.clear(); // Efface le contenu actuel de l'écran LCD.

    result = result.substring(0, min(result.length(), 16));
    // lezm el resultat ma ykouch fou9 16 caracteres bch ma yfoutch lafficheur lcd 

    // Convert the string to a character array =(tableau de caractères) 
    char charArray[result.length() + 1];
    result.toCharArray(charArray, sizeof(charArray));
    //Convertit la chaîne de caractères result en un tableau de caractères (charArray).

    // Print each character to the LCD
    for (int i = 0; i < result.length(); i++)
   {
      lcd.setCursor(i, 0);
      lcd.print(charArray[i]);
    }
 // on va afficher chaque caractère du tableau charArray sur l'écran LCD à la position spécifiée i 

    Serial.println("Data received: " + data);
    //Affiche la réception de données sur le port série avec le contenu de la variable data
  }

  // Check if the external button is pressed
  if (digitalRead(buttonPin) == LOW)
  {
    handleExternalButton();// appel d'une toute fonction 
    delay(500); // Add a small delay to debounce the button
  }
}
void handleExternalButton() 
{
  // Wait for a longer duration to receive the complete data
  delay(500);

  // Read data from Serial (sent by Qt)
  String data = Serial.readStringUntil('\n');

  // Print the received data for debugging
  Serial.println("Received data from Qt: " + data);
   //na9raw el chaine de caractere mel port serie 
   //jusqu'à rencontrer un saut de ligne ('\n') w baad nestockiw el chaine fel variable data 


  // Display the received data on the LCD
  sendDataToLCD(data);
 // Appelle d'une fonction sendDataToLCD() pour afficher les données reçues sur l'écran LCD.
}


void sendDataToLCD(String data) {
  String b = "Marque: ";

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
