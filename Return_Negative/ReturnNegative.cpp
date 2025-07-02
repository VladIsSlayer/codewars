#include <iostream>

int makeNegative(int num)
{
  return (num>0) ? -num : num ;
}

int main()
{
    std::cout << makeNegative(5)<<'\n';
    std::cout << makeNegative(0)<<'\n';
    std::cout << makeNegative(-10)<<'\n';
}