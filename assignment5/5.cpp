#include <iostream>
using namespace std;
class Numbers
{
private:
    int x, y, z;

public:
    Numbers(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
    }
    Numbers()
    {
    }
    Numbers operator-()
    {
        Numbers temp;
        temp.x = -x;
        temp.y = -y;
        temp.z = -z;
        return temp;
    }
    void show()
    {
        cout<<"x ="<<x<<", y ="<<y<<", z ="<<z<<endl;
    }
};
int main()
{
    Numbers n1(4,5,8),n2;
    n2=-n1;
    n1.show();
    n2.show();
    return 0;
}
