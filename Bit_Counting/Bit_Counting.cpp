#include <iostream>





unsigned int countBits(unsigned long long n){
    unsigned int numbOfUnits = 0;

    /*
    3 = 11; => 3%2=1(++numb), 1%2=1 (++numb) => numb =2(+)
    2 = 10; => 2%2=0,         1%2=1 (++numb) => numb =1(=)
    */

    while(n>0)
    {
        // Проверяем последний бит: если единица, увеличиваем счётчик
        numbOfUnits += n & 1;
        
        // Сдвигаем число вправо на 1 бит (эквивалент делению на 2)
        n >>= 1;
    }

    return numbOfUnits;
}


int main ()
{
    unsigned long long a = 4, b = 1 , c = 3, d = 132311312;
    std::cout << countBits(a) << '\n';
    std::cout << countBits(b) << '\n';
    std::cout << countBits(c) << '\n';
    std::cout << countBits(d) << '\n';
}