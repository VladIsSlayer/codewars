#include <iostream>
#include <string>

bool narcissistic( int value ){
  
    std::string origNumbStr;
    int degree, number = 0, numbertwice = 1, three = value;

    while(three)
    {
        origNumbStr+=three%10;
        three/=10;
    }

    degree = size(origNumbStr);

    for(int i = 0;i<degree;++i)
    {
        while(degree)
        {
            numbertwice *= int(origNumbStr[i]);
            --degree;
        }
        degree = size(origNumbStr);
        number+=numbertwice;
        numbertwice=1;
    }

    return(number==value);
  
  
}


int main(void)
{
    int a = 125, b = 325, cа = 153, d = 2343;
    std::cout << narcissistic(a);
    std::cout << narcissistic(b);
    std::cout << narcissistic(cа);
    std::cout << narcissistic(d);
    return 0;
}