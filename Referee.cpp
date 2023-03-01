#include "Referee.h"

Referee::Referee()
{

}

Referee::~Referee()
{

}

Player* Referee::refGame(Player* player1, Player* player2)
{
    if (player1->move == 'P' || player1->move == 'p')
    {
      return player1;
    }
    else
    {
      return player2;
    }
}