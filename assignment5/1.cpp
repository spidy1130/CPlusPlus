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
      Complex operator+(Complex c)
      {
        Complex temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return temp;
      }
      Complex operator-(Complex c)
      {
        Complex temp;
        temp.a=a-c.a;
        temp.b=b-c.b;
        return temp;
      }
      Complex operator*(Complex c)
      {
        Complex temp;
        temp.a=a*c.a;
        temp.b=b*c.b;
        return temp;
      }
      bool operator==(Complex c)
      {
        if(a==c.a && b==c.b)
          return true;
        return false;
      }

};
int main()
{
    Complex c1,c2,c3,c4,c5;
    c1.set(4,5);
    c2.set(2,3);
    c3=c1+c2;
    c3.show();
    c4.set(2,3);
    c5=c4*c2;
    c5.show();
    if(c3==c5)
    {
        cout<<"equal:";
    }
    else
      cout<<"not equal:";
    return 0;
}