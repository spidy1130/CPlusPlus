#include<iostream>
using namespace std;
bool IsValidEmail(string str)
{
    int atOffset=-1,dotOffset=-1;
    int length=str.length();
    for(int i=0;str[i];i++)
    {
        if(str[i]=='@')
          atOffset=i;
        
    }
    dotOffset=str.find("gmail.com");
    //cout<<"  "<<dotOffset<<endl;
    if(atOffset==-1||dotOffset==-1)
       return 0;
    if(dotOffset<atOffset)
      return 0;
    return 1;
}
int main()
{
    string email;
    cout<<"enter your email: ";
    cin>>email;
    try
    {
        if(IsValidEmail(email))
          cout<<"valid email\n";
        else
            throw 1;
    }
    catch(int a)
    {
        cout<<"exception cought....\n Invalid EmailId:";
    }
    return 0;

}