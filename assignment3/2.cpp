#include<iostream>
using namespace std;
class Time
{
    private:
      int h,m,s;
    public:
      void setTime(int a,int b,int c)
      {
        if(c>=60)
        {
            b=b+(c/60);
            c=c%60;
        }
        if(b>=60)
        {
            a=a+(b/60);
            b=b%60;
        }
        if(a>12)
        {
            a=a%12;
        }
        h=a;
        
        m=b;

        s=c;
      }
      void showTime()
      {
        cout<<h<<"hr "<<m<<"min "<<s<<"sec";
      }
};
int main()
{
    Time t1;
    cout<<"enter time(h,m,s):";
    int a,b,c;
    cin>>a>>b>>c;
    t1.setTime(a,b,c);
    t1.showTime();
    return 0;

}