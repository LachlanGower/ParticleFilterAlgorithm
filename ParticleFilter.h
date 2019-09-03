
#ifndef COSC_ASS_ONE_PARTICLE_FILTER
#define COSC_ASS_ONE_PARTICLE_FILTER

#include "Particle.h"
#include "ParticleList.h"
#include "Types.h"

#define MAZE_SIZE          100

class ParticleFilter {
public:

   /*                                           */
   /* DO NOT MOFIFY ANY CODE IN THIS SECTION    */
   /*                                           */


   // Initialise a new particle filter with a given maze of size (x,y)
   ParticleFilter(Grid maze, int rows, int cols);

   // Clean-up the Particle Filter
   ~ParticleFilter();

   // A new observation of the robot, of size 3x3
   //do the algorithm here update partcle list
   void newObservation(Grid observation);
   /* algorithm
        FOR particle in particleList
          IF observation matches particle
            generate possible next particles (turn left/right and move forwards)
            remove previous particle
          ELSE
            remove particle from list
   */

   // Return a DEEP COPY of the ParticleList of all particles representing
   //    the current possible locations of the robot
   ParticleList* getParticles();


   /*                                           */
   /* YOU MAY ADD YOUR MODIFICATIONS HERE       */
   /*                                           */
 private:
   ParticleList* pl = new ParticleList();
   Grid maze;
   int rows;
   int cols;
};

#endif // COSC_ASS_ONE_PARTICLE_FILTER
