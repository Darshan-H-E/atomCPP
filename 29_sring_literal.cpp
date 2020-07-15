#include <iostream>
#include <string>
#include <stdlib.h>
//very imp ->> string literals are always stored in read only section of memory

int main()
{
  char name[] = "Cherno"; //in order to modify the string
  name[2] = 'a'; // in asm it copies this data from read only section to another variable and sets it to 'a'.
  std::cout<< name << std::endl;

  char* name2 = "darshan"; //warning bcoz clang only compiles const char*
  char* name3 = (char*) "dad"; // fixes warning after typecast
  std::cout << name2 << "\n" << name3 << std::endl;

  const wchar_t* name4 = L"baka";
  const char16_t* name5 = u"sonna";
  const char32_t* name6 = U"masaka";
  const char* name7 = "drake";
  std::cout << name4 << " " << name5 << " " << name6 << " " << name7<< std::endl;

  // using namespace std::string_literals; //cpp 14
  // std::string name0 = "cherno"s + "hello"; // no err
  // std::string name0 = u8"cherno"s + u8"hello"; // no err
  // std::wstring name0 = L"charno"s + L"hello";
  //std::u32string name0 = U"charno"s + U"hello";

  //multiline strings
  const char* name9 = "diene\n"
    "sjie\n"
    "fjie\n";

  const char* name8 = R"(Line1
  Line2
  Line3
  Line4)";  //R---> raw
  std::cout << name8 << "\n" << name9 << std::endl;
}
