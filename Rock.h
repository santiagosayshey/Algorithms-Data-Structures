#ifndef ROCK_H
#define ROCK_H

#pragma once
#include "Move.h"

class Rock : public Move
{
public:
    Rock();
    ~Rock();
    std::string evaluate(Move* move);
    
private:

};




#endif