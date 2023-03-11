#include "Human.h"
#include "Computer.h"
#include "Referee.h"


int main()
{
  Referee* r = new Referee();
  Player* winner;

  Player* p1 = new Computer();
  Player* p2 = new Computer();

  winner = r->refGame(p1,p2);

  if (winner == nullptr)
    std::cout << "Tie" << std::endl;
  else
    std::cout << winner->getName() <<  std::endl;

  p1 = new Human();
  p2 = new Human();

  winner = r->refGame(p1,p2);
  if (winner == nullptr)
    std::cout << "Tie" << std::endl;
  else
    std::cout << winner->getName() <<  std::endl;

  p1 = new Computer();
  p2 = new Human();

  winner = r->refGame(p1,p2);
  if (winner == nullptr)
    std::cout << "Tie" << std::endl;
  else
    std::cout << winner->getName() <<  std::endl;

  p1 = new Human();
  p2 = new Computer();

  winner = r->refGame(p1,p2);
  if (winner == nullptr)
    std::cout << "Tie" << std::endl;
  else
    std::cout << winner->getName() <<  std::endl;

  delete r;
  delete winner;
  delete p1;
  delete p2;
  
  return 0;
  
}