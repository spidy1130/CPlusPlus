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
        ~Complex()
        {
            delete(this);
        }
};
void input(Complex *ptr)
{
    int *a=new int;
    int *b=new int;
    cout<<"enter two values: ";
    cin>>*a>>*b;
    ptr->setV(*a,*b);
    delete(a,b);

}
int main()
{
    Complex *p= new Complex;
    p->setV(12,21);
    p->display();
    Complex *ptr=new Complex();
    input(ptr);
    ptr->display();
    return 0;
}