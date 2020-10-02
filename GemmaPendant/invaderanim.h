// Animation data for Trinket/Gemma + LED matrix backpack jewelry.
// Edit this file to change the animation; it's unlikely you'll need
// to edit the source code.

#define REPS 3 // Number of times to repeat the animation loop (1-255)

const uint8_t PROGMEM invaderanim[] = {

  // Animation bitmaps.  Each frame of animation MUST contain
  // 8 lines of graphics data (there is no error checking for
  // length).  Each line should be prefixed with the letter 'B',
  // followed by exactly 8 binary digits (0 or 1), no more,
  // no less (again, no error checking).  '0' represents an
  // 'off' pixel, '1' an 'on' pixel.  End line with a comma.

  //SLIDE IN ANIMATION
  B00000000, // Frame 1
  B10000000,
  B10000000,
  B10000000,
  B10000000,
  B00000000,
  B00000000,
  B00000000,
  32, // 0.25 second delay

  B00000000, // Frame 2
  B00000000,
  B10000000,
  B11000000,
  B11000000,
  B11000000,
  B01000000,
  B00000000,
  32, // 0.25 second delay

  B10000000, // Frame 3
  B10100000,
  B11100000,
  B01100000,
  B11100000,
  B11000000,
  B10000000,
  B01000000,
  32, // 0.25 second delay

  B01000000, // Frame 4
  B01000000,
  B11100000,
  B10110000,
  B11110000,
  B11110000,
  B01010000,
  B01000000,
  32, // 0.25 second delay

  B00100000, // Frame 5
  B00101000,
  B11111000,
  B11011000,
  B11111000,
  B11110000,
  B00100000,
  B00010000,
  32, // 0.25 second delay

  B10010000, // Frame 6
  B10010000,
  B11111000,
  B01101100,
  B11111100,
  B11111100,
  B10010100,
  B10010000,
  32, // 0.25 second delay

  B01001000, // Frame 7
  B01001010,
  B11111110,
  B10110110,
  B11111110,
  B11111100,
  B01001000,
  B10000100,
  32, // 0.25 second delay

  B00100100, // Frame 8
  B00100100,
  B01111110,
  B11011011,
  B11111111,
  B11111111,
  B10100101,
  B00100100,
  32, // 0.25 second delay

  B00100100, // Frame 9
  B10100101,
  B11111111,
  B11011011,
  B11111111,
  B01111110,
  B00100100,
  B01000010,
  32, // 0.25 second delay

  B00100100, // Frame 10
  B00100100,
  B01111110,
  B11011011,
  B11111111,
  B11111111,
  B10100101,
  B00100100,
  32, // 0.25 second delay

  B00100100, // Frame 11
  B10100101,
  B11111111,
  B11011011,
  B11111111,
  B01111110,
  B00100100,
  B01000010,
  32, // 0.25 second delay

  B00100100, // Frame 12
  B00100100,
  B01111110,
  B11011011,
  B11111111,
  B11111111,
  B10100101,
  B00100100,
  32, // 0.25 second delay

  B00100100, // Frame 13
  B10100101,
  B11111111,
  B11011011,
  B11111111,
  B01111110,
  B00100100,
  B01000010,
  32, // 0.25 second delay

  B00010010, // Frame 14
  B00010010,
  B00111111,
  B01101101,
  B01111111,
  B01111111,
  B01010010,
  B00010010,
  32, // 0.25 second delay

  B00001001, // Frame 15
  B00101001,
  B00111111,
  B00110110,
  B00111111,
  B00011111,
  B00001001,
  B00010000,
  32, // 0.25 second delay

  B00000100, // Frame 16
  B00000100,
  B00001111,
  B00011011,
  B00011111,
  B00011111,
  B00010100,
  B00000100,
  32, // 0.25 second delay

  B00000010, // Frame 17
  B00001010,
  B00001111,
  B00001101,
  B00001111,
  B00000111,
  B00000010,
  B00000100,
  32, // 0.25 second delay

  B00000001, // Frame 18
  B00000001,
  B00000011,
  B00000110,
  B00000111,
  B00000111,
  B00000101,
  B00000001,
  32, // 0.25 second delay

  B00000000, // Frame 19
  B00000010,
  B00000011,
  B00000011,
  B00000011,
  B00000001,
  B00000000,
  B00000001,
  32, // 0.25 second delay

  B00000000, // Frame 20
  B00000000,
  B00000000,
  B00000001,
  B00000001,
  B00000001,
  B00000001,
  B00000000,
  32, // 0.25 second delay

  B00000000, // Frame 21
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  32, // 0.25 second delay

  B00000000, // Frame 22
  B00000000,
  B00000000,
  B10000000,
  B10000000,
  B00000000,
  B00000000,
  B00000000,
  32, // 0.25 second delay

  B00000000, // Frame 23
  B00000000,
  B10000000,
  B11000000,
  B11000000,
  B00000000,
  B10000000,
  B01000000,
  32, // 0.25 second delay

  B00000000, // Frame 24
  B10000000,
  B11000000,
  B01100000,
  B11100000,
  B10000000,
  B01000000,
  B01000000,
  32, // 0.25 second delay

  B10000000, // Frame 25
  B11000000,
  B11100000,
  B10110000,
  B11110000,
  B01000000,
  B10100000,
  B01010000,
  32, // 0.25 second delay

  B11000000, // Frame 26
  B11100000,
  B11110000,
  B11011000,
  B11111000,
  B00100000,
  B11010000,
  B00010000,
  32, // 0.25 second delay

  B01100000, // Frame 27
  B11110000,
  B11111000,
  B01101100,
  B11111100,
  B10010000,
  B01101000,
  B10010100,
  32, // 0.25 second delay

  B00110000, // Frame 28
  B01111000,
  B11111100,
  B10110110,
  B11111110,
  B01001000,
  B10110100,
  B10000100,
  32, // 0.25 second delay

  B00011000, // Frame 29
  B00111100,
  B01111110,
  B11011011,
  B11111111,
  B00100100,
  B01011010,
  B10100101,
  32, // 0.25 second delay

  B00011000, // Frame 30
  B00111100,
  B01111110,
  B11011011,
  B11111111,
  B00100100,
  B01011010,
  B01000010,
  32, // 0.25 second delay

  B00011000, // Frame 31
  B00111100,
  B01111110,
  B11011011,
  B11111111,
  B00100100,
  B01011010,
  B10100101,
  32, // 0.25 second delay

  B00011000, // Frame 32
  B00111100,
  B01111110,
  B11011011,
  B11111111,
  B00100100,
  B01011010,
  B01000010,
  32, // 0.25 second delay

  B00011000, // Frame 33
  B00111100,
  B01111110,
  B11011011,
  B11111111,
  B00100100,
  B01011010,
  B10100101,
  32, // 0.25 second delay

  B00011000, // Frame 34
  B00111100,
  B01111110,
  B11011011,
  B11111111,
  B00100100,
  B01011010,
  B01000010,
  32, // 0.25 second delay

  B00001100, // Frame 35
  B00011110,
  B00111111,
  B01101101,
  B01111111,
  B00010010,
  B00101101,
  B01010010,
  32, // 0.25 second delay

  B00000110, // Frame 36
  B00001111,
  B00011111,
  B00110110,
  B00111111,
  B00001001,
  B00010110,
  B00010000,
  32, // 0.25 second delay

  B00000011, // Frame 37
  B00000111,
  B00001111,
  B00011011,
  B00011111,
  B00000100,
  B00001011,
  B00010100,
  32, // 0.25 second delay

  B00000001, // Frame 38
  B00000011,
  B00000111,
  B00001101,
  B00001111,
  B00000010,
  B00000101,
  B00000100,
  32, // 0.25 second delay

  B00000000, // Frame 39
  B00000001,
  B00000011,
  B00000110,
  B00000111,
  B00000001,
  B00000010,
  B00000101,
  32, // 0.25 second delay

  B00000000, // Frame 40
  B00000000,
  B00000001,
  B00000011,
  B00000011,
  B00000000,
  B00000001,
  B00000001,
  32, // 0.25 second delay

  B00000000, // Frame 41
  B00000000,
  B00000000,
  B00000001,
  B00000001,
  B00000000,
  B00000000,
  B00000001,
  32, // 0.25 second delay

  B00000000, // Frame 42
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  32, // 0.25 second delay
  
};