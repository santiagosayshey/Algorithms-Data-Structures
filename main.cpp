#include "Player.h"
#include "Computer.h"
#include "Referee.h"
#include <iostream>
#include <string>

int main() {

  Player* p1 = new Player("Sam");
  Player* c1 = new Computer();

  Referee ref;

  p1->move = p1->makeMove();

  Player* winner;
  winner = ref.refGame(p1,c1);

  
  std::cout << winner->getName() << " wins!" << std::endl;

  return 0;

  delete p1;
  delete c1;
  delete winner;
  
}