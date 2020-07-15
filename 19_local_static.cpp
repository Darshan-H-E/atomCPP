#include <iostream>

int j = 10; //global scope
void Function()
{
  int i = 0;  //local
  i++;
  std::cout << i << std::endl;
}
void func2()
{
  j++;
  std::cout << j << std::endl;
}
void func3()
{
  static int k = 30;  //static local
  k++;
  std::cout << k << std::endl;
}

class Singleton //should have only one instance
{
private:
  static Singleton* s_instance;
public:
  static Singleton& Get() {return *s_instance;}

  void Hello(){}
};

Singleton* Singleton::s_instance = nullptr;
////////////////////////////
class Singleton2    //eff way to replace above class
{
public:
  static Singleton2& Get()
  {
    static Singleton2 instance2;
    return instance2;
  }
  void Hello2(){}
};
int main()
{
  Function();
  Function();
  Function();
  func2();
  j = 20;
   func2();
  func3();
  func3();
  // k = 10; //errror trying to access a var out of scope
  func3();
  Singleton::Get().Hello();
  Singleton2::Get().Hello2();
  return 0;
}
