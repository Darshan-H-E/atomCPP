#include <iostream>
#include <string>
#include <cstring>

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
    // for(int i = 0; i < m_Size; i++) m_Buffer[i] = string[i];
    memcpy(m_Buffer,string,m_Size);
    m_Buffer[m_Size] = 0;
  }

  ~String()
  {
    delete[] m_Buffer;
  }

  char& operator[](unsigned int index)    //overload of []
  {
    return m_Buffer[index];
  }

  friend std::ostream& operator<<(std::ostream& stream,const String& string);
  // char* GetBuffer() const { return m_Buffer;}
};

std::ostream& operator<<(std::ostream& stream,const String& string)   //overload of <<
{
  // stream << string.GetBuffer();
  stream << string.m_Buffer;  //private members of class can be accessed if the current scope is a friend of that class
  return stream;
}

int main()
{
  String string = "Cherno";    //what happens is a shallow copy where the ptrs of the class are copied
  String second = string;     //string and second are pointing to the same mem addr hence there r 2 destructors trying to free the same mem hence the prgm crashes at runtime
  second[2] = 'a';
  second.operator[](3) = 's';
  std::cout << string << " "<< second << std::endl;
}
