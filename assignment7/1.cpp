#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter two numbers: ";
    cin>>a>>b;
    try{
        if(a==0&&b==0)
            throw 1;
        if(b==0)
            throw 'a';
        if(b==1)
            throw "halchal";
        c=a+b;
        cout<<"result is "<<c<<endl;
    }catch(int a)
    {
        cout<<"agar dono 0 hi dena hai to add kyu kar rhe hai sir ;(\n";
    }
    catch(char a)
    {
        cout<<"bhai math sikh le, agar kisi no. me 0 add karenge to wahi no. ayega ;)\n";
    }
    catch(...)
    {
        cout<<"bhai increament kar le :)\n";
    }
    cout<<"bye bye exception:";
    return 0;
}