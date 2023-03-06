#ifndef MOVE_H
#define MOVE_H

#pragma once

#include "Player.h"
#include <string>

class Move
{
public:
    Move(Player* player);
    ~Move();

    virtual std::string evaluate(Move* move)=0;
    std::string name;
    Player* player;

private:

};

#endif