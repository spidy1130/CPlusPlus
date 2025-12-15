#include<iostream>
using namespace std;
class Complex
{
    private:
     int a,b;
    public:
     void set(int x,int y)
     {
        a=x;b=y;
     }
     void show()
     {
        cout<<a<<" + "<<b<<"i";

     }
     Complex add(Complex c)
     {
        Complex temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return temp;
     }
};
int main()
{
    Complex c1,c2,c3;
    c1.set(5,6);
    c2.set(4,8);
    c3=c1.add(c2);
    c3.show();
    return 0;
}