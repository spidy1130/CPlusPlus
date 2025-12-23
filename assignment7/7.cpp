#include<iostream>
#include<string.h>
using namespace std;
bool IsAlphanumeric(char ch)
{
    if((ch>='a'&& ch<='z')||(ch>='0'&& ch<='9'))
    {
        return true;
    }
    return false;
}
int main()
{
    char user_name[10];
    cout<<"enter your username: ";
    cin.getline(user_name,10);
    try{
        int j=0,k=0,l=0;
        if(strlen(user_name)<6)
         throw 1;
        for(int i=0;user_name[i];i++)
        {
            if(user_name[i]>='0'&& user_name[i]<='9')
            {
                j=1;break;
            }
        }
        if(j==0)
          throw 'a'; 
        for(int i=0;user_name[i];i++)
        {
            if(user_name[i]>='a'&& user_name[i]<='z')
            {
                k=1;break;
            }
        }
        for(int i=0;user_name[i];i++)
        {
            if(!IsAlphanumeric(user_name[i]))
            {
                l=1;break;
            }
        }
        if(l==0)
        {
            throw "aman";
        }
        if(k==0)
          throw 4.5f;
    }
    // catch(int a)
    // {
    //     cout<<"invalid username(must contain 6 or more characters)\n";
    // }
    // catch(char a)
    // {
    //     cout<<"username must contain digits:\n";
    // }
    // catch(float a)
    // {
    //     cout<<"username must contain alphabets:\n";
    // }
    catch(...)
    {
        cout<<"username must contain 6 or more letters,digits and special charcter\n";
    }
    return 0;
}