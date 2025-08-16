#include <iostream>
#include <math.h>

bool is_square(int n)
{
    int less_number = ceil(sqrt(n));
    if (n%less_number==0) return true;
    else return false;
}

int main()
{
    int a = 1, b = 4, c = 5, d = 27, e = 26, f = -1;

    std::cout<<is_square(a)<<std::endl;
    std::cout<<is_square(b)<<std::endl;
    std::cout<<is_square(c)<<std::endl;
    std::cout<<is_square(d)<<std::endl;
    std::cout<<is_square(e)<<std::endl;
    std::cout<<is_square(f)<<std::endl;
}