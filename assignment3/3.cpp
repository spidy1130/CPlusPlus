#include<iostream>
using namespace std;
class Fact
{
    private:
     int fact=1;
    public:
    int factorial(int a)
    {
        for(int i=2;i<=a;i++)
         fact=fact*i;
          return fact;
    }
};
int main()
{
    Fact f1;
    cout<<f1.factorial(5);
    return 0;
}