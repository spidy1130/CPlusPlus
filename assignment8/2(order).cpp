#include<iostream>
using namespace std;
class ABC
{
    int x,y;
    public:
        ABC(int a, int b):x(printf("1\n")),y(printf("2\n"))
        {
            printf("3\n");
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