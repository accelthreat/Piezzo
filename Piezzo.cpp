/*
  Piezzo.cpp - Library for playing music on Piezzo.
  Created by Matthew Lemuel Rey, July 31, 2016.
  Released into the public domain.
*/

#include "Piezzo.h"


Piezzo::Piezzo (int piezzopinz) {
  piezzoPin = piezzopinz;
  pinMode(piezzoPin, OUTPUT);

}

void Piezzo::playNote (int freq, int duration) {
  tone (piezzoPin, freq, duration);
  delay(1 + duration);

}
int Piezzo::getLength (int notes[]) {
 int noteLength = 0;
    for (int i = 0; notes[i]!= 1.00; i++)
    {
     noteLength++;
    }
return noteLength;

}

void Piezzo::play (int notes []) {

int noteLength = getLength(notes);
  for (int i = 0; i < noteLength; i += 2) {
    playNote (notes [i], notes[i + 1]);

  }
}


