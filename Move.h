#ifndef MOVE_H
#define MOVE_H

#pragma once
#include <string>
#include <vector>

class Move
{
public:
    Move();
    ~Move();

    std::string getName();

    std::vector<std::string> getWinsTo ();
    std::vector<std::string> getLosesTo();

protected:
    std::string name;
    std::vector<std::string> winsTo;
    std::vector<std::string> losesTo;

};






#endif