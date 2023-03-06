#include "Computer.h"

Computer::Computer()
{
  name="Computer";
}

Computer::~Computer()
{

}

Move* Computer::makeMove()
{
  return move;
}

std::string Computer::getName()
{
    return name;
}
