#include <iostream>
#include <string>

class Entity
{
private:
  int* m_A, *m_B; //this is how to declare 2 ptrs(of type int) on same line
  int m_X, m_Y;
  int* m_Z;
  mutable int var;
public:         //the following works only in class
  int GetX() const   //a promise that the following meth is not going to modify the class
  {
      // m_X = 3;  //err: assignment of member "Entity::mX" in read only object
      var = 2; //no err bcoz var is marked mutable
      return m_X;
  }
  void const SetX(int x)
  {
    m_X = x;
  }

  const int* const GetZ() const   //const int* --> returning a ptr that cannot be modified
  {                               //const Get_Z() --> contents of ptr cant be modified
    return m_Z;                  // const {}      --> body of Get_Z() will not modify the class
  }
};

void PrintEntity(const Entity& e) //const Entity& --> inorder to not copy a rom object(which will be slow) but to pass it by reference
{
  // e = nullptr;    //no err if the arg is written as const Entity* e
  std::cout << e.GetX() << std::endl;   //no err if arg is written as const Entity& e
}

int main()
{
  Entity e;
  PrintEntity(e);
}
