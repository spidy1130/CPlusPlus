#include <iostream>
using namespace std;
class Rectangle
{
private:
    int radius;float area;

public:
    void set(int a)
    {
       radius=a;
    }
    float ShowArea()
    {
        area = 3.14*radius*radius;
        return area;
    }
};
int main()
{
    int a;
    Rectangle r;
    cout<<"enter radius: ";
    cin>>a;
    r.set(a);

    cout<<"area is "<<r.ShowArea();
    return 0;
}