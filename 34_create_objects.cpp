#include <iostream>
#include <string>

using String = std::string;

class Entity
{
private:
  String m_Name;
public:
  Entity() : m_Name("Unknown") {}
  Entity(const String& name) : m_Name(name) {}

  const String& GetName() const { return m_Name; }
};

int main()
{
  //stack bois which get destroyed at the end of scope
  Entity entity; //created on stack and it calls the default constructor
  std::cout << entity.GetName() << std::endl;

  Entity entity1("Charno");
  Entity entity2 = Entity("CHERNO"); //fastest way to create the obj

  Entity* e;
  {
     Entity entity3 = Entity("Darshan");
     e = &entity3;
  }
  std::cout << (*e).GetName() << std::endl;
  //heap objs
  Entity* entity4 = new Entity("Charno");
  delete entity4;
}
