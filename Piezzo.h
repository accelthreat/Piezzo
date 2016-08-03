/*
  Piezzo.h - Library for playing music on Piezzo.
  Created by Matthew Lemuel Rey, July 31, 2016.
  Released into the public domain.
*/
#include "Arduino.h"
#include "pitchesx.h"

class Piezzo {
  public:
    Piezzo ();
    Piezzo (int piezzopinz);

    void play (float notes []);
    void play (float notes [],int musicLength);
    void play (float notes [], int beats [], int musicLength);



  private:
    int piezzoPin;
    void playNote (float freq, int duration);
    int getLength (float notes []);
};

