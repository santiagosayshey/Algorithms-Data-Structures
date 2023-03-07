#include "Computer.h"

Computer::Computer()
{
}

Computer::~Computer()
{

}

Move* Computer::makeMove()
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

std::string Computer::getName()
{
    return name;
}