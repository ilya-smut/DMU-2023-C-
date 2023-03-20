/*
#include <iostream>
using namespace std;

int main()
{
    int numbers[3] = {17,28,42};
    int average = 0;
    for(int i=0; i <= 2; i++){
      average = numbers[0] + numbers[1] + numbers[2]/3;
    }
    cout << "The average of the salaries is " << average;
    return 0;
}


a) The program is expected to print the average of {17,28,42}. Save the file and then compile and run the program.
b) Observe that the program is compiled successfully but does not run correctly. 
c) Modify the program so that it prints out as expected. 

*/

#include <iostream>
using namespace std;

int main()
{
    int numbers[3] = {17,28,42};
    float average = 0.0;
    for(int i=0; i <= 2; i++){
      average = average + (float)numbers[i]/3;
    }
    cout << "The average of the salaries is " << average;
    return 0;
}