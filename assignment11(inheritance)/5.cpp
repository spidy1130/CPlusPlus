#include<iostream>
using namespace std;
class Base
{
    public:
    virtual void printBase()
    {
        cout<<"Base class\n";
    }
};
class Derived: public Base
{
    public:
    void printDerived()
    {
        cout<<"Derived class called\n";
    }
    void printBase()
    {
        cout<<"modified Base class\n";
    }
};
int main()
{
    Base *b;
    Derived *d;
    Base b1;
    Derived d1;
    b=&b1;//valid
    b->printBase();
    d=&d1;//valid
    d->printBase();
    d->printDerived();
    b=&d1;//valid
    b->printBase();
    // d=&b1;  //error
    return 0;
}