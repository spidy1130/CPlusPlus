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
void input(Complex *ptr)
{
    int a,b;
    cout<<"enter two values: ";
    cin>>a>>b;
    ptr->setV(a,b);

}
int main()
{
    Complex c1;
    Complex *p=&c1;
    p->setV(12,21);
    p->display();
    Complex c2;
    input(&c2);
    c2.display();
    return 0;
}