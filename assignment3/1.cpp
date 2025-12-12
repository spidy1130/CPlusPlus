#include<iostream>
using namespace std;
class Complex
{
    private:
      int r,i;
    public:
    void setValue(int a,int b)
    {
        r=a;
        i=b;
    }
    void print()
    {
        cout<<r<<" + "<<i<<"i";
    }
};
int main()
{
    Complex c1;
    c1.setValue(4,6);
    c1.print();
    return 0;
}