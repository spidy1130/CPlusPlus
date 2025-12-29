#include<iostream>
using namespace std;
class A
{
    private:
        void f1()
        {

            cout<<"private of a:\n";
        }
    protected:
        void f2()
        {

            cout<<"protected of a:\n";
        }
    public:
        A(int a)
        {

        }
        ~A()
        {
            cout<<"destructor of A\n";
        }
        void f3()
        {
            cout<<"public of a:\n";
        }
};
class Av2: public A
{
    private:
        void f4()
        {

            cout<<"private of av2:\n";
        }
    protected:
        void f5()
        {

            cout<<"protected of av2:\n";
        }
    public:
        Av2():A( 5)
        {

        }  
        ~Av2()
        {
            cout<<"destructor of Av2\n";
        }      
        void f6()
        {
            cout<<"public of av2:\n";
            f3();
            f2();
        }
};
int main()
{
    Av2 a;
    a.f6();
    return 0;
}