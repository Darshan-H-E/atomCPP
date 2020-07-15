#include <iostream>

class Entity
{
public:
  float X,Y;
  void Print()
  {
    std::cout << X << "," << Y << std::endl;
  }
};

class Entity1
{
public:
  float A,B;
  void Init()
  {
    A = 0.0f;
    B = 0.0f;
  }
  void Print()
  {
    //print same as above
  }
};

class Entity2
{
public:
  float C,D;
  Entity2(){
    C = D = 0.0f;
  }
  Entity2(float c, float d)
  {
    C = c;
    D = d;
  }
  void Print()
  {
     std::cout <<C<< "," <<D<< std::endl;
  }
};
class Log
{
// private:
  // Log(){}    to make sure an instance of class cant be created
public:
  Log() = delete; //to delete the default constructor so as to ditto above
  static void Write()
  {
  }
};

int main()
{
  Log::Write();
  // Log l; //error

  Entity e;
  // std::cout << e.X << std::endl;  //cant access uninitialized values hence a need for constructors
  e.Print();

  Entity1 e1;
  e1.Init();  //has to be called everytime u make an instance
  // e1.Print();

  Entity2 e2(5,3);
  e2.Print();

  std::cin.get();
}
