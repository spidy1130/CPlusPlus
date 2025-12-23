#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char number[10];
    cout<<"enter your PIN: ";
    cin.getline(number,10);
    try{
        
        if(strlen(number)!=6)
         throw 1;
    }catch(int a)
    {
        cout<<"invalid PIN\n";
    }
    return 0;
}