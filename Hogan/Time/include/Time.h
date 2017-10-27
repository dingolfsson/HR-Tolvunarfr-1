#ifndef TIME_H
#define TIME_H

#include <iostream>

using namespace std;

class Time {
    public:
        Time();
        Time(int secs, int mins, int hour);
        friend istream& operator >> (istream& in, Time& time);
        friend ostream& operator << (ostream& out, const Time& time);
        friend Time operator + (const Time& left_side, const Time& right_side);
        friend Time operator - (const Time& left_side, const Time& right_side);
        int get_total_time();
        friend bool operator < ( Time& left_side, Time& right_side);

    private:
        void normalize();

        int seconds;
        int minutes;
        int hours;
};

#endif // TIME_H
