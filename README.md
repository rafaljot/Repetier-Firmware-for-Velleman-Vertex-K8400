# Repetier-Firmware-for-Velleman-Vertex-K8400

Repository contains configuration files for Repetier firmware 0.92.9
https://www.repetier.com/firmware/v092/index.php

1. Import configuration.h file to configuratioin wizzard
2. Correct your settings (I have this upgrade https://www.thingiverse.com/thing:2326564 and 1/16 in Z,  so I have different settings):
  * Mechanics/X axis stepper motor/Resolution = 134.74
  * Mechanics/Y axis stepper motor/Resolution = 134.74
  * Mechanics/Z axis stepper motor/Resolution = 4266.66
  * Tools/Extruder 0/Resolution = 150.01
  * Tools/Extruder 1/Resolution = 150.01
3. Download full project
4. overwrite userpins.h and uiconfig.h files
5. Open project in Arduino
6. Flash your printer
