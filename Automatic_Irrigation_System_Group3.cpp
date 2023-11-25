// Copy and paste the program in Arduino IDE to compile this
// Download and include the Libraries

#include <DHT.h>
#include <LiquidCrystal_I2C.h>
#include <Adafruit_Sensor.h>

// Defining the modules
#define DHTPIN A0
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

LiquidCrystal_I2C lcd (0x27, 16, 2);

int Pump = 8;

void setup() {

// To start up the modules

  lcd.init();
  lcd.backlight();

  dht.begin();

  pinMode(Pump, OUTPUT);
  digitalWrite(Pump, LOW);
}

void loop() {
//Soil Moisture Sensor data
  int soilMoisturePin = analogRead(A2);
  int soilMoistureLvl = ( 100 - ( (soilMoisturePin / 1023.00) * 100 ) ); //convert analog value to percentage

//Temperature and Humidity Sensor data
  float h = dht.readHumidity();
  float t = dht.readTemperature();

//Displaying on the LCD
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Soil Moisture: ");
  lcd.setCursor(0, 1);
  lcd.print(soilMoistureLvl);
  lcd.setCursor(3, 1);
  lcd.print("%");

  delay(2000);

  lcd.clear(); // To clear the LCD
  lcd.setCursor(0, 0); // To set the position of the info
  lcd.print("Humidity: "); // To print the info you want
  lcd.print(h);
  lcd.setCursor(15, 0);
  lcd.print("%");

  lcd.setCursor(0, 1);
  lcd.print("Temp: ");
  lcd.print(t);
  lcd.setCursor(12, 1);
  lcd.print("C");
  
  // Check soil moisture level and control the relay
    if (soilMoistureLvl > 50) {
      // Soil is dry, water pump will turn on
      digitalWrite (Pump, HIGH);
    } else {
      // Soil is wet, water pump will stay off
      digitalWrite (Pump, LOW);
    }

  delay(2000);

}
