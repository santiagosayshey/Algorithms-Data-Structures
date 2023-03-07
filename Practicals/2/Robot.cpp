#include "Robot.h"

Robot::Robot()
{
    this->name="Robot";
    this->losesTo.push_back("Pirate");
    this->losesTo.push_back("Monkey");
    this->winsTo.push_back("Ninja");
    this->winsTo.push_back("Zombie");
}

Robot::~Robot()
{

}

