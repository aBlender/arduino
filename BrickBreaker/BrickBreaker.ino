#include "EEPROM.h"
#include "SPI.h"
#include "Arduboy.h"
#include "math.h"

Arduboy arduboy;
#define BALL_RADIUS 2
#define PADDLE_THICKNESS 4
#define PADDLE_DIST_FROM_EDGE 6

#define BRICK_W 16
#define BRICK_H 4
#define BRICK_GAP 1
#define BRICK_COLS 8
#define BRICK_ROWS 7

bool brickGrid [BRICK_COLS * BRICK_ROWS];
unsigned char bricksLeft = 0;

double cursorX = 0.0;
double cursorY = 64.0;
bool startGame = false;
bool rgbEnabled = true;
bool soundEnabled = true;
bool cpuEnabled = true;

double ballX = 5.0;
double ballY = 5.0;
double ballSpeedX = 0.5;
double ballSpeedY = 1.0;

char paddleStartWidth = 26;
char paddleWidth = 26;
char paddleX = WIDTH/2 - paddleWidth/2;

char paddleSpeed = 2;


unsigned int player1Score = 0;
unsigned int player2Score = 0;

byte redValue = 0;
byte greenValue = 0;
byte blueValue = 0;

// Sounds
const byte PROGMEM bing [] = {
  0x90,65, 0,40, 0x80, 0x90,65, 0, 60, 0x80, 0xf0
};
const byte PROGMEM point [] = {
  0x90,83, 0,60, 0x80, 0x90,88, 0,80, 0x80, 0xf0
};
const byte PROGMEM hit [] = { 
  0x90,60, 0,31, 0x80, 0x90,60, 0,31, 0x80, 0x90,60, 0,31, 0x80, 0xf0
};

// Bitmaps
PROGMEM const unsigned char tslogo[] = {
  0xCE,0xCA,0xCE,0x90,0xA7,0xFF,0x07,0x00,0xE0,0x10,0xEE,0xAE,0xEE,0x00,0x38,0xF8,
  0x38,0x00,0x1C,0xFC,0x5C,0x20,0x10,0x18,0x97,0x95,0x97,0x38,0x38,0x38,0x00,0x00,
  0xC1,0xDD,0xDD,0x9C,0xA0,0xC0,0x81,0x82,0xFF,0x01,0x70,0xF0,0x70,0x00,0xE0,0xE3,
  0xE4,0x0A,0xF1,0x10,0x38,0x28,0x38,0x00,0x83,0x7F,0x13,0x08,0x07,0xE7,0xA7,0xE0,
  0x01,0xC1,0xC1,0xDC,0x94,0x9C,0xA0,0xC0,0xB8,0xF9,0x3A,0x07,0xF8,0x00,0xC0,0x20,
  0x90,0x49,0x27,0x10,0x08,0x04,0x06,0x05,0x04,0x04,0x04,0x06,0x05,0x0E,0x0E,0x0E,
  0x00,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x01,0xFE,0x00,0xFF,0x00,0xFF,0x00,
  0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
}; 

void setup() {
  arduboy.begin();
  arduboy.setFrameRate(30);
  playSound(point);
  //Serial.begin(9600);
  brickReset();
  ballReset();
}

void loop() {
  if (!(arduboy.nextFrame()))
    return;

  arduboy.clear();
  
  if (startGame == false){
    intro();
  }
  else{
    runGame();
  }
  
  // then we finaly we tell the arduboy to display what we just wrote to the display
  arduboy.display();
}

void intro(){
  arduboy.setCursor(4, cursorY);
  arduboy.drawBitmap(4, cursorY, tslogo, 32,32, WHITE);
  arduboy.setCursor(48,cursorY + 8);
  arduboy.print(F("ThoughtSTEM"));
  arduboy.setCursor(56,cursorY + 18);
  arduboy.print(F("PRESENTS"));
  arduboy.setCursor(5, cursorY + 34);
  arduboy.print(F("=== BRICK BREAKER ==="));
  arduboy.setCursor(0, cursorY + 46);
  arduboy.print(F("A: RGB=On  B: SFX=On"));
  arduboy.setCursor(4, cursorY + 56);
  arduboy.print(F("Press RIGHT to Start"));
  
  if(rgbEnabled==false){
    arduboy.setCursor(42, cursorY + 46);
    arduboy.print(F("Off"));
  }
  
  if(soundEnabled==false){
    arduboy.setCursor(108, cursorY + 46);
    arduboy.print(F("Off"));
  }
  if (cursorY > 0){
    cursorY = cursorY - 0.5;
  }
  
  if(arduboy.pressed(RIGHT_BUTTON)){
    startGame = true;
  }

  if(arduboy.pressed(A_BUTTON)){
    rgbEnabled = !rgbEnabled;
    debounceButtons();
  }
  if(arduboy.pressed(B_BUTTON)){
    soundEnabled = !soundEnabled;
    debounceButtons();
  }
}

void runGame(){
  handleInput();
  moveAllTheThings();
  drawAllTheThings();
  blinkAllTheThings();
}

void handleInput(){
  if(arduboy.pressed(LEFT_BUTTON) && paddleX > 0){
    paddleX = paddleX - paddleSpeed;
  } 
  if(arduboy.pressed(RIGHT_BUTTON) && paddleX < WIDTH - paddleWidth){
    paddleX = paddleX + paddleSpeed;
  }
  if(arduboy.pressed(A_BUTTON)){
    rgbEnabled = !rgbEnabled;
    debounceButtons();
  }
  if(arduboy.pressed(B_BUTTON)){
    soundEnabled = !soundEnabled;
    debounceButtons();
  }
}

void brickReset(){
  bricksLeft = 0;
  char i;
  for (i = 0; i<2*BRICK_COLS; i++){
    brickGrid[i] = false;
  }
  for(; i<BRICK_COLS*BRICK_ROWS; i++){
    brickGrid[i] = true;
    bricksLeft++;
  }
}

void moveAllTheThings(){
  ballMove();
  ballBrickHandling();
  ballPaddleHandling();
}

void ballMove(){
  ballX = ballX + ballSpeedX;
  ballY = ballY + ballSpeedY;
  
  if(ballX < BALL_RADIUS && ballSpeedX < 0.0){ // left
    ballSpeedX = -ballSpeedX;
    //greenValue = 80;
    blueValue = 80;
    playSound(hit);
  }
  else if(ballX > WIDTH - BALL_RADIUS && ballSpeedX > 0.0){ // right
    ballSpeedX = -ballSpeedX;
    //greenValue = 80;
    blueValue = 80;
    playSound(hit);
  }
  
  if(ballY <= 0 && ballSpeedY < 0.0){  // top
    ballSpeedY = -ballSpeedY;
    //greenValue = 80;
    blueValue = 80;
    playSound(hit);
  }
  else if(ballY > HEIGHT){  // bottom
      playSound(bing);
      brickReset();
      ballReset();
  }
}

bool isBrickAtColRow(char col, char row){
  if (col >= 0 && col < BRICK_COLS &&
      row >= 0 && row < BRICK_ROWS) {
    char brickIndexUnderCoord = rowColToArrayIndex(col,row);
    return brickGrid[brickIndexUnderCoord];
  }
  else{
    return false;
  }
}

void ballBrickHandling(){
  char ballBrickCol = floor(ballX / BRICK_W);
  char ballBrickRow = floor(ballY / BRICK_H);
  char brickIndexUnderBall = rowColToArrayIndex(ballBrickCol, ballBrickRow);
  
  if (ballBrickCol >= 0 && ballBrickCol < BRICK_COLS &&
      ballBrickRow >= 0 && ballBrickRow < BRICK_ROWS){
        
    if(isBrickAtColRow(ballBrickCol,ballBrickRow)){
      brickGrid[brickIndexUnderBall] = false;
      bricksLeft--;
      blueValue = 80;
      playSound(hit);
  
      double prevBallX = ballX - ballSpeedX;
      double prevBallY = ballY - ballSpeedY;
      char prevBrickCol = floor(prevBallX / BRICK_W);
      char prevBrickRow = floor(prevBallY / BRICK_H);
  
      bool bothTestsFailed = true;
  
      if (prevBrickCol != ballBrickCol){
        if(isBrickAtColRow(prevBrickCol, ballBrickRow) == false){
          ballSpeedX *= -1;
          bothTestsFailed = false;
        }
      }
      if (prevBrickRow != ballBrickRow){
        if(isBrickAtColRow(ballBrickCol, prevBrickRow) == false){
        ballSpeedY *= -1;
        bothTestsFailed = false;
        }
    
        if (bothTestsFailed){
        ballSpeedX *= -1;
        ballSpeedY *= -1;
        }
      }
    }
  }
}

void ballPaddleHandling(){
  if(ballY > HEIGHT - BALL_RADIUS - PADDLE_THICKNESS - PADDLE_DIST_FROM_EDGE){ 
    if(ballY < HEIGHT - PADDLE_THICKNESS/2 - PADDLE_DIST_FROM_EDGE && ballX > paddleX && ballX < paddleX + paddleWidth){
      playSound(point);
      ballSpeedY = -ballSpeedY;
      double deltaX = ballX - (paddleX + paddleWidth/2);
      ballSpeedX = deltaX*0.25;
      greenValue = 80;
      
      if(bricksLeft == 0){
        brickReset();
      }
    }
  }
}

void drawAllTheThings(){
  drawBricks();
  arduboy.fillCircle(ballX,ballY,BALL_RADIUS,WHITE);
  arduboy.fillRoundRect(paddleX+2,HEIGHT-PADDLE_THICKNESS-PADDLE_DIST_FROM_EDGE,paddleWidth-4,PADDLE_THICKNESS,2,WHITE);
}

void drawBricks(){
  for(char eachRow=0; eachRow<BRICK_ROWS; eachRow++){
    for(char eachCol=0; eachCol<BRICK_COLS; eachCol++){
      byte arrayIndex = rowColToArrayIndex(eachCol, eachRow);
      
      if(brickGrid[arrayIndex]){
        arduboy.fillRect(BRICK_W*eachCol,BRICK_H*eachRow,BRICK_W-BRICK_GAP,BRICK_H-BRICK_GAP,WHITE);
      }
    }
  }
}

byte rowColToArrayIndex(char col, char row){
  return col + BRICK_COLS * row;
}

void blinkAllTheThings(){
  if (rgbEnabled == true){
    arduboy.setRGBled(redValue,greenValue,blueValue);
    if (redValue > 0){
      redValue -= 5;
    }
    if (greenValue > 0){
      greenValue -= 5;
    }
    if (blueValue > 0){
      blueValue -= 5;
    }
  }
  else{
    arduboy.setRGBled(0,0,0);
  }
}

void ballReset(){
  //greenValue = 80;
  redValue = 80;
  blinkAllTheThings();
  ballX = WIDTH/2;
  ballY = HEIGHT/2;
  ballSpeedX = 0.5;
  ballSpeedY = 1.0;
  delay(500);
}

void playSound(const byte *score){
  if(arduboy.tunes.playing()){
    arduboy.tunes.stopScore();
  }
  if (soundEnabled == true){
    arduboy.tunes.playScore(score);
  }
}

void debounceButtons() { // prevent "noisy" buttons from appearing as multiple presses
  delay(100);
  while (arduboy.buttonsState()) { }  // Wait for all keys released
  delay(100);
}
