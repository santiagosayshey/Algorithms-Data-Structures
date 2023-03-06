#include "Move.h"

Move::Move()
{
  
}

Move::~Move()
{

}

std::string Move::getName()
{
    return name;
}


std::vector<std::string> Move::getWinners()
{
    return winners;
}

std::vector<std::string> Move::getLosers()
{
    return losers;
}

std::vector<std::string> Move::getTie()
{
    return tie;
}