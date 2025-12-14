#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length, height, area;

public:
    void set(int a, int b)
    {
        length = a;
        height = b;
    }
    int ShowArea()
    {
        area = length * height;
        return area;
    }
};
int main()
{
    int a,b;
    Rectangle r;
    cout<<"enter lenght and height: ";
    cin>>a>>b;
    r.set(a,b);

    cout<<"area is "<<r.ShowArea();
    return 0;
}