#include <vector>
#include <iostream>

std::vector<int> reverseSeq(int n) {
  std::vector<int> result(n);
  for(int i = n; i>0; --i)
    {
      result[i-1]=n-i+1;
  }
  return {result};
}

void show_vector(std::vector<int>& t)
{
    std::cout<<std::endl<<"New vector"<<std::endl;
    for(int i = 0; i<size(t); i++)
    {
        std::cout<<t[i]<<std::endl;
    }
}

int main()
{
    int a = 3, b = 6, c = 12, d = 0;

    std::vector<int> test1 = reverseSeq(a);
    std::vector<int> test2 = reverseSeq(b);
    std::vector<int> test3 = reverseSeq(c);
    std::vector<int> test4 = reverseSeq(d);

    show_vector(test1);
    show_vector(test2);
    show_vector(test3);
    show_vector(test4);
}