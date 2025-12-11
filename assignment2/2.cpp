#include<iostream>
using namespace std;
void fndgrt(int &);
int main()
{
    int a;
    cout<<"enter a no.";
    cin>>a;
    fndgrt(a);
    return 0;
}
void fndgrt(int &p)
{
    int a=p;
    int i,k=-1;
   while(a!=0)
    {
       i=a%10;
       a=a/10;
       if(k<=i)
        k=i;
    }
    cout<<"greatest digit in "<<p<<" is "<<k;
}