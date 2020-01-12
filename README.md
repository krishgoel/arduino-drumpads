# Arduino drum pads
> Complete

> Please note that I made this project in 9th grade and things have changed a lot since, if there's something missing or not explained, please feel free to hit me up

I designed e-drums eliminating the MIDI and middleware requirements that require close to none setup and make it more cost-effective using the Arduino Uno.

## The components
- Arduino Uno
- Arduino Uno Protoboard with a small breadboard (not necessary, it just makes the Arduino reusable)
- Arduino SD Card module
- 3.5 mm headphone jack input port (AUX input port)
- Piezo sensors
- Circuitry 

## Libraries used
- SD.h for communication with the SD Card module
- TMRpcm.h for asynchronous playback of PCM/WAV files direct from SD card
- SPI.h for outputting the signal to the AUX-out

## Codes provided
- [Final.ino](https://github.com/KrishSkywalker/ArduinoDrumPads/blob/master/Codes%20and%20components/Arduino_drums_final/Arduino_drums_final.ino) This is the final code for the complete setup
- [Knock.ino](https://github.com/KrishSkywalker/ArduinoDrumPads/blob/master/Codes%20and%20components/knock/knock.ino) This is the code for testing the piezo sensors, the connected LED lights up when the sensor detects a touch (change in the piezo-electric field)
- [playMusic.ino](https://github.com/KrishSkywalker/ArduinoDrumPads/blob/master/Codes%20and%20components/playMusic/playMusic.ino) self-explanatory, code for testing the music playback 
- [auxPortTesting.ino](https://github.com/KrishSkywalker/ArduinoDrumPads/blob/master/Codes%20and%20components/aux_port_testing/aux_port_testing.ino) again, self-explanatory, code to test the working of the AUX output port
```Made with ❤️ and a few lines of code by KrishSkywalker```
