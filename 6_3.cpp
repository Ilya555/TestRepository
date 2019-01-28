#include <iostream>
using namespace std;

class Time
{
    private:
    int hour, min, sec;
    public:
    Time():hour(0),min(0),sec(0)
    {}
    Time(int h, int m, int s)
    {
        hour = h;
        min = m;
        sec = s;
    }
    
    void showTime()
    {
        cout << hour << ':' << min << ':' << sec << endl;
    }
    
    void add(Time a, Time b)
    {
        sec = a.sec + b.sec;
        min = a.min + b.min;
        hour = a.hour + b.hour;
    }
};

int main()
{
    Time t1(5,20,20);
    Time t2(10,40,20);
    Time t3;
    t3.add(t1, t2);
    t1.showTime();
    t2.showTime();
    t3.showTime();
    return 0;
}