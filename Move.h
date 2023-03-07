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

    std::vector<std::string> getWinners();
    std::vector<std::string> getLosers();

protected:
    std::string name;
    std::vector<std::string> winsTo;
    std::vector<std::string> losesTo;

};






#endif