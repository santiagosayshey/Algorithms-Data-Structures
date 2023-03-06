#include "Computer.h"

Computer::Computer()
{
  move = new Rock();
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
