#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(int argc, char *argv[])
{
  char b1[4], b2[4];
  strcpy (b1, "one");
  strcpy (b2, "two");
  cout << "b1 contains " << b1 << endl;
  cout << "b2 contains " << b2 << endl;
  cout << "copy argv[1] to b2 \n";
  strcpy (b2, argv[1]);
  cout << "b1 contains " << b1 << endl;
  cout << "b2 contains " << b2 << endl;
  
  return 0;
}