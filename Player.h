#ifndef PLAYER_H
#define PLAYER_H

#pragma once

#include <string>
#include <iostream>

class Player
{
public:
    Player(std::string name);
    ~Player();

    virtual char makeMove();
    virtual std::string getName();

    char move;
    std::string name;
};




#endif