// Global.h

#ifndef _GLOBAL_h
#define _GLOBAL_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "Arduino.h"
#else
	#include "WProgram.h"
#endif
#define PROJECT "TeenAstro Focuser"
#define Version "1.0.1"

//uncomment the version you are using
//#define VERSION220
//#define VERSION230
#define VERSION240

#ifdef VERSION240
#define BOARDINFO "2.4.0"
//TMC260=1  TMC2130=2 or TMC5160=3
#define USEDTMC 2
// Temperature Sensor
// RTC
#define kCePin 4  // Chip Enable
#define kIoPin 3 // Input/Output
#define kSclkPin 2  // Serial Clock
#define TMC USEDTMC
#define EnablePin 20
#define _StepPin 21
#define _DirPin 22
#define CSPin 10
#define FocuserRX 0
#define FocuserTX 1
#define LEDPin 23 
#endif

#ifdef VERSION230
#define BOARDINFO "2.3.0"
// TMC260=1, TMC2130=2 or TMC5160=3
#define TMC 2
// RTC
#define kCePin 4  // Chip Enable
#define kIoPin 3 // Input/Output
#define kSclkPin 2  // Serial Clock
// TMC2130
#define EnablePin 5
#define _StepPin 7
#define _DirPin 6
#define CSPin 10
#define FocuserRX 0
#define FocuserTX 1
#define LEDPin 23 
#endif
// VERSION23

#ifdef VERSION220

#define BOARDINFO "2.2.0"
//TMC260=1  TMC2130=2 or TMC5160=3
#define TMC 2
// RTC
#define kCePin 4  // Chip Enable
#define kIoPin 3 // Input/Output
#define kSclkPin 2  // Serial Clock
#define EnablePin 7
#define _StepPin 5
#define _DirPin 6
#define CSPin 10
#define FocuserRX 26
#define FocuserTX 31
#define LEDPin 33 
#endif

// Temperature Sensor
#define TempPin 9

#endif

