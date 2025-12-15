#include<iostream>
using namespace std;
class Bank
{
    private:
     float balance;
     int year;
     static int ROI;
     public:
      Bank()
      {
        balance=1000;
        year=2;
      }
      void showB()
      {
        cout<<"Balance = "<<balance<<endl;
      }
      void showY()
      {
        cout<<"year ="<<year<<endl;
      }
      static void setRoi(int a)
      {
        ROI=a;
      }
      static void showRoi()
      {
        cout<<"ROI ="<<ROI<<endl;
      }
      void simpleIntrest()
      {
        cout<<"SI="<<(balance*ROI*year)/100;
      }
};
int Bank::ROI=7;
int main()
{
    Bank b;
    b.showB();
    b.showY();
    Bank::showRoi();
    b.simpleIntrest();
    return 0;

}