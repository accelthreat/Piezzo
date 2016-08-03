/*
  Piezzo.h - Library for playing music on Piezzo.
  Created by Matthew Lemuel Rey, July 31, 2016.
  Released into the public domain.
*/
#include "Arduino.h"
#include "pitchesx.h"

class Piezzo {
  public:
    Piezzo (int piezzopinz);
    void play (double notes []);


  private:
    int piezzoPin;
    void playNote (double freq, int duration);
    int getLength (double notes []);
};

