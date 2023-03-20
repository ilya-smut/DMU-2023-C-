/*
#include <iostream>
using namespace std;

#define NEWLINE '\n'
#define SPACE ' '

int main() {

  int character;
  int count = 0;
  cout << "\nEnter a sentence of any length!\n";
  character = getchar();

  while (character != NEWLINE) {
     while ((character != SPACE)  || (character != NEWLINE)) {
        count++;
        character = getchar();
     }

  cout << count << " ";
  count = 0;

  if (character != NEWLINE) {
     character = getchar();
     }
  }

  return 0;

}


a) The program is expected to print the length of each word of a sentence that user entered. Save the file and then compile and run the program.
b) Observe that the program is compiled successfully but does not run correctly. (Hint: ~(P AND Q) = ~P OR ~Q where ~ denotes NOT function.)
c) Modify the program so that it prints out as expected.

*/

#include <iostream>
using namespace std;

#define NEWLINE '\n'
#define SPACE ' '

int main() {

  int character;
  int count = 0;
  cout << "\nEnter a sentence of any length!\n";
  character = getchar();

  while (character != NEWLINE) {
     while ((character != SPACE)  && (character != NEWLINE)) { // should be &&,  not ||
        count++;
        character = getchar();
     }

  cout << count << " ";
  count = 0;

  if (character != NEWLINE) {
     character = getchar();
     }
  }

  return 0;

}