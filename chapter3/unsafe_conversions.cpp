// unsafe conversions
#include <iostream>
using namespace std;

int main ()
{
  int a = 2000;
  char b = a;
  int c = b;
  cout << "a:" << a << endl;
  cout << "b:" << b << endl;
  cout << "c:" << c << endl;
  return 0;
}


// On a PC the range of char values is [–128:127], but only [0:127] can be 
// used portably because not every computer is a PC, and different computers have different ranges for
// their char values, such as [0:255].
