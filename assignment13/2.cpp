#include<iostream>
using namespace std;
template <typename X,typename Y=int,class Z=int>
Z add(X a,Y b)
{
    return a+b;

}
int main()
{
    cout<<"sum is "<<add<int,float,float>(3,4.5)<<endl;
    cout<<"sum is "<<add<int>(3,4.5);

    return 0;
}