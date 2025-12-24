#include<iostream>
using namespace std;
class IList
{
    int a;
    public:
        IList(int x)
        {
            a=x;
        }
};
class ABC
{
    int x;
    int y;
    IList A;
    public:
        ABC(int a, int b):x(a),y(b),A(5)
        {
            // A=5;
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