#include <iostream>
// #define LOG(x) std::cout << x << std::endl
struct Entity
{
  static  int x,y;
  void Print()
  {
    std::cout << x << "," << y << std::endl;
  }
};
int Entity::x;
int Entity::y;
int main()
{
  Entity e;
  e.x = 2;
  e.y = 3;

  // Entity e1 = {5,7}; //err if static is used in above class attr
  Entity e1;
  Entity::x = 5;
  Entity::y = 8;
  e.Print();
  e1.Print();
  std::cin.get();
}
