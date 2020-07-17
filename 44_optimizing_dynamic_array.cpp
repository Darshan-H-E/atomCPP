#include <iostream>
#include <vector>

class Vertex
{
  float x,y,z;

public:
  Vertex(float x, float y, float z)
    :x(x),y(y),z(z)
    {
    }

    Vertex(const Vertex& vertex)
      :x(vertex.x),y(vertex.y),z(vertex.z)
      {
        std::cout<< "Copied message" << std::endl;
      }
};

int main()
{
  std::vector<Vertex> vertices;
  vertices.reserve(3);  //make sure that we have enough mem to construct 3 vertex objects
  // vertices.push_back({1,2,3});
  // vertices.push_back(Vertex(7,8,9));
  // vertices.emplace_back({1,2,3}); //err: bcoz no matching fn(emplace_back) exists for brace intializer list param
  vertices.emplace_back(1,2,3); //inorder to create the object directly into mem(inplace) instead of copying from main fn
  vertices.emplace_back(4,5,6);
  vertices.emplace_back(7,8,9);
}
