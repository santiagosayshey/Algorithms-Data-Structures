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
    std::cin >> choice;

    if (choice == "Rock")
        move = new Rock();
    else if (choice == "Scissors")
        move = new Scissors();
    else if (choice == "Paper")
        move = new Paper();

    return move;


}

std::string Human::getName()
{
    return name;
}