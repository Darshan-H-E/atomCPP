#include <iostream>
#include <string>
#include <cstring>

void PrintString(const std::string& string) // a promise to not modify the passed string by reference, remove const to modify it.
{
  string += "boi";
  std::cout << string << std::endl;
}
int main()
{
const char* name = "darshan";
std::cout << name << std::endl;

char name2[5] = {'d', 'a', 'd', '\0'};
std::cout << strlen(name2) << std::endl

// std::string name3 = "cherno" + "hello"; //err
std::string name3 = std::string("cherno") + "australia";
name3 += "hello";
PrintString(name3);
std::cout << name3 << std::endl;
bool contains = name3.find("no") != std::string::npos;//not found position //here the expression returns 1 bcoz it exists and is not true
printf("%d",contains);
}
