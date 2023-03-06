#include "Paper.h"

Paper::Paper()
{
  this->name="Paper";
  winners.push_back("Scissors");
  losers.push_back("Rock");
  tie.push_back("Paper");
}

Paper::~Paper()
{

}