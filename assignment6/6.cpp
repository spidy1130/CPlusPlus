#include<iostream>
using namespace std;
class Time
{
    int m;
    public:
        Time()
        {

        }
        Time(int n)
        {
            m=n;
        }
        void display()
        {
            cout<<"minute: "<<m<<endl;
        }
};
int main()
{
 int duration;
 cout<<"Enter time duration in minutes";
 cin>>duration;
 Time t1 = duration;
 t1.display();
 return 0;
}
