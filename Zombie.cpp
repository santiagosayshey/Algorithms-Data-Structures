#include "Zombie.h"

Zombie::Zombie()
{
    this->name="Zombie";
    this->losesTo.push_back("Ninja");
    this->losesTo.push_back("Robot");
    this->winsTo.push_back("Pirate");
    this->winsTo.push_back("Monkey");
}

Zombie::~Zombie()
{

}