#include "Arduino.h"
#include "pitchesx.h"
class Piezzo {
  public:
    Piezzo (int piezzopinz);
    
    void play (int notes [],int musicLength);


  private:
    int piezzoPin;
    void playNote (int freq, int duration);
};

