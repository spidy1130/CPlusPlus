#include<iostream>
using namespace std;
class B;
class A
{
    int x;
    public:
        void setX(int n)
        {
            x=n;
        }
        friend void Print(B &,A &);
};
class B
{
    int y;
    public:
        void setY(int n)
        {
            y=n;
        }
        friend void Print(B &,A &);
};
void Print(B &b,A &a)
{
    cout<<"X is "<<a.x<<"\ny is "<<b.y;
}
int main()
{
    A a;
    B b;
    a.setX(8);
    b.setY(9);
    Print(b,a);
    return 0;
}