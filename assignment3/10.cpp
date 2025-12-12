#include<iostream>
using namespace std;
class Area
{
    public:
    int areaOfSqr(int s)
    {
        return s*s;
    }
    int areaOfRectangle(int l,int b)
    {
        return l*b;
    }
    int areaOfCircle(int r)
    {
        return 3.14*r*r;
    }

};
int main()
{
    Area a1;
    cout<<"area of circle is "<<a1.areaOfCircle(22)<<endl;
    cout<<"area of square is "<<a1.areaOfSqr(4)<<endl;
    cout<<"area of rectangle is "<<a1.areaOfRectangle(22,32)<<endl;
    return 0;
}