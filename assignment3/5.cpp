#include<iostream>
using namespace std;
class ReverseNumber
{
    private:
     int real,rev=0;
    void reverse()
    {
        int a=real;
        while(a)
        {
            rev=rev*10+a%10;
            a=a/10;
        }
    }
    public:
    void set(int a)
    {
        real=a;
    }
    void showReverse()
    {
        reverse();
        cout<<"no= "<<real<<endl<<"reversed= "<<rev;
    }
};
int main()
{
    ReverseNumber X;
    X.set(1234);
    X.showReverse();
    return 0;
}