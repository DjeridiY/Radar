# Radar

# Compilation

Via Makefile

```bash
make
``` 
make sure to have the CSFML lib !

# Description

2D visualization panel showing a simulatation of air traffic (AT).

# Usage
## Lauch the program
```bash
./my_radar script
```

## Basic rules:
```bash
• aircrafts fly from given places to other ones.
• aircrafts appear on the simulation panel when they take off.
• aircrafts disappear from the simulation panel when they land on.
• aircrafts move in a straight line at given constant speeds.
• aircrafts colliding with another one is destroyed and disappear from the simulation panel.
• control areas allow aircrafts to collide with each other without being destroyed and they can continue
on their way.
• control towers don’t move and have control areas on the map.
• control towers appear on the simulation panel at launch.
```
# Script

The script file contains all the information about the simulation and the entities.

## Aircrafts are described by:
```bash
• The letter ‘A’,
• Two integers corresponding to the departure x- and y-coordinates,
• Two integers corresponding to the arrival x- and y-coordinates,
• One integer corresponding to the aircraft’s speed (in pixels per second),
• O`ne integer corresponding to the delay (in seconds) before the aircraft takes off.
```
## Control towers are described by:
```bash
• The letter ‘T’,
• Two integers corresponding to the control tower x- and y-coordinates,
• One integer corresponding to the radius of the tower’s control area (corresponding to the percentage
of the greatest side of the window in pixel).
Entities are separated by a ‘\n’.
```
## Exemple of a script:
```bash
∼/B-MUL-100> cat scripts/example.rdr
A 815 321 1484 166 5 0
A 1589 836 811 936 2 0
A 202 894 103 34 3 0
T 93 47 19
T 49 56 25
```

# Help Command
```bash
./radar -h
    Air traffic simulation panel
    USAGE:
     ./my_radar path_to_script
    USER INTERACTIONS:
     'L' key enable/disable hitboxes and areas.
     'S' key enable/disable sprites.
