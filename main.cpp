#include <iostream>

int sum(int n)
{
    if (n<2)
        return 1;
    return n+sum(n-1);
}

int power(int x, int n)
{
    if (n<1)
        return 1;
    return x*power(x,n-1);
}

int sumIntDigits(int n)
{
    if 
}

int main() {
    std::cout << power(9,9) << std::endl;
    return 0;
}