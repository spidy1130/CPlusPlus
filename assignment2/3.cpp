#include<iostream>
using namespace std;
void power(int ,int );
int main()
{
    int a,b;
    cout<<"enter the base value and power";
    cin>>a>>b;
    power(a,b);
    return 0;
}
void power(int a,int b)
{
    int x=1;
    for(int i=1;i<=b;i++)
    {
        x=x*a;
    }
    cout<<a<<" to the power of "<<b<<" is "<<x;
}