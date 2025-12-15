#include<iostream>
using namespace std;
class Counter
{
    int count;
    public:
    Counter()
    {
        count=10;
        cout<<count;
    }
};
int main()
{
    Counter c;
    return 0;
}