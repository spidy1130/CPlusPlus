#include<iostream>
using namespace std;
class Complex
{
    int a,b;
    public:
        void setV(int x,int y)
        { 
            a=x;b=y;
        }
        void display()
        {
            cout<<"a "<<a<<"\nb "<<b<<endl;
        }
};
int main()
{
    Complex c1;
    Complex *p=&c1;
    p->setV(12,21);
    p->display();
    return 0;
}