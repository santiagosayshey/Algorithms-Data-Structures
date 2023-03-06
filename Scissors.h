#ifndef SCISSORS_H
#define SCISSORS_H

#pragma once

#include "Move.h"

class Scissors : public Move
{
public:
    Scissors();
    ~Scissors();
    std::string evaluate(Move* move);

private:

};

#endif