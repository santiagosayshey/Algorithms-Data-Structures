#ifndef HUMAN_H
#define HUMAN_H

#pragma once

#include "Player.h"
#include <iostream>

class Human : public Player
{
public:
    Human(std::string name);
    ~Human();

    char makeMove();
    std::string getName();

private:
};



#endif