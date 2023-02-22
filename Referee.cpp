#include "Referee.h"

Referee::Referee()
{

}

Referee::~Referee()
{

}

Player* Referee::refGame(Player* player1, Player* player2)
{
  if (player1->move == 'S')
    return player2;

  else
    return player1;
}