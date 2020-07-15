#include <iostream>

class Entity
{
private:
  std::string m_Name;
  mutable int DebugCount = 0;
public:
  const std::string& GetName() const
  {
    DebugCount++;
    return m_Name;
  }
};

int main()
{
  const Entity e;
  e.GetName();

  int x = 8;
  auto f = [=]() mutable
  {
    x++;
    std::cout << x << std::endl;
  };
  f();
  //x=8
}
