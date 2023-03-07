#include "Referee.h"

Referee::Referee()
{
  this->tie = new Human("Tie");
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
  else if (player1->move == 'S' || player1->move == 's')
  {
    return player2;
  }
  else
  {
    return tie;
  }
}