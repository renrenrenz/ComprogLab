#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <Adafruit_Sensor.h>
#include <DHT.h>


#define DHTPIN 2 
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

LiquidCrystal_I2C lcd(0x27, 16, 2); 


int soilMoisturePin = A0;
int soilMoistureThreshold = 700; 
int relayPin = 8;

void setup() {
  
  dht.begin();
  lcd.init();
  lcd.backlight();

  
  pinMode(relayPin, OUTPUT);
  digitalWrite(relayPin, LOW); 
}

void loop() {
  
  int soilMoisture = analogRead(soilMoisturePin);

  
  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();

  
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Soil Moisture:");
  lcd.setCursor(0, 1);
  lcd.print(soilMoisture);

  delay(2000); 

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Temp: ");
  lcd.print(temperature);
  lcd.print("C");
  lcd.setCursor(0, 1);
  lcd.print("Humidity: ");
  lcd.print(humidity);
  lcd.print("%");

  
  if (soilMoisture < soilMoistureThreshold) {
    
    digitalWrite(relayPin, HIGH);
  } else {
    
    digitalWrite(relayPin, LOW);
  }

  delay(2000); 
}
