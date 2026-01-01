#include<iostream>
using namespace std;
class A
{
    public:
        A()
        {
            cout<<"A() called:\n";
        }
};
class B: virtual public A
{
    public:
        B():A()
        {
            cout<<"B() called:\n";

        }

};
class  C:virtual public A
{
    public:
        C():A()
        {
            cout<<"C() called:\n";
        }
};
class D:public B,public C
{
    public:
        D():B(),C()
        {
            cout<<"D() called:\n";
        }

};
int main()
{
    D d;
    return 0;
}