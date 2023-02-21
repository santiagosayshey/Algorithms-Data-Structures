#include "Player.h"

Player::Player(std::string name)
{
  this->name=name;
}

Player::~Player()
{

}

char Player::makeMove()
{
    std::cout << "Enter Move: " << std::endl;
    std::cin >> move;
    return this->move;
}


std::string Player::getName()
{
    return this->name;
}