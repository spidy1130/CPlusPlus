#include<iostream>
#include<string>
using namespace std;
class myString
{
    char str[100];
    public:
      void operator!()
      {
        int i;
        for(i=0;str[i];i++)
        {
            if(isupper(str[i]))
            {
                str[i]=tolower(str[i]); 
            }
            else
            {
                str[i]=toupper(str[i]);
            }
        }
        str[i]='\0';
      }
      void get()
      {
        cout<<str<<endl;
      }
      void set(char *s)
      {
        int i;
        for(i=0;s[i];i++)
        {
            str[i]=s[i];
        }
        str[i]='\0';
      }
};
int main()
{
    myString s1;
    s1.set("Aman Kumar");
    !s1;
    s1.get();
    return 0;
}