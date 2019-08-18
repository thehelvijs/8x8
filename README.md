# Direct drive LED 8x8 matrix for Arduino


# Everything you need is here https://thehelvijs.github.io/8x8/

## Getting started

As the title says.. DIY 8x8 LED matrix without multiplexer or any other sorceries


### Hardware

1X ARDUINO UNO

64X LEDS OF YOUR CHOICE

8X 100Ω RESISTORS 

1X VERO BOARD or any other board to solder on

I would suggest to test it out on breadboard with 2x6 LEDs just to see how it works (make your own, simple code)

### Wiring

Wiring diagram can be found here https://thehelvijs.github.io/8x8/hardware.html?

### Software

I made a simple script in Arduino software which just scans through 2D arrays searching for number 1 to make the pattern on matrix:

```
{  1 ,  1 ,  1 ,  1 ,  1 ,  1 ,  1 ,  1 },
{  1 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  1 },
{  1 ,  0 ,  1 ,  0 ,  0 ,  1 ,  0 ,  1 },
{  1 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  1 },
{  1 ,  0 ,  1 ,  0 ,  0 ,  1 ,  0 ,  1 },
{  1 ,  0 ,  1 ,  1 ,  1 ,  1 ,  0 ,  1 },
{  1 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  1 },
{  1 ,  1 ,  1 ,  1 ,  1 ,  1 ,  1 ,  1 } 
```

### Pattern

To make the pattern I made a generator which can be found here https://thehelvijs.github.io/8x8/matrix-generator.html?


