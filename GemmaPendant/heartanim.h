// Animation data for Trinket/Gemma + LED matrix backpack jewelry.
// Edit this file to change the animation; it's unlikely you'll need
// to edit the source code.

#define REPS 3 // Number of times to repeat the animation loop (1-255)

const uint8_t PROGMEM heartanim[] = {

  // Animation bitmaps.  Each frame of animation MUST contain
  // 8 lines of graphics data (there is no error checking for
  // length).  Each line should be prefixed with the letter 'B',
  // followed by exactly 8 binary digits (0 or 1), no more,
  // no less (again, no error checking).  '0' represents an
  // 'off' pixel, '1' an 'on' pixel.  End line with a comma.

  //SLIDE IN ANIMATION
  B00000000, // Frame 1
  B00000000,
  B10000000,
  B10000000,
  B10000000,
  B00000000,
  B00000000,
  B00000000,
  16, // 0.25 second delay

  B00000000, // Frame 2
  B10000000,
  B11000000,
  B11000000,
  B11000000,
  B10000000,
  B00000000,
  B00000000,
  16, // 0.25 second delay

  B00000000, // Frame 3
  B11000000,
  B11100000,
  B11100000,
  B11100000,
  B11000000,
  B10000000,
  B00000000,
  16, // 0.25 second delay

  B00000000, // Frame 4
  B01100000,
  B11110000,
  B11110000,
  B11110000,
  B11100000,
  B11000000,
  B10000000,
  16, // 0.25 second delay

  B00000000, // Frame 5
  B00110000,
  B11111000,
  B11111000,
  B11111000,
  B11110000,
  B11100000,
  B11000000,
  16, // 0.25 second delay

  B00000000, // Frame 6
  B10011000,
  B11111100,
  B11111100,
  B11111100,
  B11111000,
  B11110000,
  B01100000,
  16, // 0.25 second delay
  
  B00000000, // Frame 7
  B11001100,
  B11111110,
  B11111110,
  B11111110,
  B11111100,
  B01111000,
  B00110000,
  16, // 0.25 second delay

  B00000000, // Frame 8
  B01100110,
  B11111111,
  B11111111,
  B11111111,
  B01111110,
  B00111100,
  B00011000,
  16, // 0.25 second delay

  B01100110, // Frame 9
  B11111111,
  B11111111,
  B11111111,
  B01111110,
  B00111100,
  B00011000,
  B00000000,
  16, // 0.25 second delay

  B00000000, // Frame 10
  B01100110,
  B11111111,
  B11111111,
  B11111111,
  B01111110,
  B00111100,
  B00011000,
  16, // 0.25 second delay

  B01100110, // Frame 11
  B11111111,
  B11111111,
  B11111111,
  B01111110,
  B00111100,
  B00011000,
  B00000000,
  16, // 0.25 second delay

  B00000000, // Frame 12
  B01100110,
  B11111111,
  B11111111,
  B11111111,
  B01111110,
  B00111100,
  B00011000,
  16, // 0.25 second delay

  B01100110, // Frame 13
  B11111111,
  B11111111,
  B11111111,
  B01111110,
  B00111100,
  B00011000,
  B00000000,
  16, // 0.25 second delay

  B00000000, // Frame 14
  B01100110,
  B11111111,
  B11111111,
  B11111111,
  B01111110,
  B00111100,
  B00011000,
  16, // 0.25 second delay

  B00000000, // Frame 15
  B01100110,
  B11111101,
  B11111101,
  B11111101,
  B01111110,
  B00111100,
  B00011000,
  16, // 0.25 second delay

  B00000000, // Frame 16
  B01100110,
  B11111001,
  B11111001,
  B11111001,
  B01111010,
  B00111100,
  B00011000,
  16, // 0.25 second delay

  B00000000, // Frame 17
  B01100110,
  B11111001,
  B11110001,
  B11110001,
  B01110010,
  B00110100,
  B00011000,
  16, // 0.25 second delay

  B00000000, // Frame 18
  B01100110,
  B11111001,
  B11100001,
  B11100001,
  B01100010,
  B00100100,
  B00011000,
  16, // 0.25 second delay

  B00000000, // Frame 19
  B01100110,
  B11011001,
  B11000001,
  B11000001,
  B01000010,
  B00100100,
  B00011000,
  16, // 0.25 second delay
  
  B00000000, // Frame 20
  B01100110,
  B10011001,
  B10000001,
  B10000001,
  B01000010,
  B00100100,
  B00011000,
  16, // 0.25 second delay

  B00000000, // Frame 21
  B01100110,
  B11011001,
  B11000001,
  B11000001,
  B01000010,
  B00100100,
  B00011000,
  16, // 0.25 second delay

  B00000000, // Frame 22
  B01100110,
  B11111001,
  B11100001,
  B11100001,
  B01100010,
  B00100100,
  B00011000,
  16, // 0.25 second delay

  B00000000, // Frame 23
  B01100110,
  B11111001,
  B11110001,
  B11110001,
  B01110010,
  B00110100,
  B00011000,
  16, // 0.25 second delay

  B00000000, // Frame 24
  B01100110,
  B11111001,
  B11111001,
  B11111001,
  B01111010,
  B00111100,
  B00011000,
  16, // 0.25 second delay

  B00000000, // Frame 25
  B01100110,
  B11111101,
  B11111101,
  B11111101,
  B01111110,
  B00111100,
  B00011000,
  16, // 0.25 second delay

  B00000000, // Frame 26 & 27
  B01100110,
  B11111111,
  B11111111,
  B11111111,
  B01111110,
  B00111100,
  B00011000,
  32, // 0.50 second delay

  B00000000, // Frame 28
  B00000000,
  B01100110,
  B01111110,
  B01111110,
  B00111100,
  B00011000,
  B00000000,
  16, // 0.25 second delay

  B00000000, // Frame 29
  B00000000,
  B00000000,
  B00100100,
  B00111100,
  B00011000,
  B00000000,
  B00000000,
  16, // 0.25 second delay

  B00000000, // Frame 30
  B00000000,
  B01100110,
  B01111110,
  B01111110,
  B00111100,
  B00011000,
  B00000000,
  16, // 0.25 second delay

  B00000000, // Frame 31 & 32
  B01100110,
  B11111111,
  B11111111,
  B11111111,
  B01111110,
  B00111100,
  B00011000,
  32, // 0.50 second delay

  B00000000, // Frame 33
  B00000000,
  B01100110,
  B01111110,
  B01111110,
  B00111100,
  B00011000,
  B00000000,
  16, // 0.25 second delay

  B00000000, // Frame 34
  B00000000,
  B00000000,
  B00100100,
  B00111100,
  B00011000,
  B00000000,
  B00000000,
  16, // 0.25 second delay

  B00000000, // Frame 35
  B00000000,
  B01100110,
  B01111110,
  B01111110,
  B00111100,
  B00011000,
  B00000000,
  16, // 0.25 second delay

  B00000000, // Frame 36 & 37
  B01100110,
  B11111111,
  B11111111,
  B11111111,
  B01111110,
  B00111100,
  B00011000,
  32, // 0.50 second delay

  B00000000, // Frame 38
  B00110011,
  B01111111,
  B01111111,
  B01111111,
  B00111111,
  B00011110,
  B00001100,
  16, // 0.25 second delay

  B00000000, // Frame 39
  B00011001,
  B00111111,
  B00111111,
  B00111111,
  B00011111,
  B00001111,
  B00000110,
  16, // 0.25 second delay

  B00000000, // Frame 40
  B00001100,
  B00011111,
  B00011111,
  B00011111,
  B00001111,
  B00000111,
  B00000011,
  16, // 0.25 second delay

  B00000000, // Frame 41
  B00000110,
  B00001111,
  B00001111,
  B00001111,
  B00000111,
  B00000011,
  B00000001,
  16, // 0.25 second delay

  B00000000, // Frame 42
  B00000011,
  B00000111,
  B00000111,
  B00000111,
  B00000011,
  B00000001,
  B00000000,
  16, // 0.25 second delay

  B00000000, // Frame 43
  B00000001,
  B00000011,
  B00000011,
  B00000011,
  B00000001,
  B00000000,
  B00000000,
  16, // 0.25 second delay

  B00000000, // Frame 44
  B00000000,
  B00000001,
  B00000001,
  B00000001,
  B00000000,
  B00000000,
  B00000000,
  16, // 0.25 second delay

  B00000000, // Frame 45
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  16, // 0.25 second delay
  
};
