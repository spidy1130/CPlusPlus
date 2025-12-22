#include<iostream>
using namespace std;
class Complex
{
    int real,img;
    public:
        Complex()
        { }
        Complex(int n)
        {
            real=n;img=n;
        }
        void show()
        {
            cout<<real<<" + "<<img<<"i\n";
        }
        operator int()
        {
            return real;
        }
};
int main()
{
    Complex c1;
    int x=5,y;
    c1=x;
    c1.show();
    y=c1;
    cout<<y;
    return 0;
}