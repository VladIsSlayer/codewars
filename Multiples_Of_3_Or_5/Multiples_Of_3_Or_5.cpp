#include <iostream>
#include <type_traits>

int solution(int number) 
{
    if (number<3) return 0;

    auto sum_divisible = [](int n, int k) -> long long{
        const long long count = (n-1)/k;
        return k*count*(count + 1) / 2;
    };

    return sum_divisible(number,3)
    + sum_divisible(number, 5)
    - sum_divisible(number,15);
}

int main()
{
    int a = 10, b = -4, c = 125;

    std::cout<<solution(a) << '\n';
    std::cout<<solution(b) << '\n';
    std::cout<<solution(c) << '\n';
}