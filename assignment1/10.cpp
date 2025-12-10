#include<iostream>
using namespace std;
int main()
{
    int a[10],sum=0;
    cout<<"enter 10 numbers ";
    for(int i=0;i<=9;i++)
    {
     cin>> (a[i]);
     sum=sum + a[i];
    }
    cout<<"sum of numbers = "<<sum;
    return 0;
}