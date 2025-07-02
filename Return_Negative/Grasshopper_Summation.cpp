#include <iostream>

int summation(int num){
  return num*(num+1)/2;
}

int main()
{
    int a = 0, b = 2, c = 8, d = 14;
    std::cout << summation(a) << '\n';
    std::cout << summation(b) << '\n';
    std::cout << summation(c) << '\n';
    std::cout << summation(d) << '\n';
}