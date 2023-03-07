#include "Computer.h"

Computer::Computer()
{
  move='R';
  name="Computer";
}

Computer::~Computer()
{

}

char Computer::makeMove()
{
    return move;
}

std::string Computer::getName()
{
    return name;
}
