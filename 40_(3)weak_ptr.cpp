#include <iostream>
#include <string>
#include <memory>
//if u like sharing, use share ptrs
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
    std::weak_ptr<Entity> w0; //weak_ptr doesnt increase the reference_count
    {
    std::shared_ptr<Entity> sharedEntity = std::make_shared<Entity>();
    w0 = sharedEntity;
    }//everything gets Destroyed here
    //here the w0 is pointing to invalid entity and u can ask it r u valid?
  }
}

// preference-order
//unique
//shared_ptr
