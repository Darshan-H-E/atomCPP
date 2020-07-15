#include <iostream>
#include <string>

class Entity
{
private:
  std::string m_Name;
  int m_Age;
public:
  Entity(const std::string& name)
    :m_Name(name), m_Age(-1){}

  Entity(int age)
    :m_Name("Unknown"),m_Age(age){}

   Entity(const std::string& name, int age) //explicit ensures that no implicit conv happens
    :m_Name(name),m_Age(age){}
};

void PrintEntity(const Entity& entity)
{
  //Printing
}

int main()
{
  Entity a("HCaern");
  Entity b(28);

  // Entity c = "Darsnao";
  Entity d = 38;
  PrintEntity(22);  //implicitly converted to Entity
  PrintEntity(std::string("Darshan"));  // converted to string and implicitly converted to Entity
  PrintEntity(Entity("CHerno"));

  Entity e(22); //explicit
  Entity f = (Entity)22; //explicit
  Entity g = Entity(22);//explicit
}
