#include<iostream>
using namespace std;
int main()
{
    int a,c;
    char b;
    cout<<"enter expression of two Numbers(a+b or a*b): ";
    cin>>a>>b>>c;
    try{
        if(b=='+')
          cout<<a+c<<endl;
        else if(b=='-')
          cout<<a-c<<endl;
        else if(b=='*')
          cout<<a*c<<endl;
        else if(b=='/')
        {
            if(c==0)
                throw 'a';
          cout<<a/c<<endl;
        }
        else
          throw 1;
    }catch(int a)
    {
        cout<<"operator cominng soon!\n";
    }
    catch(...)
    {
        cout<<"divide by zero exception\n";
    }
    return 0;

}