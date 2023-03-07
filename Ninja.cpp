#include "Ninja.h"

Ninja::Ninja()
{
    this->name="Ninja";
    this->losesTo.push_back("Monkey");
    this->losesTo.push_back("Robot");
    this->winsTo.push_back("Pirate");
    this->winsTo.push_back("Zombie");
}

Ninja::~Ninja()
{

}