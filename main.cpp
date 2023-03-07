#include "Human.h"
#include "Computer.h"
#include "Referee.h"


int main()
{
  Player* p1 = new Human("Sam");
  Player* p2 = new Computer();
  Referee* r = new Referee();

/*   p1->makeMove();

  if (p1->move == 'R'|| p1->move == 'r')
  {
    std::cout << "Tie" << std::endl;
    return 0;
  }

  p2->makeMove(); */

  Player* winner;
  winner = r->refGame(p1,p2);
  std::cout << winner->getName() << " Is the Winner!" <<  std::endl;

  return 0;
  
}