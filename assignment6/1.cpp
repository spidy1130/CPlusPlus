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
};
int main()
{
    Complex c1;
    int x=5;
    c1=x;
    c1.show();
    return 0;
}