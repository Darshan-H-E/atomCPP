#include <iostream>

class Entity
{
public:
  float X,Y;  //4+4 bytes

  void Move(float xa, float ya)
  {
    X += xa;
    Y += ya;
  }
};

class Player : public Entity    //now this class is of both Entity and Player types
{
public:
  const char* Name; //4 bytes on 32-bit machine
  void Printname()
  {

  }
};

int main()
{
  std::cout << sizeof(Entity) << std::endl;
  std::cout << sizeof(Player) <<std::endl;
  Player player;
  player.Move(5,5);
  player.X = 8;
  player.Printname();
  player.Name = "Darshan";
  std::cin.get();
}
