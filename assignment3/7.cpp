#include<iostream>
using namespace std;
class Greatest
{
    private:
    int a,b,c;
    public:
    void setNo(int x,int y,int z)
    { a=x,b=y,c=z;}
     int greatestNo()
     {
       
        if(a>b && a>c)
         return a;
        else if(b>c)
         return b;
        else
         return c;
     }
};
int main()
{
    Greatest obj;
    obj.setNo(433,569,789);
    cout<<"greatest no. is "<<obj.greatestNo();
    return 0;
}