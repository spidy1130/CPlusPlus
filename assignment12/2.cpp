#include<iostream>
using namespace std;
class Add
{
    int a,b;
    public:
        void setNumbers(int x,int y)
        {
            a=x;
            b=y;
        }
        int getFirst()
        {
            return a;
        }
        int getSecond()
        {
            return b;
        }
};
class Show:public Add
{
    int sum;
    public:
        int getSum()
        {
            sum=getFirst()+getSecond();
            return sum;
        }
        void showAddition()
        {
            cout<<"sum is "<<getSum()<<endl;
        }
};
int main()
{
    Show s;
    s.setNumbers(12,23);
    s.showAddition();
    return 0;
}