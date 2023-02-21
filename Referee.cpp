#include "Referee.h"

Referee::Referee():
Player("It's a Tie")
{

}

Referee::~Referee()
{

}

Player* Referee::refGame(Player* player1, Player* player2)
{
  if (player1->move == 'R')
  {
    return this;
  }

  if (player1->move == 'S')
    return player2;

  else
    return player1;
}