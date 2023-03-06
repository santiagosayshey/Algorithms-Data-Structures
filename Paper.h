#ifndef PAPER_H
#define PAPER_H

#pragma once

#include "Move.h"

class Paper : public Move
{
public:
    Paper();
    ~Paper();
    std::string evaluate(Move* move);

private:

};



#endif