#include<iostream>
using namespace std;
class Invent1
{
    float x,y;
    public:
        Invent1()
        {}
        Invent1(int m,int n)
        {
            x=m;y=n;
        }
        float get1()
        {
            return x;
        }
        float get2()
        {
            return y;
        }
        operator float()
        {
            return x;
        }
};
class Invent2
{
    float x,y;
    public:
        Invent2()
        {}
        Invent2(float m,float n)
        {
            x=m;y=n;
        }
        Invent2(Invent1 i)
        {
            x=i.get1();
            y=i.get2();
        }
        float get1()
        {
            return x;
        }
        float get2()
        {
            return y;
        }
        operator float()
        {
            return x;
        }
};
int main()
{
 Invent1 s1(4,5);
 Invent2 d1;
 float tv;
 tv=s1;
 d1=s1;
 return 0;
}