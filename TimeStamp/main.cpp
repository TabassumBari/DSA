#include <iostream>
#include"TimeStamp.h"
#include"TimeStamp.cpp"
using namespace std;

class TimeStamp{
private:
    int seconds,minutes,hours;
public:
    TimeStamp(int s=0,int m=0,int h=0)
    {
        seconds=s;
        minutes=m;
        hours=h;



    }
    void print(){
    cout<<hours<<":"<<minutes<<":"<<seconds<<endl;
    }
bool operator==(const TimeStamp& time2)
{
    return (seconds==time2.seconds&& minutes==time2.minutes&& hours==time2.hours);

}
};



int main()
{
    TimeStamp time[5]={ TimeStamp(23,34,23),TimeStamp(02,13,13),TimeStamp(12,45,43),TimeStamp(17,36,26),TimeStamp(20,02,52)};

    //delete 25 36 17
    for(int i=0;i<5;i++)
    {
        if(time[i]==TimeStamp(17,36,25))
        {
            time[i]=TimeStamp();
            break;
        }

    }

    //print the list
    for(int i=0;i<5;i++)
    {
        if(time[i].print)
    {
       time[i].print();
    }

    }


return 0;

}
