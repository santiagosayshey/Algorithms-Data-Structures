#ifndef COMPUTER_H
#define COMPUTER_H

#pragma once

#include "Player.h"
#include "Rock.h"

class Computer : public Player
{
public:
    Computer();
    ~Computer();

    Move* makeMove();
    std::string getName();

private:

};


#endif