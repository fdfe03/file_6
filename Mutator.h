#ifndef MUTATOR_H
#define MUTATOR_H

#include "Individual.h"
#include "string"

class Mutator {
  public: 
    virtual Individual mutate(Individual individual, int k) = 0;
}; 

#endif