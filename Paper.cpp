#include "Paper.h"

Paper::Paper()
{
  this->name="Paper";
  losesTo.push_back("Scissors");
  winsTo.push_back("Rock");
}

Paper::~Paper()
{

}