#include<iostream>
using namespace std;
class Date
{
    private:
    int D,M,Y;
    public:
    Date()
    {
        D=00;M=00;Y=0000;
    }
    void setDate(int a,int b,int c)
    {
        D=a;M=b;Y=c;
    }
    void displayDate()
    {
        cout<<D<<"/"<<M<<"/"<<Y<<endl;
    }
};
int main()
{
    Date d1;
    d1.displayDate();
    d1.setDate(3,1,2004);
    d1.displayDate();
    return 0;
}