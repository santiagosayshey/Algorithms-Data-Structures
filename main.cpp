#include <iostream>
#include "Truckloads.h"
#include "Reverser.h"

int main() 
{
  Truckloads* t = new Truckloads;
  std::cout << t->numTrucks(1024,5) << std::endl;

  Reverser* r = new Reverser;
    std::cout << r->reverseDigit(54321) << std::endl;

  return 0;
}