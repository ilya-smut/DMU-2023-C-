/*
#include <iostream>
using namespace std;
int main()
{
    int salaries[6] = {2760,2890,3200,3800,3670,4050};
    int average = 0;
    for(int i=0; i <= 5; i++){
      average = average + salaries[i]/6;
    }
    cout << "The average of the salaries is " << average;
    return 0;
}


a) The program is expected to the average of the salaries {2760,2890,3200,3800,3670,4050}. Save the file and then compile and run the program.
b) Observe that the program is compiled successfully but does not run correctly. 
c) Modify the program so that it prints out as expected. 
*/

#include <iostream>
using namespace std;
int main()
{
    int salaries[6] = {2760,2890,3200,3800,3670,4050};
    float average = 0; // We are going to do a lot of divisions, so using float instead
    for(int i=0; i <= 5; i++){
      average = average + (float)salaries[i] / 6; // For better accuracy using float is preffered
    }
    cout << "The average of the salaries is " << average;
    return 0;
}