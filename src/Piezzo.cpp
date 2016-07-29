#include "Piezzo.h"
Piezzo::Piezzo (int piezzopinz){
  piezzoPin = piezzopinz;
  pinMode(piezzoPin, OUTPUT);

}

void Piezzo::playNote (int freq, int duration) {
tone (piezzoPin,freq,duration);
delay(50+duration);
  }




void Piezzo::play (int notes [], int beatlength [],int noteLength) {
    //int musicLength = sizeof(notes)/2;

for (int i=0; i<noteLength; i++) {

    playNote (notes [i], beatlength[i]);

}
}
