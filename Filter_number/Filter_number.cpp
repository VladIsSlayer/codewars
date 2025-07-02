#include <string>
#include <iostream>
#include <cctype>
#include <climits>
#include <string_view>

long long filter_string(const std::string &value) noexcept
{
  if (value.empty()) return 0;


  std::string numberString;
  constexpr long long max_safe = LLONG_MAX / 10;
  constexpr int max_digit = LLONG_MAX % 10;

  long long resultNumber = 0;
    
    
  for(unsigned char i : value)
    {
      if (!std::isdigit(i)) continue;

      const int digit = i - '0';

      if (resultNumber > max_safe || (resultNumber == max_safe && digit > max_digit)) 
      {
        // Обработка переполнения
        return LLONG_MAX; // Или другое значение ошибки
      }
      
      resultNumber = 10 * resultNumber + digit; 
  
    }
  
    return resultNumber; // complete this function :)
}

int main()
{
    std::string a = "1j23j4o5", b = "1ninfrf1", c = "i232432ii23j4", d = "";

    std::cout<<filter_string(a)<<'\n';
    std::cout<<filter_string(b)<<'\n';
    std::cout<<filter_string(d)<<'\n';
    std::cout<<filter_string(c)<<'\n';

    return(0);
}