#include<iostream>
using namespace std;
class Complex
{
    int a,b;
    public:
        void setV(int a,int b)
        { 
            this->a=a;
            this->b=b;
        }
        void display()
        {
            cout<<"a "<<a<<"\nb "<<b<<endl;
        }
        Complex SumGreater(Complex c)
        {
            if((a+b)>(c.a + c.b))
              return *this;
            else 
                return c;
        }
};
int main()
{
    Complex c1,c2,c3;
    c1.setV(2,3);
    c2.setV(4,2);
    c3=c1.SumGreater(c2);
    c3.display();
    return 0;
}