#include<iostream>
using namespace std;
class Bill
{
     private:
    float bill,unit;
    public:
    Bill()
    {
        bill=0;
        unit=0;
    }
    void setUnit(float a)
    {unit=a;}
    void showBill()
    {
        cout<<endl<<"Bill = "<<bill;
    }
    void showUnit()
    {
        cout<<endl<<"Unit = "<<unit<<endl;
    }
    void calculateBill()
    {
        if(unit>0&&unit<=100)
          bill=unit*1.20;
        else if(unit>100&&unit<=200)
            bill=100*1.20+(unit-100)*2;
        else if(unit>200)
            bill=100*1.20+100*2+(unit-200)*3;
        else 
         cout<<"invalid unit:";
    }
};
int main()
{
    Bill b;
    b.setUnit(156);
    b.calculateBill();
    b.showBill();
    return 0;
}