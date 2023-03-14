#include "TimeOfDay.h"
#include <iostream> 

using namespace std;

int main(){
    TimeOfDay time1;
    TimeOfDay time2;
    cout << "Equal: " << time1.is_equal(time2) << endl;
    time1.get_time();
    time2.get_time();
    cout << time2.is_less_than(time1) << endl;
    for (int i = 0; i < 3368; i++){
        time1.increment_by_second();
    }
    cout << "Equal: " << time1.is_equal(time2) << endl;
    time1.get_time();
    time2.get_time();
    cout << time2.is_less_than(time1) << endl;
}