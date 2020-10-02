// Animation data for Trinket/Gemma + LED matrix backpack jewelry.
// Edit this file to change the animation; it's unlikely you'll need
// to edit the source code.

#define REPS 3 // Number of times to repeat the animation loop (1-255)

const uint8_t PROGMEM ghostanim[] = {

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
  B10000000,
  B10000000,
  B00000000,
  16, // 0.25 second delay
  
  B00000000, // Frame 2
  B10000000,
  B01000000,
  B11000000,
  B11000000,
  B11000000,
  B11000000,
  B11000000,
  16, // 0.25 second delay

  B10000000, // Frame 3
  B11000000,
  B00100000,
  B01100000,
  B11100000,
  B11100000,
  B11100000,
  B11000000,
  16, // 0.25 second delay

  B11000000, // Frame 4
  B11100000,
  B10010000,
  B10110000,
  B11110000,
  B11110000,
  B11110000,
  B01110000,
  16, // 0.25 second delay

  B11100000, // Frame 5
  B11110000,
  B01001000,
  B11011000,
  B11111000,
  B11111000,
  B11111000,
  B01110000,
  16, // 0.25 second delay

  B11110000, // Frame 6
  B11111000,
  B00100100,
  B01101100,
  B11111100,
  B11111100,
  B11111100,
  B11011100,
  16, // 0.25 second delay

  B01111000, // Frame 7
  B11111100,
  B10010010,
  B10110110,
  B11111110,
  B11111110,
  B11111110,
  B11011100,
  16, // 0.25 second delay
  
  B00111100, // This is the first frame for ghost #1
  B01111110, // If you squint you can kind of see the
  B11001001, // image in the 0's and 1's.
  B11011011,
  B11111111,
  B11111111,
  B11111111,
  B10110111,
  // The 9th line (required) is the time to display this frame,
  // in 1/100ths of a second (e.g. 100 = 1 sec, 25 = 1/4 sec,
  // etc.).  Range is 0 (no delay) to 255 (2.55 seconds).  If
  // longer delays are needed, make duplicate frames.
  128, // 0.25 seconds

  B00111100, // This is the second frame for ghost #1
  B01111110,
  B11101101,
  B11001001,
  B11111111,
  B11111111,
  B11111111,
  B10110111,
  64, // 0.25 second delay

  B00111100, // This is the third frame for ghost #1
  B01111110,
  B11011011,
  B11001001,
  B11111111,
  B11111111,
  B11111111,
  B10110111,
  64, // 0.25 second delay

  B00000000, // This is the first frame for eyes
  B00110110,
  B01011011,
  B01001001,
  B00110110,
  B00000000,
  B00000000,
  B00000000,
  64, // 0.25 second delay

  B00000000, // This is the second frame for eyes
  B00110110,
  B01001001,
  B01011011,
  B00110110,
  B00000000,
  B00000000,
  B00000000,
  16,

  B00000000, // This is the third frame for eyes
  B00110110,
  B01001001,
  B01101101,
  B00110110,
  B00000000,
  B00000000,
  B00000000,
  16,
  
  B00000000, // This is the fourth frame for eyes
  B00110110,
  B01101101,
  B01001001,
  B00110110,
  B00000000,
  B00000000,
  B00000000,
  16,

  B00000000, // This is the first frame for eyes
  B00110110,
  B01011011,
  B01001001,
  B00110110,
  B00000000,
  B00000000,
  B00000000,
  16, // 0.25 second delay

  B00000000, // Frame 18
  B00011011,
  B00101101,
  B00100100,
  B00011011,
  B00000000,
  B00000000,
  B00000000,
  16, // 0.25 second delay

  B00000000, // Frame 19
  B00001101,
  B00010110,
  B00010010,
  B00001101,
  B00000000,
  B00000000,
  B00000000,
  16, // 0.25 second delay

  B00000000, // Frame 20
  B00000110,
  B00001011,
  B00001001,
  B00000110,
  B00000000,
  B00000000,
  B00000000,
  16, // 0.25 second delay

  B00000000, // Frame 21
  B00000011,
  B00000101,
  B00000100,
  B00000011,
  B00000000,
  B00000000,
  B00000000,
  16, // 0.25 second delay

  B00000000, // Frame 22
  B00000001,
  B00000010,
  B00000010,
  B00000001,
  B00000000,
  B00000000,
  B00000000,
  16, // 0.25 second delay

  B00000000, // Frame 23
  B00000000,
  B00000001,
  B00000001,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  16, // 0.25 second delay

  B00000000, // Frame 24
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  16, // 0.25 second delay
};
