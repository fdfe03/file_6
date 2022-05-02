#include <iostream>
#include "string"
#include "BitFlip.h"
#include "BitFlipProb.h"
#include "Rearrange.h"
using namespace std;

Individual* execute(Individual* indPtr, Mutator* mPtr, int k)
{
    Individual individual = mPtr->mutate(*indPtr, k);
    return new Individual(individual.getString());
}

int main(){
    srand((int)time(0));

    string str1, str2;
    int k1, k2;
    cin >> str1 >> k1 >> str2 >> k2;

    Individual indv1(str1);
    Individual indv2(str2);

    BitFlip bf;
    Rearrange re;

    Individual* p1 = execute(&indv1, &bf, k1);
    Individual* p2 = execute(&indv2, &re, k2);

    cout << p1->getString() << " " << p2->getString() << " " << p2->getMaxOnes() << endl;

    delete p1;
    delete p2;
}