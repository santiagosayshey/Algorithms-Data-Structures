#include "Scissors.h"

Scissors::Scissors()
{
  this->name="Scissors";
  losesTo.push_back("Rock");
  winsTo.push_back("Paper");
}

Scissors::~Scissors()
{

}