#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char number[20];
    cout<<"enter your number: ";
    cin.getline(number,20);
    try{
        
        if(strlen(number)!=10)
         throw 1;
    }catch(int a)
    {
        cout<<"invalid number\n";
    }
    return 0;
}