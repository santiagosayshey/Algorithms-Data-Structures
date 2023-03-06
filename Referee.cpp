#include "Referee.h"

Referee::Referee()
{
  this->winner = new Human("Tie");
}

Referee::~Referee()
{

}

Player* Referee::refGame(Player* player1, Player* player2)
{
  player1->makeMove()->evaluate(player2->makeMove());
  return winner;
}