#include <iostream>
#include <array>

int main()
{
int example[5];
int* ptr = example;
for(int i = 0; i < 5; i++)
{
  example[i] = 13;
}
example[2] = 5;
*(ptr + 2) = 14;
*(int*)((char*)ptr + 8) = 6;
std::cout << example[2] << std::endl;

int* ex2 = new int[10];
//on heap
std::array<int,5> another;
std::cout << another.size() << std::endl;
}
