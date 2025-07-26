#include <iostream>
#include <fstream>

using namespace std;

int main()
{
 string str1;
cout << "File name:";
cin >> str1;
   ifstream input(str1);
  if(input) 
  {
   cout << "File exists";
  }
 else 
   cout << "File not found";
}
