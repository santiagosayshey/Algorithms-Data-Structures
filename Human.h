#ifndef HUMAN_H
#define HUMAN_H

#pragma once

#include "Player.h"
#include <iostream>
#include <string>
#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"
#include "Ninja.h"
#include "Pirate.h"
#include "Robot.h"
#include "Zombie.h"
#include "Monkey.h"

class Human : public Player
{
public:
    Human();
    Human(std::string name);
    ~Human();

    Move* makeMove();
    std::string getName();

private:
    std::string choice;
};





#endif