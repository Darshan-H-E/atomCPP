#include <iostream>
#include <string>
//smart ptrs are used to automate new and delete process
//they r wrapper around a real raw ptr
//unique ptr is a scoped ptr
//so do not copy a unique ptr
#include <memory>

class Entity
{
public:
  Entity()
  {
    std::cout << "Created Entity" << std::endl;
  }
  ~Entity()
  {
    std::cout << "Destroyed Entity" << std::endl;
  }
  void Print(){}
};
int main()
{
  {
    // std::unique_ptr<Entity> entity = new Entity();//err: bcoz the unique_ptr constructor is marked explicit hence no implicit conversions
    std::unique_ptr<Entity> entity(new Entity());
    // std::unique_ptr<Entity> entity = std::make_unique<Entity>(); //preferred due to exception safety
    entity -> Print();
    // std::unique_ptr<Entity> e0 = entity; //err bcoz u r trying to cpy a unique_ptr whose copy constructor and copy assignment operator are always deleted
  }
}
