#ifndef PLAYER_H
#define PLAYER_H

#pragma once

#include <string>
#include "Move.h"

class Player
{
public:
    virtual Move* makeMove()=0;
    virtual std::string getName()=0;
    Move* move;
    std::string name;

protected:


};

#endif