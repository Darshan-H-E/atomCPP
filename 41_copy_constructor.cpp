#include <iostream>
#include <string>
#include <cstring>

struct Vector2
{
  float x,y;
};

int main()
{
  Vector2 a = {2,3};
  Vector2 b = a;
  b.x = 5;

  Vector2* c = new Vector2();
  Vector2* d =  &a;
  d = c;
  d->x = 5;
}
