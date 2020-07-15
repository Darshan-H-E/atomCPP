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
    std::shared_ptr<Entity> s0;
    {
      std::shared_ptr<Entity> sharedEntity = std::make_shared<Entity>();// alots mem for control block where it stores that "reference count" regarding how many ptrs r pointing towards same mem
      std::shared_ptr<Entity> s1 = sharedEntity;
      s0 = sharedEntity;
    }//here both sharedEntity and s1 die
  }//here s0 dies and hence the Entity object
}//when all the references are gone(shared_ptrs) thats when the underlying entity gets deleted

   // std::shared_ptr<Entity> sharedEntity(new Entity());    //not preferred
  //the above line is not preferred bcoz using "new" directly alots mem for Entity then passes it to shared_ptr hence two allocations by new and then shared-ptr instead of one
