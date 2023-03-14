#include "Truckloads.h"
#include <cmath>

Truckloads::Truckloads()
{

}

Truckloads::~Truckloads()
{

}

int Truckloads::numTrucks(int numCrates, int loadSize) 
{
  if (numCrates<loadSize+1)
    return 1;

  if (numCrates % 2 == 0)
    return 2*numTrucks(numCrates/2,loadSize);
  else
    return numTrucks(numCrates/2,loadSize) + numTrucks((numCrates/2)+1,loadSize);
}

