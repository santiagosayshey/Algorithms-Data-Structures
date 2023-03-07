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
    return winsTo;
}

std::vector<std::string> Move::getLosers()
{
    return losesTo;
}