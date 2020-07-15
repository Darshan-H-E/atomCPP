#include <iostream>
#include <string>
#include <cstring>
//fix by using deep copy which is achieved by using copy constructor
class String
{
private:
  char* m_Buffer;
  unsigned int m_Size;
public:
  String(const char* string)
  {
    m_Size = strlen(string);
    m_Buffer = new char[m_Size + 1];
    memcpy(m_Buffer,string,m_Size);
    m_Buffer[m_Size] = 0;
  }

  // String(const String& other); //standard copy constructor provided by c++
  // String(const String& other) : m_Buffer(other.m_Buffer),m_Size(other.m_Size){} //our own
  // String(const String& other)
  //   {                              //our own 2nd option
  //     memcpy(this,&other,sizeof(String));
  //   }

  //NOTE: all the above comments didnt work in atom
  String(const String& other)
    :m_Size(other.m_Size)
    {
      std::cout << "copied String" <<std::endl; //for debugging that constructor is needlessly called twice
      m_Buffer = new char[m_Size + 1];
      memcpy(m_Buffer, other.m_Buffer,m_Size + 1);
    }
  // String(const String& other) = delete; //if we dont want copy constructor mimicking unique_ptr
  ~String()
  {
    delete[] m_Buffer;
  }

  char& operator[](unsigned int index)
  {
    return m_Buffer[index];
  }

  friend std::ostream& operator<<(std::ostream& stream,const String& string);
};

std::ostream& operator<<(std::ostream& stream,const String& string)   //overload of <<
{
  stream << string.m_Buffer;
  return stream;
}

// void PrintStrin(String string)
void PrintString(const String& string)
{
  // string[4] = 'd';
  std::cout << string << std::endl;
}

int main()
{
  String string = "Cherno";
  String second = string;
  second[2] = 'a';
  second.operator[](3) = 's';
  PrintString(string);
  PrintString(second);
}
