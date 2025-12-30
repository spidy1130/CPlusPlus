#include<iostream>
using namespace std;
class Base
{
    public:
    Base()
    {
        cout<<"Base Constructor called\n";
    }
};
class Derived: public Base
{
    public:
    Derived()
    {
        cout<<"Derived Constructor called\n";
    }
};
int main()
{
    Base *b;
    Derived *d;
    Base b1;
    Derived d1;
    b=&b1;//valid
    d=&d1;//valid

    b=&d1;//valid
    // d=&b1;  //error
    return 0;
}