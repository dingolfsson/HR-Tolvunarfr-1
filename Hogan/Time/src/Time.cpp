#include "Time.h"

void Time::normalize()
{
    int s = seconds;
    int m = minutes;
    int h = hours;

    while(s < 0)
    {
        s += 60;
        m--;
    }

    while(m < 0)
    {
        m += 60;
        h--;
    }

    while(h < 0)
    {
        h = h + 24;
    }

    seconds = s % 60;
    minutes = (m + s/60) % 60;
    hours = (h + m/60 + s/3600) % 24;
}

Time :: Time()
{
    seconds = 0;
    minutes = 0;
    hours = 0;

    normalize();
}

Time::Time(int hour, int mins, int secs){

    hours = hour;
    minutes = mins;
    seconds = secs;

    normalize();
}

istream& operator >> (istream& in, Time& time){

    in >> time.hours >> time.minutes >> time.seconds;

    time.normalize();

    return in;
}

ostream& operator << (ostream& out, const Time& time){

    if(time.hours < 10 ){
        out << "0" << time.hours << ":";
    }
    else{
        out << time.hours << ":";
    }
    if(time.minutes < 10){
        out << "0" << time.minutes << ":";
    }
    else{
        out << time.minutes << ":";
    }
    if(time.seconds < 10){
        out << "0" << time.seconds;
    }
    else{
        out << time.seconds;
    }
    out << endl;

    /*out << setw(2) << setfill('0') << time.hours << ":" setw(2) << setfill('0')
    << time.minutes << ":" << setw(2) << setfill('0') << time.seconds << endl;*/

    return out;
}

Time operator + (const Time& left_side, const Time& right_side){

    Time result;

    result.hours = left_side.hours + right_side.hours;
    result.minutes = left_side.minutes + right_side.minutes;
    result.seconds = left_side.seconds + right_side.seconds;

    result.normalize();

    return result;
}

Time operator - (const Time& left_side, const Time& right_side){

    Time result;

    result.hours = left_side.hours - right_side.hours;
    result.minutes = left_side.minutes - right_side.minutes;
    result.seconds = left_side.seconds - right_side.seconds;

    result.normalize();

    return result;
}

int Time::get_total_time(){

    return hours * 3600 + minutes * 60 + seconds;
}

bool operator < ( Time& left_side, Time& right_side){

    if(left_side.get_total_time() < right_side.get_total_time()){
        return true;
    }
    return false;
}
