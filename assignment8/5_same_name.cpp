#include<iostream>
using namespace std;
class ABC
{
    int x;
    int y;
    public:
        ABC(int x, int y):x(x),y(y)
        {
           
        }
        void display()
        {
            cout<<x<<" "<<y<<endl;
        }
};
int main()
{
    ABC a1(2,3);
    a1.display();
    return 0;
}