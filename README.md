# Arduino drum pads
> Complete

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
- [Final.ino](https://github.com/KrishSkywalker/ArduinoDrumPads/blob/master/Codes%20and%20components/Arduino_drums_final/Arduino_drums_final.ino)
- [Knock.ino](https://github.com/KrishSkywalker/ArduinoDrumPads/blob/master/Codes%20and%20components/knock/knock.ino)
- [playMusic.ino](https://github.com/KrishSkywalker/ArduinoDrumPads/blob/master/Codes%20and%20components/playMusic/playMusic.ino)
- [auxPortTesting.ino](https://github.com/KrishSkywalker/ArduinoDrumPads/blob/master/Codes%20and%20components/aux_port_testing/aux_port_testing.ino)
