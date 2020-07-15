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
    int a = 2;
    int* b = new int;
    int* c = new int[50]; //200bytes

    Entity* e = new Entity[50];//new operator calls malloc
    Entity* e2 = (Entity*)malloc(sizeof(Entity));//this just allocates mem and doesnt call default constructor
    delete[] e;   //[] if not present then err at runtime: munmap_chunk(): invalid pointer
    delete e2;  //delete calls free

    delete b;
    delete[] c;
}
