#include "Piezzo.h"

const int piezzopin = 8;
const int BPM = 120;
const int Q = 60000 / BPM;
const int H = Q * 2;
const int W = Q * 4;
const int E = Q / 2;
const int S = Q / 4;

Piezzo piezzo (piezzopin);
int scale [] = {G5,Q, G5,Q, A5,Q, G5,Q,  C5,Q,  B5,Q,  R , Q, G5,Q,  G5,Q, 
A5, Q, G5, Q, D5, Q, C5, Q, R,Q,  G5,Q,  G5,Q,  G5, Q, E5,Q,  C5, Q, B5,Q, 
A5,Q, F5,Q,  F5, Q, E5, Q, C5,Q,  D5,Q,  C5,Q};

void setup() {
}

void loop() {
  int musicLength = sizeof(scale) / sizeof(int);
  piezzo.play(scale, musicLength);
  delay(1000);
}
