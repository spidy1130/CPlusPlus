#include<iostream>
using namespace std;
class Rupee
{
    int r;
    public:
        Rupee()
        {}
        Rupee(int n)
        {
            r=n;
        }
        int getR()
        {
            return r;
        }
        operator int()
        {
            return r;
        }
        void display()
        {
            cout<<"Rupee is "<<r<<endl;
        }
};
class Dollar
{
    int r;
    public:
        Dollar()
        {}
        Dollar(int n)
        {
            r=n;
        }
        Dollar(Rupee r)
        {
            this->r=r.getR()*100;
        }
        operator int()
        {
            return r;
        }
        void display()
        {
            cout<<"Dollar is "<<r<<endl;
        }
        operator Rupee()
        {
            return r/100;
        }
};
int main()
{
    Rupee r = 23;
    Dollar d = r; // Rupee to Dollar conversion
    d.display();
    r.display();
    r = d; // Dollar to Rupee Conversion
    d.display();
    r.display();
    return 0;
}