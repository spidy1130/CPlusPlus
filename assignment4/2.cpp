#include<iostream>
using namespace std;
class Time
{
    private:
     int s,m,h;
    public:
     void setTime(int a,int b,int c)
     {
        h=a;m=b;s=c;
     }
     void showTime()
     {
        cout<<h<<":"<<m<<":"<<s<<endl;
     }
     void normalize()
     {
        if(s>=60)
        {
            m=m+s/60;
            s=s%60;
        }
        if(m>=60)
        {
            h=h+m/60;
            m=m%60;
        }
        if(h>12)
        {
            h=h%12;
        }
     }
     Time add(Time t)
     {
        Time temp;
        temp.h=h+t.h;
        temp.m=m+t.m;
        temp.s=s+t.s;
        return temp;
     }
};
int main()
{
    Time t1,t2,t3;
    t1.setTime(7,58,63);
    t2.setTime(15,69,23);
    t1.showTime();
    t1.normalize();
    t1.showTime();
    t2.normalize();
    t3=t1.add(t2);
    t3.showTime();
    return 0;
}