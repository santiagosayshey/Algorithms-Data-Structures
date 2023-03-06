#include "Rock.h"

Rock::Rock()
{
  this->name="Rock";
  winners.push_back("Paper");
  losers.push_back("Scissors");
  tie.push_back("Rock");
}

Rock::~Rock()
{

}

