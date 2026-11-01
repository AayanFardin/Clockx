//TFT,wifi,time library

#include <Adafruit_GFX.h>
#include <Adafruit_ST7789.h>
#include <SPI.h>
#include<Wifi.h>
#include<time.h>

//wifi

const char wifi_name = "";
const char wifi_passord = "";

//TFT
#define TFT_CS .
#define TFT_DC .
#define TFT_RST .

Adafruit_ST7789 tft = {TFT_CS,TFT_DC,TFT_RST};

//buzzer
#define buzzerpin .
bool buzzer=false;

void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);

//TFT initialization

tft.init(76,284);
tft.setRotation(1);
tft.fillScrean(ST77XX_BLACK);
tft.setTextColor(ST77XX_WHITE);
tft.setCursor(,);

millis();

if(millis()==3000){
  Serial.println("PRESENTING CLOCKX");
}

//wifi

wifi.begin(wifi_name,wifi_passord);
Serial.println("Connecting to wifi...");

//time

  confiTzTime("CST6", "pool.ntp.org". "time.nist.gove");
}

void loop() {
  // put your main code here, to run repeatedly:
  //wifi connection
  while(wifi.status()==0){
    delay(500);
    Serial.println(".");
  }
  Serial.println("WIFI CONNECTED...")

  // time

  struct tm timeInfo;

  if(getLocalTime(&timeInfo)){
    Serial.printf("%02d:%02d:%02d\n",
    timeinfo.tm_hour,
  timeinfo.tm_min,
timeinfo.tm_sec);

//displaying time

tft.fillRect(0,100,320,60, ST77XX_BLACK);

tft.setTextColor(ST7789_BLACK);
tft.setTextSize(4);
tft.setCursor(30,110);

tft.printf("%02d:%02d:%02d\n",
    timeinfo.tm_hour,
  timeinfo.tm_min,
timeinfo.tm_sec);

  }
  else{
    Serial.println("Waiting to get time");
  }

  delay(1000);


}


void customsound(){
  if(buzzer==true){
buzzerpin(1000,200);
delay(100);
  }
  else{
    buzzerpin(0);
  }
}
