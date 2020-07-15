#include <iostream>
//enums work only for integer
int a = 0;
int b =1;
int c = 2;
////////
enum Example
{
  A = 3,B = 5,C = 8
  // A,B,C  //by default A = 0 then the following values are incremented by 1
  // A = 4, B , C here B = 5, C =6
};
enum Example2 : unsigned char //type of integer can be specified
{
  D,E
};
int main()
{
  int value = b;
  Example value2 = C;

  if(value == b)
  {
    //do something
  }
  if(value2 == 3)
  {
    std::cout << value2 << std::endl;
  }
  std::cin.get();
}
