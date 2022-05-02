#ifndef BitFlipProb_H
#define BitFlipProb_H

#include "Mutator.h"
#include "string"
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

class BitFlipProb : public Mutator{
    public:
    BitFlipProb(double p);
    
    public:
	Individual mutate(Individual individual, int k) override;
    
    protected:
	double p;
};

#endif