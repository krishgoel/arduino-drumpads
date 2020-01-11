#include <SPI.h>
#include "SD.h"
#define SD_ChipSelectPin 4
#include "TMRpcm.h"
#include "SPI.h"

TMRpcm tmrpcm;

void setup(){}

void loop(){
  tmrpcm.speakerPin = 9;
  Serial.begin(9600);
  if (!SD.begin(SD_ChipSelectPin)) {
    Serial.println("SD fail");
    return;
  }
  tmrpcm.setVolume(5);
  tmrpcm.play("test1.wav");
  /*(delay(10000);
  tmrpcm.play("test.wav");*/ //for testing
}
//CS-4
//SCL-13
//MOSI-11
//MISO-12
//VCC-5v
//GND-GND
//Speaker +ve-9
//Speaker GND-GND
