#include <iostream>
#include <string>

std::string returnString(std::string &name)
{
    static const std::string hello = "Hello, ";
    static const std::string howAreYou = " how are you doing today?";

    return(hello+std::move(name)+howAreYou);
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