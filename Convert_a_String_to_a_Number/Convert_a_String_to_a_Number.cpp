#include <iostream>
#include <string>

int string_to_number(const std::string& s) {
    int result = 0;
    bool flagNegative = 0;
    size_t i = 0;

    if (s[0]=='-') 
    {
        ++i;
        flagNegative = 1;
    }

    while(i<size(s))
    {
        result=10*result+int(int(s[i]-'0'));
        ++i;
    }

    if(flagNegative) result=~result+1;
    return (result);
}


int main()
{
    std::string a = "-123", b = "321312", 
    c = "312312", d = "0", e = "";
    std::cout << string_to_number(a) << '\n';
    std::cout << string_to_number(b) << '\n';
    std::cout << string_to_number(c) << '\n';
    std::cout << string_to_number(d) << '\n';
    std::cout << string_to_number(e) << '\n';
}