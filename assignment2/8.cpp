#include<iostream>
#include<cmath>
using namespace std;
float area(int);
int area(int,int);
int area(int,int,int);
int main()
{
    int r;
    cout<<"enter r:";
    cin>>r;
    cout<<"area of circle is: "<<area(r);
    cout<<"\nenter l and b: ";
    int l,b;
    cin>>l>>b;
    cout<<"area of rec: "<<area(l,b);
    int a,c;
    cout<<"\nenter sides of triangle:";
    cin>>a>>b>>c;
    cout<<"area of triangle "<<area(a,b,c);
    return 0;

}
float area(int r)
{
    return 3.140f*r*r;
}
int area(int l,int b)
{
    return l*b;
}
int area(int a,int b,int c)
{
    int s=(a+b+c)/2,result;
    result=s*(s-a)*(s-b)*(s-c);
    return sqrt(result);

}