#include "pitchesx.h"
#include "Piezzo.h"

const int BPM = 70
;
const int Q = 60000 / BPM;
const int H = Q * 2;
const int W = Q * 4;
const int E = Q / 2;
const int S = Q / 4;

Piezzo piezzo (8);
int scale [] = {G5, Q, G5, Q, A5, Q, G5, Q, C5, Q, B5, Q, R , Q, G5, Q, G5, Q,
                A5, Q, G5, Q, D5, Q, C5, Q, R, Q, G5, Q, G5, Q, G5, Q, E5, Q, C5, Q, B5, Q, A5, Q,
                F5, Q, F5, Q, E5, Q, C5, Q, D5, Q, C5, Q,
               };
int CHORUS1 [] = {F5, E, E5, E, C5, Q + E , R, S, A4, E, D5, E, A4, E, C5, H, R , S};
int CHORUS2 [] = {F5, E, E5, E, C5, E, A4, S ,  R, E ,
                  D5, Q, F5, Q, G5, Q, A5, E, F5, H
                 };
int CHORUS3 [] = {F5, E, E5, E, C5, Q + E, R, E, C5, E, C5, E , D5, E, A4, E};
int CHORUS3V [] = {C5, Q + E, R , Q};
int CHORUS4 [] = {D5, Q + (S / 2), E5, Q, R, S, A4, Q, F5, Q , F5, E , E5, Q, C5, E, C5, E, D5, E, C5, Q, R , Q};
int CHORUS5 [] = {G4, Q , A4, Q , AS4 , Q, A4 , Q , F4, Q};
int CHORUS6 [] = {C4, E + S , AS4, Q , R, S , A4, Q + S, G4, Q, F4 , Q , F4, Q};
//int beats [] = {Q, Q, Q, Q, Q, Q , Q, Q, Q, Q, Q, Q, Q, Q, Q, Q, Q, Q , Q, Q, Q  , Q , Q , Q , Q , Q , Q};

int CHORUSL = sizeof(CHORUS1) / sizeof(int);
int CHORUSL2 = sizeof(CHORUS2) / sizeof(int);
int CHORUSL3 = sizeof(CHORUS3) / sizeof(int);
int CHORUSL3V = sizeof(CHORUS3V) / sizeof(int);
int CHORUSL4 = sizeof(CHORUS4) / sizeof(int);
int CHORUSL5 = sizeof(CHORUS5) / sizeof(int);
int CHORUSL6 = sizeof(CHORUS6) / sizeof(int);
void setup() {
}

void loop() {
    piezzo.play(CHORUS1, CHORUSL);
  piezzo.play(CHORUS2, CHORUSL2);
     piezzo.play(CHORUS3, CHORUSL3);
    piezzo.play(CHORUS3V, CHORUSL3V);
    piezzo.play(CHORUS4, CHORUSL4);
    piezzo.play(CHORUS5, CHORUSL5);
    piezzo.play(CHORUS6, CHORUSL6);
  delay(1000);
}
