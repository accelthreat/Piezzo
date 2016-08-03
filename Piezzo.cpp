/*
  Piezzo.cpp - Library for playing music on Piezzo.
  Created by Matthew Lemuel Rey, July 31, 2016.
  Released into the public domain.
*/

#include "Piezzo.h"


Piezzo::Piezzo () {
  piezzoPin = 13;
  pinMode(piezzoPin, OUTPUT);

}

Piezzo::Piezzo (int piezzopinz) {
  piezzoPin = piezzopinz;
  pinMode(piezzoPin, OUTPUT);

}

void Piezzo::playNote (float freq, int duration) {
  tone (piezzoPin, freq, duration);
  delay(1 + duration);

}
int Piezzo::getLength (float notes[]) {
 int noteLength = 0;
    for (int i = 0; notes[i]!= 1.69; i++)
    {
     noteLength++;
    }
return noteLength;

}

void Piezzo::play (float notes []) {

int noteLength = getLength(notes);
  for (int i = 0; i < noteLength; i += 2) {
    playNote (notes [i], notes[i + 1]);

  }
}


void Piezzo::play (float notes [], int noteLength) {
  for (int i = 0; i < noteLength; i += 2) {
    playNote (notes [i], notes[i + 1]);

  }
}

void Piezzo::play (float notes [], int beats [], int noteLength) {
  for (int i = 0; i < noteLength; i ++) {
    playNote (notes [i], beats[i]);

  }
}
