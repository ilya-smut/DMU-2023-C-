#include <iostream>
#include <cmath>

using namespace std;

/*

Standard deviation of a sample

*/


int main()
{
    float inputArray[6];
    float sum, average, result, coefficient, sum_of_squares;
    coefficient = 1.0 / 5.0;
    sum_of_squares = 0.0;

    cout << "Please, enter 6 integers: ";
    for (int i = 0; i < 6; i ++)
    {
        cin >> inputArray[i];
        sum = sum + inputArray[i];
    }

    average = (float)sum / 6.0;



    for (int i = 0; i < 6; i++)
    {
        sum_of_squares = sum_of_squares + pow((float)inputArray[i] - average, 2);
    }

    result = sqrt(coefficient * sum_of_squares);

    cout << result << endl;

}