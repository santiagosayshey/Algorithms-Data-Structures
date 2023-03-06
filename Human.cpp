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

Move* Human::makeMove()
{
    std::cout << "Enter Move: ";
    std::cin >> choice;
    if (choice == "Rock")
    {
        move = new Rock();
    }
    return move;
}

std::string Human::getName()
{
    return name;
}