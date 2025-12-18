#include<iostream>
using namespace std;
class fraction
{
    long numerator;
    long denominator;
    public:
        fraction (long n, long d)
        {
            numerator=n;
            denominator=d;
        }
        fraction()
        {
            numerator=0;
            denominator=0;
        }
        fraction operator++()
        {
            fraction temp;
            temp.numerator=++numerator;
            temp.denominator=++denominator;
            return temp;
        }
        fraction operator++(int a)
        {
            fraction temp;
            temp.numerator=numerator++;
            temp.denominator=denominator++;
            return temp;
        }
        friend ostream&  operator<<(ostream &,fraction );
        friend istream& operator>>(istream&,fraction&);

};
ostream&  operator<<(ostream &cout,fraction f)
{
    cout<<f.numerator<<"/"<<f.denominator<<endl;
    return cout;

}
istream& operator>>(istream &cin,fraction &f)
{
    cout<<"Nuemerator: ";
    cin>>f.numerator;
    cout<<"Denominator: ";
    cin>>f.denominator;
    return cin;
}
int main()
{
    fraction f1,f2;
   cout<<"f1: "<<f1<<endl<<"f2:  "<<f2;
   cout<<"enter first fraction:\n";
   cin>>f1;
   f1++;++f1;
   cout<<"enter second fraction:\n";
   cin>>f2;
   f2=++f1;
   cout<<"f1: "<<f1<<endl<<"f2:  "<<f2;
   f2=f1++;
   cout<<"f1: "<<f1<<endl<<"f2:  "<<f2;
   return 0;

}

