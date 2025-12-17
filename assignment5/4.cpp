#include<iostream>
using namespace std;
class Date
{
    private:
     int d,m,y;
    public:
     void set(int a,int b, int c)
     {
        d=a;m=b;y=c;
     }
     void Show()
     {
        cout<<"day: "<<d<<"\nmonth: "<<m<<"\nyear: "<<y<<endl;
     }
      
     friend ostream& operator<<(ostream&,Date);
     friend istream& operator>>(istream&,Date&);
     bool operator==(Date d1)
     {
         if(d1.d==d && d1.m==m && d1.y==y)
           return true;
         return false;
     }
    
};
ostream& operator<<(ostream &os,Date d)
{
   cout<<"Day: "<<d.d<<"\nMonth: "<<d.m<<"\nYear: "<<d.y<<endl;
   return os;
}
istream& operator>>(istream &is,Date &d)
{
   cout<<"Enter Day: ";
   cin>>d.d;
   cout<<"\n\nEnter Month: ";
   cin>>d.m;
   cout<<"\n\nEnter Year: ";
   cin>>d.y;
   return is;
}
int main()
{
   Date d1,d2;
   cout<<"enter first date:\n------------------\n";
   cin>>d1;
   cout<<"First Date:\n";
   cout<<d1;
   cout<<"enter second date:\n------------------\n";
   cin>>d2;
   cout<<"Second Date:\n";
   cout<<d2;
   if(d1==d2)
    cout<<"times are same:";
   else
    cout<<"not same:";
     
   return 0;

}
