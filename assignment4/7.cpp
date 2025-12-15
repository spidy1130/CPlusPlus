#include<iostream>
using namespace std;
class Box
{
    private:
    int L,B,H;
    public:
    Box(int l,int b,int h)
    {
        L=l;B=b;H=h;
    }
    Box()
    {
        L=0;B=0;H=0;
    }
    void setDimension(int l,int b,int h)
    {
        L=l;B=b;H=h;
    }
    void showDimension()
    {
        cout<<"Length= "<<L<<endl<<"breadth= "<<B<<endl<<"Height= "<<H<<endl;
    }
    int volume()
    {
        return L*B*H;
    }
};
int main()
{
    Box b1=Box(3,4,5),b2(6,5,6);
    b1.showDimension();
    cout<<"volume is "<<b1.volume();
    return 0;
}