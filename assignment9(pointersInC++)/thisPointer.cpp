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
};
int main()
{
    Complex c1;
    c1.setV(2,3);
    c1.display();
    return 0;
}