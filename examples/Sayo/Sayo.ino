#include "Piezzo.h"

const int BPM = 90;
const int Q = 60000 / BPM;
const int H = Q * 2;
const int W = Q * 4;
const int E = Q / 2;
const int S = Q / 4;

Piezzo piezzo (8);
double scale [] = {G5, Q, G5, Q, A5, Q, G5, Q, C5, Q, B5, Q, R , Q, G5, Q, G5, Q,
                A5, Q, G5, Q, D5, Q, C5, Q, R, Q, G5, Q, G5, Q, G5, Q, E5, Q, C5, Q, B5, Q, A5, Q,
                F5, Q, F5, Q, E5, Q, C5, Q, D5, Q, C5, Q,
               };
double CHORUS1 [] = {F5, E, E5, E, C5, Q + E , R, S, A4, E, D5, E, A4, E, C5, H, R , S, F5, E, E5, E, C5, E, A4, S ,  R, E ,
                  D5, Q, F5, Q, G5, Q, A5, E, F5, H,F5, E, E5, E, C5, Q + E, R, E, C5, E, C5, E , D5, E, A4, E,C5, Q + E, R , 
                  Q, D5, Q + (S / 2), E5, Q, R, S, A4, Q, F5, Q , F5, E , E5, Q, C5, E, C5, E, D5, E, C5, Q, R , Q , D5, Q + (S / 2),
                  E5, Q, R, S, A4, Q, F5, Q , F5, E , E5, Q, C5, E, C5, E, D5, E, C5, Q, R , Q, G4, Q , A4, Q , AS4 , Q, A4 , Q , F4, Q,
                  C4, E + S , AS4, Q , R, S , A4, Q + S, G4, Q, F4 , Q , F4, Q};



void setup() {
}

void loop() {
    piezzo.play(CHORUS1);

  delay(1000);
}
