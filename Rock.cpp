#include "Rock.h"

Rock::Rock()
{
    this->name="Rock";
}

Rock::~Rock()
{

}

std::string Rock::evaluate(Move* move)
{
    if (move->name=="Rock") {
        return "Tie";
    } else if (move->name=="Paper") {
        return player->getName();
    } else if (move->name=="Scissors") {
        return "Computer";
    }
}

