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
    Player* winner;
    Move* p1move;
    Move* p2move;
    std::vector<std::string> winners;
    std::vector<std::string> losers;
    std::vector<std::string> tie;

};



#endif