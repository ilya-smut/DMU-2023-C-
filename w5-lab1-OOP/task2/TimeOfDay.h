#ifndef TIMEOFDAY_H
#define TIMEOFDAY_H

class TimeOfDay
{
    private:
        unsigned int hours;
        unsigned int minutes;
        unsigned int seconds;
    public:
        TimeOfDay();
        TimeOfDay(unsigned int ihours, unsigned int iminutes, unsigned int iseconds);
        void increment_by_second();
        void get_time();
        bool is_equal(TimeOfDay time);
        bool is_less_than(TimeOfDay time);
};

#endif