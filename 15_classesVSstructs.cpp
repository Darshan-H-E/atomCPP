#include <iostream>
#define LOG(x) std::cout << x << std::endl
// #define struct class
//never use inheritence with structs(recommended)
struct Player
{
// private:
// public:
  int x,y;
  int speed = 2;

  void Move(int xa , int ya)
  {
    x += xa * speed;
    y += ya * speed;
  }
};
struct Vec2
{
  float x,y;
  void add(const Vec2& other)
  {
    x += other.x;
    y += other.y;
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
