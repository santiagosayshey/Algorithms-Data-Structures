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
    std::vector<std::string> getTie();

protected:
    std::string name;
    std::vector<std::string> winners;
    std::vector<std::string> losers;
    std::vector<std::string> tie;

};






#endif