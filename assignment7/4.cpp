#include<iostream>
using namespace std;
int main()
{
    char email[20];
    cout<<"enter your email: ";
    cin.getline(email,20);
    try{
        int j=0;
        for(int i=0;email[i];i++)
        {
            if(email[i]=='@')
            {
                j=1;break;
            }
        }
        if(j==0)
         throw 1;
    }catch(int a)
    {
        cout<<"invalid email\n";
    }
    return 0;
}