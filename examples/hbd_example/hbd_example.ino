#include "pitchesx.h"
#include "Piezzo.h"

const int BPM = 120;
const int Q = 60000 / BPM;
const int H = Q * 2;
const int W = Q * 4;
const int E = Q / 2;
const int S = Q / 4;

Piezzo piezzo (8);
int scale [] = {G5, G5, A5, G5, C5, B5, R , G5, G5, A5, G5, D5, C5, R, G5, G5, G5, E5, C5, B5, A5, F5, F5, E5, C5, D5, C5};
int beats [] = {Q, Q, Q, Q, Q, Q , Q, Q, Q, Q, Q, Q, Q, Q, Q, Q, Q, Q , Q, Q, Q  , Q , Q , Q , Q , Q , Q};
void setup() {
}

void loop() {
  int musicLength = sizeof(scale) / sizeof(int);
  piezzo.play(scale, beats, musicLength);
  delay(1000);
}
