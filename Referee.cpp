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
  p1move = player1->makeMove();
  p2move = player2->makeMove();

  losers = p1move->getWinners();
  winners = p1move->getLosers();

  for (size_t i=0; i<winners.size(); i++)
  {
    if (winners.at(i) == p2move->getName())
    {
      winner->name=player2->name;
    }
  }

  for (size_t i=0; i<losers.size(); i++)
  {
    if (losers.at(i) == p2move->getName())
    {
      winner->name=player1->name;
    }
  }

  return winner;
}

