#include <iostream>

typedef unsigned long long int ULL;



// Оптимизированная функция подсчёта чисел
ULL odd_isReal(ULL L, ULL R) {
    ULL marker,last_divisor;
    unsigned number;
    int count = 0, step;

    for(ULL i = L; i<=R; ++i)
    {
        marker = 1;
        number = 0;
        step = 1;
        last_divisor = 0;

        while(marker<=i/2+1)
        {
            if(i%marker==0)
            {
                if (last_divisor==marker)
                {
                    break;
                }

                if(marker%2==1)
                {
                    ++number;
                }

                last_divisor = i/marker;

                if (last_divisor==marker)
                {
                    break;
                }
                
                if(last_divisor%2==1)
                {
                    ++number;
                }

                
                
                
                marker += step;

                
            }
            else{
                ++marker;
                ++step;
            }
        }



        if(number%2==1)
        {
            ++count;
        }
    }

    return count;
}

int main() {
    ULL L = 5;
    ULL R = 10;
    std::cout << odd_isReal(L, R) << '\n'; // Output: 2
    return 0;
}