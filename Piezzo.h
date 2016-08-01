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
    void play (int notes []);
    void play (int notes [],int musicLength);
    void play (int notes [], int beats [], int musicLength);


  private:
    int piezzoPin;
    void playNote (int freq, int duration);
};

