#include <iostream>
#define LOG(x) std::cout << x << std::endl

class Player
{
public:
  int x,y;
  int speed = 2;

  void Move(int xa , int ya)
  {
    x += xa * speed;
    y += ya * speed;
  }
};
// void Move(Player& player, int xa , int ya)
// {
//   player.x += xa * player.speed;
//   player.y += ya * player.speed;
// }
int main()
{
  Player player;
  player.x = 5;
  player.Move(1,-1);
  LOG(player.x);
  return 0;
}
