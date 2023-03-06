#ifndef HUMAN_H
#define HUMAN_H

#pragma once

#include "Player.h"
#include "Rock.h"
#include <iostream>

class Human : public Player
{
public:
    Human();
    Human(std::string name);
    ~Human();

    Move* makeMove();
    std::string getName();

    std::string choice;
    Move* move;

private:
};





#endif