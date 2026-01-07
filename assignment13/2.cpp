#include<iostream>
using namespace std;
template <typename X,typename Y,class Z>
Z add(X a,Y b)
{
    return a+b;

}
int main()
{
    cout<<"sum is "<<add<int,float,float>(3,4.5);
    cout<<"sum is "<<add<int>(3,4);

    return 0;
}