#include<iostream>
using namespace std;
class Shape//we cant make object of this class(abstract class)
{
    public:
        virtual void area()=0;//pure virtual function
};
class Triangle:public Shape
{
    public:
    void area()
    {
        cout<<"area of triangle:\n";
    }
};
class Rectangle:public Shape
{
    public:
        void area()
        {
            cout<<"area of rectangle :\n";
        }
};
int main()
{
    Triangle t;
    t.area();
    return 0;
}