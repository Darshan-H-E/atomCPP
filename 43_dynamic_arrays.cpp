#include <iostream>
#include <vector>

struct Vertex
{
  float x,y,z;
};

std::ostream& operator<<(std::ostream& stream, const Vertex& vertex)
{
  stream << vertex.x << ", " << vertex.y << ", " << vertex.z;
  return stream;
}

void Function(const std::vector<Vertex>& vertices)  //pass vector by ref always
{

}

int main()
{
  // Vertex vertices[5];
  // Vertex* newVertices = new Vertex[5];
  // std::vector<int> integers;
  std::vector<Vertex> vertices3;

  vertices3.push_back({1,2,3});
  vertices3.push_back({4,5,6});

  Function(vertices3);

  for(long unsigned int i = 0; i < vertices3.size(); i++)
    std::cout << vertices3[i] << std::endl;

  vertices3.erase(vertices3.begin() + 1); //erase the 2nd element //note:the param is an iterator---->vertices3.begin()

  for(Vertex& v: vertices3)
    std::cout << v << std::endl;

  vertices3.clear();  //clear the list of vertices --> arr size = 0
}
