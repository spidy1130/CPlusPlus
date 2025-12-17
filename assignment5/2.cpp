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
    //   Complex operator++()
    //   {

    //     Complex temp;
    //     temp.a=a+1;
    //     temp.b=b+1;
    //     return temp;
    //   }
    void operator++()
      {

       // Complex temp;
        a=a+1;
        b=b+1;
       // return temp;
      }
      Complex operator--()
      {

        Complex temp;
        temp.a=a-1;
        temp.b=b-1;
        return temp;
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
    ++c1;
    c1.show();
    return 0;
}