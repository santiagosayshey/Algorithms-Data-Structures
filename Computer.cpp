#include "Computer.h"

Computer::Computer()
{
    move = new Rock();
    this->name="Computer";
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