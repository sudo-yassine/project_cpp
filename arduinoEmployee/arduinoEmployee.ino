#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 4, 5);


void initializeLCD()
{
  lcd.init();      
  lcd.backlight(); 
  displayCardWaiting();
}

void displayCardWaiting()
{
  lcd.clear();
  lcd.setCursor(1, 0); 
  //tft.fillScreen(TFT_BLACK);
  //tft.setTextColor(TFT_WHITE);
  //tft.setCursor(10,10);
  lcd.print("***WRITE ID***");
}

void displayResultMessage(bool employeeExists)
{
  lcd.clear();           
  lcd.setCursor(1, 0);      

  if (employeeExists)
  {
    Serial.println("1");
    lcd.print("Not Exist "); 
  }
  else
  {
    lcd.print("Employee Exists");
     Serial.println("0");
  }
}

void setup()
{
  initializeLCD();
  Serial.begin(9600); 
}

void loop()
{
  
  char read;

  /* Qt Input */
  if (Serial.available())
  {
    read = Serial.read();

    bool employeeExists = (read == '1'); 

    displayResultMessage(employeeExists); 
    delay(2000);
    //displayCardWaiting(); 
    //delay(1000);
  }
}
