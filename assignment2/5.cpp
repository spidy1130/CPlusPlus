#include<iostream>
using namespace std;
int fib(int n)
{
    int a=0,b=1,sum=0;
    if(n==0)
    {
        return 1;
    }
    if(n==1)
      return 2;
    for(int i=3;sum<=n;i++)
    {
        sum=a+b;
        a=b;
        b=sum;
        if(sum==n)
         return i;
    }
    return 0;
}
int main()
{
    int n;
    cout<<"enter no:";
    cin>>n;
    int i=fib(n);
    if(i)
    {
        cout<<"It is in fibbonici at "<<i<<endl;

    }
    else 
      cout<<"Not in series.";
       
    return 0;

}
