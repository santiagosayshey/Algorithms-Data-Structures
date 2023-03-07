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


std::vector<std::string> Move::getWinsTo()
{
    return winsTo;
}

std::vector<std::string> Move::getLosesTo()
{
    return losesTo;
}