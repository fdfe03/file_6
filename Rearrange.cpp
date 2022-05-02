#include "Rearrange.h"
#include "string"
using namespace std;

Individual Rearrange::mutate(Individual individual, int k){
  k--;
  string binString = individual.getString();

  while (k > binString.length()){
    k = k - binString.length();
  }

  binString = binString.substr(k, binString.length() - k) + binString.substr(0, k);

  Individual offspring(binString);
  return offspring;
};