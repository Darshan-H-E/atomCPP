//static outside class
static int s_Variable = 5;

//main.cpp
#include <iostream>
// #define LOG(x) std::cout << x << std::endl
extern int s_Variable; //error

int main()
{
  std::cout << s_Variable << std::endl;
  std::cin.get();
}
