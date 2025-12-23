#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter two numbers: ";
    cin>>a>>b;
    try{
        
        if(b==0)
            throw 'a';
        c=a+b;
        cout<<"result is "<<c<<endl;
    }catch(char a)
    {
        cout<<"Divide by Zero exception\n";
    }
    cout<<"GG";
    return 0;
}