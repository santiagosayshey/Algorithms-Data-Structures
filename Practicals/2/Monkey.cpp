#include "Monkey.h"

Monkey::Monkey()
{
    this->name="Monkey";
    this->losesTo.push_back("Pirate");
    this->losesTo.push_back("Zombie");
    this->winsTo.push_back("Ninja");
    this->winsTo.push_back("Robot");
}

Monkey::~Monkey()
{

}