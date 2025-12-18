#include<iostream>
#include<cstring>
using namespace std;

class CString
{
    private:
     int size;
     char *str;
    public:
        CString()
        {
            size=1;
            str=(char*)malloc(1);
        }
        CString(char *c)
        {
            size=strlen(c);
            str=(char*)malloc(size+1);
            strcpy(str,c);

        }
        CString operator+(CString x)
        {
            //free(str);
            CString temp;
            temp.str=(char*)malloc(strlen(x.str)+strlen(str)+1);
            strcpy(temp.str,strcat(str,x.str));
            return temp;

        }
        CString(const CString &s)
        {
            size=strlen(s.str);
            str=(char*)malloc(size +1);
            strcpy(str,s.str);
        }
        CString & operator=(const CString &s)
        {
            if(str==s.str)
              return *this;
            free(str);
            size=strlen(s.str);
            str=(char*)malloc(size+1);
            strcpy(str,s.str);
            return *this;
        }

        void show()
        {
            cout<<str<<endl;
        }
};
int main()
{
    CString c1,c2("aman");
    c1=c2;
    c1.show();
    c2.show();
    return 0;
}