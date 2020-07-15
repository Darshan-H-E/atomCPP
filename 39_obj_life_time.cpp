#include <iostream>

void ManipulateStackArray(int* array)
{
  //do something
  for (int i = 0; i< 30; i++)
  {
    array[i] = i;
  }
}

int main()
{
  int arr[50];
  ManipulateStackArray(arr);
  int x = sizeof(arr) / sizeof(int);
  for(int i = 0; i < x ; i++){
    std::cout << arr[i] << std::endl;
  }
}
