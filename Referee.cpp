#include "Referee.h"

Referee::Referee()
{
}

Referee::~Referee()
{

}

Player* Referee::refGame(Player* player1, Player* player2)
{
  p1move = player1->makeMove();
  p2move = player2->makeMove();

  winsTo = p1move->getWinsTo();
  losesTo = p1move->getLosesTo();

  for (size_t i=0; i<losesTo.size(); i++)
  {
    if (losesTo.at(i) == p2move->getName())
    {
      return player2;
    }
  }

  for (size_t i=0; i<winsTo.size(); i++)
  {
    if (winsTo.at(i) == p2move->getName())
    {
      return player1;
    }
  }

  return nullptr;
}

