#include <iostream>
#include <string.h>

std::string returnString(std::string name)
{
    std::string hello = "Hello, ";
    std::string howAreYou = " how are you doing today?";

    return(hello+name+howAreYou);
}


int main ()
{
    std::string a = "Vlad", b = "Danil",
    c = "Egor", d = "DOddodl";

    std::cout<<returnString(a) << '\n';
    std::cout<<returnString(b) << '\n';
    std::cout<<returnString(c) << '\n';
    std::cout<<returnString(d) << '\n';

    return (0);
}