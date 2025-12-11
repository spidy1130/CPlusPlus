#include<iostream>
using namespace std;
void swap(int&, int&);
int main()
{
    int a,b;
    cout<<"enter a:";
    cin>>a;
    cout<<"enter b:";
    cin>>b;
    swap(a,b);
    cout<<"a is "<<a<<"\nb is "<<b;
    return 0;
}
void swap(int &a,int &b)
{
    int t;
    t=a;
    a=b;
    b=t;
}