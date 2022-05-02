#include "BitFlip.h"
#include "string"

Individual BitFlip::mutate(Individual individual, int k)
{
    k--;
    individual.flipBit(k % individual.getLength());
    return individual;
}