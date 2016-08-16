// Playtune_samp.h

#define TEENSY_3x        // which board are we compiling for?

#define MAX_CHANS 16     // maximum number of simultaneous notes
#define DBUG 0           // generate debugging code?
#define DO_PERCUSSION 1  // should we do percussion instruments at all?

// Define the Digital-to-Analog output pin
#ifdef TEENSY_LC
#define DAC_PIN A12
#endif
#ifdef TEENXY_3x
#define DAC_PIN A14
#endif

// If you want to use an oscillocope to measure how long our interrupt routine
// takes, you can configure a pin that outputs a high when it is running.

#define SCOPE_TEST false // make scope measurements?

#ifdef TEENSY_LC
#define SCOPE_PIN 4     // board pin
#endif
#ifdef TEENSY_3x
#define SCOPE_PIN 4
#endif
#ifdef ARDUINO_NANO
#define SCOPE_PIN 4     // board pin
#define SCOPE_REG D     // data register
#define SCOPE_BIT 4     // bit number in that register
#endif
#ifdef ARDUINO_MEGA
#define SCOPE_PIN 4     // board pin
#define SCOPE_REG G     // data register
#define SCOPE_BIT 5     // bit number in that register
#endif
#ifdef ARDUINO_MICRO
#define SCOPE_PIN 12    // board pin
#define SCOPE_REG D     // data register
#define SCOPE_BIT 6     // bit number in that register
#endif
