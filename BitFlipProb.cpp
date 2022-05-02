#include "BitFlipProb.h"
#include "string"

BitFlipProb::BitFlipProb(double p): p(p){}

Individual BitFlipProb::mutate(Individual individual, int k)
{
    for (int z = 0; z < individual.getLength(); z++)
    {
        double p1 = 0.0;
        int count = 0;
        int pp = (int)(10 * p);

        for (int i = 0; i < 10; i++)
        {
            int j = (rand() % (10 - 0 + 1)) + 0;
            if (j <= pp) ++count;
        }

        p1 = (double)count / 10.0;

        if (p1 > p)
        {
            individual.flipBit(z);
        }
    }

    return individual;
}