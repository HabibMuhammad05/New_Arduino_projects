//========================================AT24C256 SETUP=======================================//
#define EEPROM_ADDR 0x50 // I2C address of AT24C256
#define ARRAY_SIZE_X 6   // Assuming your array size is 6x24
#define ARRAY_SIZE_Y 24

//========================================PCF8574 SETUP=======================================//
const byte pcfPushButtonPins[] = {0, 1, 2, 3, 4, 5};   // Pins for the push buttons on PCF8574
const byte pcfSwitchPins[] = {6, 7};                // Pins for the toggle switches on PCF8574

unsigned int buttonMillis;
unsigned int switchMillis;
bool previousButtonStates[6] = {false};
bool previousSwitchStates[2] = {false};

//========================================74HC595 SETUP=======================================//
#define DATA_PIN 10
#define LATCH_PIN 11
#define CLOCK_PIN 12

//==============================DISPLAY VARS===========================//
 const byte putar[7] = {B01000000, B00100000, B00010000, B00000010, B00000100, B00001000, B00000000}; 
 const byte blank = B00000000;
 const byte r = B10010111;
 const byte p = B00000111;
 const byte l = B01001100;
 const byte t = B00110011;
 
 const byte commonAnodeSegments[] = {
    B10000001, // 0
    B11101101, // 1
    B01000011, // 2
    B01001001, // 3
    B00101101, // 4
    B00011001, // 5
    B00010001, // 6
    B11001101, // 7
    B00000001, // 8
    B00001001  // 9
  };
 const byte commonCathodeSegments[] = {
    B01111110, // 0
    B00010010, // 1
    B10111100, // 2
    B10110110, // 3
    B11010010, // 4
    B11100110, // 5
    B11101110, // 6
    B00110010, // 7
    B11111110, // 8
    B11110110  // 9
};


//========================================RECORDING SETUP=======================================//
uint8_t led[] = {7, 6, 5, 4, 3, 2};
const uint8_t but[] = {8, 9, A0, A1, A2, A3};

bool buttonState[6] = {LOW};

bool recordMod = 0;
bool playMod = 0;

uint8_t num = 0;
uint16_t maxNum = 6;

uint8_t maxSpd = 19;
uint8_t spd = 10;

uint16_t relPlayPause[6][24] = {0};
uint16_t relRepPlayPause[6][24] = {0};

bool isRecording = false;
bool isSaved = false;
bool isPlaying;
