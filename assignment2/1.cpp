#include<iostream>
using namespace std;
void prime(int &);
int main()
{
    int a;
    cout<<"enter a no to check it is prime or not";
    cin>>a;
    prime(a);
    return 0;
}
void prime(int &a)
{
    int i;
    for( i=2;i<(a/2);i++)
    {
        if(a%i==0)
        {
            i=1;
            break;
        }

    }
    if(a==0||a==1)
      cout<<a<<" is not a prime no.";
    else if(i==1)
      cout<<a<<" is not a prime no.";
    else
     cout<<a<<" is a prime no.";
}