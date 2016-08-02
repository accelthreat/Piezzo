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
<<<<<<< HEAD
    void play (double notes []);
    void play (double notes [],int musicLength);
    void play (double notes [], int beats [], int musicLength);
=======
    void play (int notes [],int musicLength);
    void play (int notes [], int beats [], int musicLength);
>>>>>>> parent of 34cd2f2... Adding Self Length


  private:
    int piezzoPin;
    void playNote (double freq, int duration);
};

