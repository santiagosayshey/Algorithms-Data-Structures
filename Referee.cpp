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
  // std::cout << player1->getName() << std::endl;;
  // std::cout << player2->getName() << std::endl;;

  p1move = player1->makeMove();
  p2move = player2->makeMove();

  winsTo = p1move->getWinsTo();
  losesTo = p1move->getLosesTo();

  for (size_t i=0; i<losesTo.size(); i++)
  {
    if (losesTo.at(i) == p2move->getName())
    {
      winner->name=player2->name;
    }
  }

  for (size_t i=0; i<winsTo.size(); i++)
  {
    if (winsTo.at(i) == p2move->getName())
    {
      winner->name=player1->name;
    }
  }

  return nullptr;
}

