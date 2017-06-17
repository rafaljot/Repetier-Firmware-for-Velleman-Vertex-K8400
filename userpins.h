#define KNOWN_BOARD 1

//////////////////FIX THIS//////////////
#ifndef __AVR_ATmega1280__
#ifndef __AVR_ATmega2560__
#error Oops!  Make sure you have 'Arduino Mega' selected from the 'Tools -> Boards' menu.
#endif
#endif

// X/Y/Z Steppers and MIN endstops verified

#define ORIG_X_STEP_PIN         54
#define ORIG_X_DIR_PIN          55
#define ORIG_X_ENABLE_PIN       38
#define ORIG_X_MIN_PIN          -1
#define ORIG_X_MAX_PIN          3     //K8400

#define ORIG_Y_STEP_PIN         60
#define ORIG_Y_DIR_PIN          61
#define ORIG_Y_ENABLE_PIN       56
#define ORIG_Y_MIN_PIN          -1
#define ORIG_Y_MAX_PIN          14    //K8400

#define ORIG_Z_STEP_PIN         46
#define ORIG_Z_DIR_PIN          48
#define ORIG_Z_ENABLE_PIN       63
#define ORIG_Z_MIN_PIN          18
#define ORIG_Z_MAX_PIN          -1

#define ORIG_E0_STEP_PIN        26 
#define ORIG_E0_DIR_PIN         28 
#define ORIG_E0_ENABLE_PIN      24 

#define ORIG_E1_STEP_PIN        32    //K8400
#define ORIG_E1_DIR_PIN         34    //K8400
#define ORIG_E1_ENABLE_PIN      30    //K8400

#define ORIG_FAN2_PIN           2

#define SDPOWER                 -1
#define SDSS                    25 
#define ORIG_SDCARDDETECT       -1

#undef LED_PIN
#define LED_PIN                 -1 //13 
#define ORIG_FAN_PIN             8 
#define ORIG_PS_ON_PIN          -1

// schematic: HEATER1 (Extruder)
#define HEATER_0_PIN            10 
// schematic: HEATER2 (Heated Bed)
#define HEATER_1_PIN             9 
#define HEATER_2_PIN            11    //K8400

// ANALOG NUMBERING
// schematic: THERM1 (Extruder)
#define TEMP_0_PIN              13  // Analog Input
// schematic: THERM2 (Heated Bed)
#define TEMP_1_PIN              14  // Analog Input
#define TEMP_2_PIN              15  // Analog Input

#define E0_PINS ORIG_E0_STEP_PIN,ORIG_E0_DIR_PIN,ORIG_E0_ENABLE_PIN,
#define E1_PINS ORIG_E1_STEP_PIN,ORIG_E1_DIR_PIN,ORIG_E1_ENABLE_PIN,

// following pins (LCD, ENCODER, SDCARD) reverse engineered from schematic diagram:

#ifdef ULTRA_LCD
#ifdef NEWPANEL

#endif
#endif //ULTRA_LCD

#define SCK_PIN                52
#define MISO_PIN               50
#define MOSI_PIN               51
#define MAX6675_SS             53

#define UI_DISPLAY_RS_PIN      27
#define UI_DISPLAY_RW_PIN      -1
#define UI_DISPLAY_ENABLE_PIN  29
#define UI_DISPLAY_D0_PIN      -1 //23 
#define UI_DISPLAY_D1_PIN      -1 //25
#define UI_DISPLAY_D2_PIN      -1 //27
#define UI_DISPLAY_D3_PIN      -1 //29
#define UI_DISPLAY_D4_PIN      37
#define UI_DISPLAY_D5_PIN      35
#define UI_DISPLAY_D6_PIN      33
#define UI_DISPLAY_D7_PIN      31


#define UI_ENCODER_A           16
#define UI_ENCODER_B           17
#define UI_ENCODER_CLICK       23
#define UI_RESET_PIN           -1 //41
