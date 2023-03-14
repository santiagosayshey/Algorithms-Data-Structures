#include "Reverser.h"

Reverser::Reverser()
{

}

Reverser::~Reverser()
{

}

int Reverser::reverseDigit(int n) 
{

  if (n<0)
  {
    return -1;
  }

  return intHelper(n,0);
}

int Reverser::intHelper(int n, int reverse) 
{
  if (n == 0)
  {
      return reverse;
  }

  return intHelper(n / 10, reverse * 10 + n % 10);
}

std::string Reverser::reverseString(std::string word) 
{
  if (word.length()<1)
  {
    return "ERROR";
  }
  return stringHelper(word, word.length() - 1, "");
}

std::string Reverser::stringHelper(std::string word, int index, std::string reverse) 
{
  if (index < 0)
  {
    return reverse;
  }

  reverse.push_back(word[index]);
  return stringHelper(word, index - 1, reverse);
}
