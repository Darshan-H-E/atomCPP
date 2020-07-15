#include <iostream>

class Entity
{
private:
  std::string m_Name;
  int m_Score;
public:
  Entity()
    : m_Name("Unknown"), m_Score(0) //initialize the same order as they r declared
  {                                 //other wise warning: .....-[Wreorder]
    // m_Name = "Unknown";
  }

  Entity(const std::string& name)
    :m_Name(name)
  {
    // m_Name = name;
  }

  const std::string& GetName() const
  {
    return m_Name;
  }
};

int main()
{
  Entity e;
  std::cout << e.GetName() << std::endl;
}
