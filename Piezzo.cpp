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

void Piezzo::playNote (double freq, int duration) {
  tone (piezzoPin, freq, duration);
  delay(1 + duration);

}


void Piezzo::play (double notes []) {
    int noteLength;
    for (int i = 0; i!= NULL; i++)
    {
     noteLength++;
    }
  for (int i = 0; i < noteLength; i += 2) {
    playNote (notes [i], notes[i + 1]);

  }
}


void Piezzo::play (double notes [], int noteLength) {
  for (int i = 0; i < noteLength; i += 2) {
    playNote (notes [i], notes[i + 1]);

  }
}

void Piezzo::play (double notes [], int beats [], int noteLength) {
  for (int i = 0; i < noteLength; i ++) {
    playNote (notes [i], beats[i]);

  }
}
