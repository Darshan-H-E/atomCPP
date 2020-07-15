#include <iostream>
//const is a fake keyword
//its like a promise which can be broken
int main()
{
  const int a = 5;
   // a = 2; //err: assignment of read-only variable
   int* b = new int;
   *b = 3;
   b = (int*)&a;  //typecast from const int* to int* breaks the promise and often crashes but here np
   std::cout << *b << std::endl;

   const int* c = new int;
   // *c = 4;  //err:assignment of read-only location
   c = &a;  //no err when changing the pointer to point to another location of same type or else cast it
   std::cout << *c << std::endl;

   int const* e = new int; // int const* == const int*
   // *e = 4;                  //err: assignment of rom location *e
   e = (int*)&a;
    std::cout << *e << std::endl;

    int* const d = new int; //now u can assign the content but not the pointer
   *d = 4;                  //opp of above examples
   // d = (int*)&a      //error : assignment of read only variable
    std::cout << *d << std::endl;

    const int* const f = new int; // u can neither change the location nor the content
    // *f = 10; //err: assignment of read only location *(const int*)f
    // f = &a;  //err: assignment of read only variable f
    std::cout << *f << std::endl; //output = 0
}

//const int* --> addr can be modified
//int* const --> content can be mod
