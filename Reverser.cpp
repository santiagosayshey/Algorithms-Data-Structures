#include "Reverser.h"

Reverser::Reverser()
{

}

Reverser::~Reverser()
{

}

int Reverser::reverseDigit(int n) 
{
    if (n==0)
      return 0;

    return (n%10+reverseDigit(n/10));
}
