#include<iostream>
using namespace std;
class Time
{
    int m,h;
    public:
        Time()
        {

        }
        Time(int x,int y)
        {
            h=x;
            m=y;
        }
        void display()
        {
            cout<<"hour: "<<h<<"\nminute: "<<m<<endl;
        }
        int getH()
        {
            return h;
        }
        int getM()
        {
            return m;
        }
};
class Minute
{
    int m;
    public:
    Minute()
    {}
    Minute(int n)
    {m=n;}
    Minute(Time t)
    {
        m=t.getM();
    }
    void display()
    {
        cout<<"minutes: "<<m<<endl;
    }
};
int main()
{
 Time t1(2,30);
 t1.display();
 Minute m1;
 m1=t1; // Fetch minute from time
 t1.display();
 m1.display();
 return 0;
}