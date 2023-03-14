#ifndef REVERSER_H
#define REVERSER_H

#pragma once

#include <string>

class Reverser
{
public:
    Reverser();
    ~Reverser();

    int reverseDigit(int n);
    std::string reverseString(std::string word); 

private:
    int intHelper(int n, int reverse);
    std::string stringHelper(std::string word, int index, std::string reverse);
};








#endif