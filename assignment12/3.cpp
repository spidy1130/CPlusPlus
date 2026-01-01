#include<iostream>
using namespace std;
class Subjects
{
    int phy,maths,chem;
    public:
        void setSubs(int x,int y, int z)
        {
            phy=x;maths=y;chem=z;
        }
        int getPhy()
        {
            return phy;
        }
        int getMaths()
        {return maths;}
        int getChem()
        {return chem;}

};
class TotalMarks:public Subjects
{
    int marks;
    public:
      void total()
      {
        marks=getPhy()+getMaths()+getChem();
      }
      int getMarks()
      {
        total();
        return marks;
      }
};
class Percentage:public TotalMarks
{
    int per;
    public:
        void percentage()
        {
            per=getMarks()/3;
        }
        void showPer()
        {
            percentage();
            cout<<"percentage: "<<per<<endl;
        }
};
int main()
{
    Percentage t;
    t.setSubs(98,97,90);
    t.showPer();
    return 0;
}