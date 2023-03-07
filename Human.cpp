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
    std::cout << name << ", Enter Move: ";
    std::cin >> choice;

    if (choice == "Rock")
        move = new Rock();
    else if (choice == "Scissors")
        move = new Scissors();
    else if (choice == "Paper")
        move = new Paper();
    else if (choice == "Monkey")
        move = new Monkey();
    else if (choice == "Robot")
        move = new Robot();
    else if (choice == "Ninja")
        move = new Ninja();
    else if (choice == "Pirate")
        move = new Pirate();
    else if (choice == "Zombie")
        move = new Zombie();
    return move;


}

std::string Human::getName()
{
    return name;
}