#include <iostream>
#include <string>


class Entity
{
public:
  void PrintEntity(const Entity& e);
  int x,y;

  Entity(int x , int y)
  {
    // Entity* const e = this; //it is the def of this
    this->x = x;
    (*this).y = y;
    PrintEntity(*this);
    //incase of dereferencing it would return
                      //Entity& e = *this;
                      //note: this is very basic covered in reference video
  }

  int GetX() const
  {
    // const Entity* e = this;   //def of this bcoz of GetX() const //bcoz we dont want to modify the class
    // this->x = x;     //err: assignment of member Entity::x in read only  object
    return x;
  }
};

void PrintEntity(Entity* e)
{

}
