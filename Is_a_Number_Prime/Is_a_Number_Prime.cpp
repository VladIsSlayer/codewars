#include <iostream>
#include <math.h>

bool isPrime(int num) {

    if(num<2) return false;
  
    int i = 2, testi = sqrt(num)+1;
    while(i<int((sqrt(num)+1)))
    {
        if(num%i==0) return false;
        i++;
    }
    return true;
}


int main()
{
    int a = 1, b = 2, c = -1, d = 121, e = 23; 

    std::cout<<isPrime(a)<<std::endl;
    std::cout<<isPrime(b)<<std::endl;
    std::cout<<isPrime(c)<<std::endl;
    std::cout<<isPrime(d)<<std::endl;
    std::cout<<isPrime(e)<<std::endl;


}