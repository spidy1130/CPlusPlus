#include<iostream>
using namespace std;
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
        operator int()
        {
            return r;
        }
        void display()
        {
            cout<<"Dollar is "<<r<<endl;
        }
};
int main()
{
 int x = 50;
Dollar d;
d = x;
d.display();
 return 0;
}