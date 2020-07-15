#include <iostream>
#include <string>

class Entity
{
public:
  void Print() const { std::cout << "hello!" << std::endl;}
};

class ScopedPtr
{
private:
  Entity* m_Obj;
public:
  ScopedPtr(Entity* entity)
    :m_Obj(entity)
  {
  }
  ~ScopedPtr()
  {
    delete m_Obj;
  }
  // Entity* GetObject() {return m_Obj;}
  Entity* operator->()    //overload ->
  {
    return m_Obj;
  }

  const Entity* operator->() const   // incase if the ScopedPtr is declared as const
  {
    return m_Obj;
  }
};

int main()
{
  Entity e;
  Entity* ptr = &e;
  // Entity& ref = *ptr;
  // ref.Print();
  ptr->Print();   //arrow ptr reduces above 2 lines of creating a ref and accessing the members of the object pointed by a pointer

  const ScopedPtr entity = new Entity();
  // entity.GetObject()->Print();     //this is very long so lets make life easier by overloading ->
  entity->Print();
}
