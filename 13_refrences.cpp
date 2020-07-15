#include <iostream>
#define LOG(x) std::cout << x << std::endl

void Increment(int* value)
{
  (*value)++;
}
int main()
{
  int a = 5;
  Increment(&a);
  int& ref = a;
  ref = 2;
  LOG(a);

  int b = 30;
  ref = b;
  ref = 20;
  LOG(b);           //refrences cant point to another addr after its aldready pointing to one
  std::cin.get();
}
