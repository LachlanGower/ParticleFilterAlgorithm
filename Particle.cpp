
#include "Particle.h"
#include <iostream>

Particle::Particle(int x, int y, Orientation z){
  this->x = x;
  this->y = y;
  this->z = z;
  std::cout << '(' <<x <<','<<y<<',' <<z << "), ";
}

// x-co-ordinate of the particle
int Particle::getX() {
   return x;
}

// y-co-ordinate of the particle
int Particle::getY() {
   return y;
}

// Orientation of the particle
Orientation Particle::getOrientation() {
   return z;
}
