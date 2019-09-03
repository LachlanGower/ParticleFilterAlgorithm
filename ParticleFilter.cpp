
#include "ParticleFilter.h"

#include <cstdio>
#include <cstdlib>
#include <iostream>

// Initialise a new particle filter with a given maze of size (x,y)
ParticleFilter::ParticleFilter(char** maze, int rows, int cols) {
  this->maze = maze;
  this->rows = rows;
  this->cols = cols;
  for(int y = 1; y < rows -1; y++){
    for(int x = 1; x < cols - 1; x++){
      for(int z = 0; z < 4;z++){
        if(maze[y][x] != '='){
          pl->add_back(new Particle(x,y,z));
        }
      }
    }
  }
}

// Clean-up the Particle Filter
ParticleFilter::~ParticleFilter() {
}

// A new observation of the robot, of size 3x3
void ParticleFilter::newObservation(Grid observation) {
  //For each Particle
  std::cout << "No. Of Particles: " << pl->getNumberParticles() << "\n";
  for(int x = 0; x < pl->getNumberParticles();x++){
    ParticlePtr tempParticle = pl->get(x);
    int tempX = tempParticle->getX();
    int tempY = tempParticle->getY();
    std::cout << "works: " << observation[0][0] << "\n";
    //int tempO = tempParticle->getOrientation();
    if(maze[tempY - 1][tempX - 1] == observation[0][0]){
      std::cout << "works: " << observation[0][0] << "\n";
    }
  }
}

// Return a DEEP COPY of the ParticleList of all particles representing
//    the current possible locations of the robot
ParticleList* ParticleFilter::getParticles() {
  return pl;
}
