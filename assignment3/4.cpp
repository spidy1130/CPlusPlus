#include <iostream>
using namespace std;
class Largest
{
private:
    int a, b, c;

public:
    void set(int x, int y, int z)
    {
        a = x;
        b = y;
        c = z;
    }
    int largest()
    {
        if (a > b && a > c)
            return a;
        if (b > c)
            return b;
        else
            return c;
    }
};
int main()
{
    Largest l1;
    l1.set(45,56,12);
    cout<<"largest no is "<<l1.largest();
    return 0;
}