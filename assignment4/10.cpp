#include<iostream>
using namespace std; 
class StaticCount
{
    private:
    static int count;
    public:
    static void icount()
    {
        count++;
    }
    static void display()
    {
        cout<<endl<<"Count = "<<count;
    }
};
int StaticCount::count=0;
int main()
{
 StaticCount::icount();
  StaticCount::icount();
   StaticCount::icount();
    StaticCount::display();
    return 0;
}
   