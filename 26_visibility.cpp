#include <iostream>

class Entity
{
private://only Entity class and its friend can access private
  int X,Y;
protected://only Entity and its subclasses can access
  int Z;
public:
  Entity()
  {
    X = 0;
    Z = 1;
  }
};

class Player : public Entity
{
public:
  Player()
  {
    X = 3;
    Z++;
  }
};

int main()
{
  Entity e;
  e.X = 3;
  e.Z = 5;
  std::cin.get();
}
