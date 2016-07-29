#include "Arduino.h"
#include "pitchesx.h"
class Piezzo {
  public:
    Piezzo (int piezzopinz);
    void playNote (int freq, int duration);
    void play (int notes [], int notelength [],int musicLength);


  private:
    int piezzoPin;

};

