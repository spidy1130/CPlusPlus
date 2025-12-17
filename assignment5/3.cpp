#include<iostream>
using namespace std;
class Complex
{
    private:
     int a,b;
    public:
      void set(int x,int y)
      {
        a=x;b=y;
      }
      void show()
      {
        cout<<a<<" "<<b<<"i"<<endl;

      }
      friend Complex operator+(Complex,Complex);
};
Complex operator+(Complex x,Complex y)
{
    Complex temp;
    temp.a=x.a + y.a;
    temp.b=x.a + y.b;
    return temp;
}
int main()
{
    
}