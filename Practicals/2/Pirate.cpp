#include "Pirate.h"

Pirate::Pirate()
{
    this->name="Pirate";
    this->losesTo.push_back("Ninja");
    this->losesTo.push_back("Zombie");
    this->winsTo.push_back("Monkey");
    this->winsTo.push_back("Robot");
}

Pirate::~Pirate()
{

}