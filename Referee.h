#ifndef REFEREE_H
#define REFEREE_H

#pragma once

#include "Player.h"
#include "Human.h"

class Referee
{
public:
    Referee();
    ~Referee();

    Player* refGame(Player* player1, Player* player2);
    

private:
    Move* p1move;
    Move* p2move;

    std::vector<std::string> winsTo;
    std::vector<std::string> losesTo;
};



#endif