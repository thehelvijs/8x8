//Made by Helvijs

//Defining Arduino pins with matrix pins
//ROWS
#define r1 2
#define r2 3
#define r3 4
#define r4 5
#define r5 6
#define r6 7
#define r7 8
#define r8 9
//COLS
#define c1 10
#define c2 11
#define c3 12
#define c4 13
#define c5 14
#define c6 15
#define c7 16
#define c8 17

//Pattern to be drawn on 8x8 matrix
int pattern1[8][8] = {
{  1 ,  1 ,  1 ,  1 ,  1 ,  1 ,  1 ,  1 },
{  1 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  1 },
{  1 ,  0 ,  1 ,  0 ,  0 ,  1 ,  0 ,  1 },
{  1 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  1 },
{  1 ,  0 ,  1 ,  0 ,  0 ,  1 ,  0 ,  1 },
{  1 ,  0 ,  1 ,  1 ,  1 ,  1 ,  0 ,  1 },
{  1 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  1 },
{  1 ,  1 ,  1 ,  1 ,  1 ,  1 ,  1 ,  1 } 
};
/*
int pattern2[8][8] = {
{  1 ,  1 ,  1 ,  1 ,  1 ,  1 ,  1 ,  1 },
{  1 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  1 },
{  1 ,  0 ,  1 ,  0 ,  0 ,  1 ,  0 ,  1 },
{  1 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  1 },
{  1 ,  0 ,  1 ,  0 ,  0 ,  1 ,  0 ,  1 },
{  1 ,  0 ,  1 ,  1 ,  1 ,  1 ,  0 ,  1 },
{  1 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  1 },
{  1 ,  1 ,  1 ,  1 ,  1 ,  1 ,  1 ,  1 } 
};
*/
void setup() {
  // Set Arduino pins as OUTPUTS: 
  // Wiring:   C1   C2   C3   C4   C5   C6   C7   C8  
  //           p10   p11   p12  p13  p14  p15  p16  p17
  // R1 pin2---|----|-----|----|----|----|----|----|---
  // R2 pin3---|----|-----|----|----|----|----|----|---
  // R3 pin4---|----|-----|----|----|----|----|----|---
  // R4 pin5---|----|-----|----|----|----|----|----|---
  // R5 pin6---|----|-----|----|----|----|----|----|---
  // R6 pin7---|----|-----|----|----|----|----|----|---
  // R7 pin8---|----|-----|----|----|----|----|----|---
  // R8 pin9---|----|-----|----|----|----|----|----|---

  for (int i = 2; i <= 17; i++)
        pinMode(i, OUTPUT);
        
  // reset all pins
  for (int i = 2; i <=9; i++){
    digitalWrite(i, LOW);
  }
   for (int i = 10; i <=17; i++){
    digitalWrite(i, HIGH);
  }
}

void loop() {
  
symbol1();
// To make multiple patterns uncomment next lines
/*
for (int i=0;i<1000;i++){
symbol1();
}
for (int i=0;i<1000;i++){
symbol2();
}
*/
}


void symbol1(){
 int r;
 int c;
 int a;
 int b;
  for (r = 0; r < 8; r++ ) {
  for (c = 0; c < 8; c++) {
  if(pattern1[r][c]==1) {
a = r+2;
b = c+10;
digitalWrite(a, HIGH);
digitalWrite(b, LOW);
delayMicroseconds(200);
digitalWrite(a, LOW);
digitalWrite(b, HIGH);
  
  }
  }
}
}

/*
void symbol2(){
 int r;
 int c;
 int a;
 int b;
  for (r = 0; r < 8; r++ ) {
  for (c = 0; c < 8; c++) {
  if(pattern2[r][c]==1) {
a = r+2;
b = c+10;
digitalWrite(a, HIGH);
digitalWrite(b, LOW);
delayMicroseconds(200);
digitalWrite(a, LOW);
digitalWrite(b, HIGH);
  
  }
  }
}
}
*/

