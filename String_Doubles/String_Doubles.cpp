#include <string>
#include <iostream>

std::string doubles(std::string s){
    std::string result = s;
  
    for(int i = 1; i<size(result);++i)
    {
        if(result[i]==result[i-1])
        {
            result.erase(i-1,2);
            --i;
        }
    }
  
    return(result);
}

int main()
{
    std::string a = "abbbzz", b = "zzzzykkkd", 
            c = "abbcccdddda", d = "vvvvvoiiiiin";
    std::cout<< doubles(a)<<std::endl;
    std::cout<< doubles(b)<<std::endl;
    std::cout<< doubles(c)<<std::endl;
    std::cout<< doubles(d)<<std::endl;
}