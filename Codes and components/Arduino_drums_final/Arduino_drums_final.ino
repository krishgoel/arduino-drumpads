int knockSensor1 = 0; 
int knockSensor2 = 1; 
int knockSensor3 = 2; 
int knockSensor4 = 3; 
int knockSensor5 = 4; 
int knockSensor6 = 5; 

byte val1;
byte val2;
byte val3;
byte val4;
byte val5;
byte val6;

int hitPower = 250;
int lowVolume = 250;
int highVolume = 350;

#include <SPI.h>
#include "SD.h"
#include "TMRpcm.h"
#include "SPI.h"
#define SD_ChipSelectPin 4

TMRpcm tmrpcm;

void setup() {
 Serial.begin(9600);
 if (!SD.begin(SD_ChipSelectPin)) {
 Serial.println("SD fail");
 return;
 }
}

void loop() {
 tmrpcm.speakerPin = 9;
 
 tmrpcm.setVolume(5);

 val1 = analogRead(knockSensor1);
 val2 = analogRead(knockSensor2);
 val3 = analogRead(knockSensor3);
 val4 = analogRead(knockSensor4);
 val5 = analogRead(knockSensor5);
 val6 = analogRead(knockSensor6);
 
 if (val1 >= hitPower) { 
  if (val1 >= highVolume) {
    tmrpcm.setVolume(5);
    tmrpcm.play("1.wav");
  }
  else if (val1 >= lowVolume) {
    tmrpcm.setVolume(4);
    tmrpcm.play("1.wav");
  }
 }
 else if (val2 >= hitPower) { 
  if (val1 >= highVolume) {
    tmrpcm.setVolume(5);
    tmrpcm.play("2.wav");
  }
  else if (val1 >= lowVolume) {
    tmrpcm.setVolume(4);
    tmrpcm.play("2.wav");
  }
 }
 else if (val3 >= hitPower) { 
  if (val1 >= highVolume) {
    tmrpcm.setVolume(5);
    tmrpcm.play("3.wav");
  }
  else if (val1 >= lowVolume) {
    tmrpcm.setVolume(4);
    tmrpcm.play("3.wav");
  }
 }
 else if (val4 >= hitPower) { 
  if (val1 >= highVolume) {
    tmrpcm.setVolume(5);
    tmrpcm.play("4.wav");
  }
  else if (val1 >= lowVolume) {
    tmrpcm.setVolume(4);
    tmrpcm.play("4.wav");
  }
 }
 else if (val5 >= hitPower) { 
  if (val1 >= highVolume) {
    tmrpcm.setVolume(5);
    tmrpcm.play("5.wav");
  }
  else if (val1 >= lowVolume) {
    tmrpcm.setVolume(4);
    tmrpcm.play("5.wav");
  }
 }
 else if (val6 >= hitPower) { 
  if (val1 >= highVolume) {
    tmrpcm.setVolume(5);
    tmrpcm.play("6.wav");
  }
  else if (val1 >= lowVolume) {
    tmrpcm.setVolume(4);
    tmrpcm.play("6.wav");
  }
 }
}
//CS-4
//SCK-13
//MOSI-11
//MISO-12
//VCC-5v
//GND-GND
//Speaker +ve-9
//Speaker GND-GND
//Piezo +ve (Silver inner circle) -> A0
//Piezo -ve (Golden outer circle) -> GND
//8 bit
//16000 Hz
//mono
//8 bit unsigned
