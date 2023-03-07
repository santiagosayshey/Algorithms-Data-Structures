#include "Human.h"

Human::Human()
{
    this->name="Human";
}

Human::Human(std::string name)
{
  this->name=name;
}

Human::~Human()
{

}

char Human::makeMove()
{
    std::cin >> move;
    return move;
}

std::string Human::getName()
{
    return name;
}