#include "Referee.h"

Referee::Referee()
{

}

Referee::~Referee()
{

}

Player* Referee::refGame(Player* player1, Player* player2)
{
  player1->makeMove();
  player2->makeMove();

  if (player1->move == 'P' || player1->move == 'p')
  {
    return player1;
  }
  else
  {
    return player2;
  }
}