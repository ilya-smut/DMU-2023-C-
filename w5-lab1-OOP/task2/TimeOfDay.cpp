#include "TimeOfDay.h"
#include <iostream>

TimeOfDay::TimeOfDay(){
    hours = 10;
    minutes =  25;
    seconds = 55;
}
TimeOfDay::TimeOfDay(unsigned int ihours, unsigned int iminutes, unsigned int iseconds){
    hours = ihours;
    minutes = iminutes;
    seconds = iseconds;
}
void TimeOfDay::increment_by_second(){
    if (seconds < 59){
        seconds++;
    }
    else if (minutes < 59)
    {
        seconds = 0;
        minutes++;
    }
    else if (hours < 23){
        seconds = 0;
        minutes = 0;
        hours++;
    }
    else{
        hours = 0;
        minutes = 0;
        seconds = 0;
    }
}
void TimeOfDay::get_time(){
    std::cout << hours <<":"<<minutes<<":"<<seconds<<std::endl;
}
bool TimeOfDay::is_equal(TimeOfDay time){
    if (time.hours == hours && time.minutes == minutes && time.seconds == seconds){
        return true;
    }
    return false;
}
bool TimeOfDay::is_less_than(TimeOfDay time){
    if (time.hours < hours){
        return false;
    }
    else if(time.hours == hours && time.minutes < minutes){
        return false;
    }
    else if (time.hours == hours && time.minutes == minutes && time.seconds <= seconds){
        return false;
    }
    return true;
}
