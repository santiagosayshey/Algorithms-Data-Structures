#include "Rock.h"

Rock::Rock()
{
  this->name="Rock";
  losesTo.push_back("Paper");
  winsTo.push_back("Scissors");
}

Rock::~Rock()
{

}

