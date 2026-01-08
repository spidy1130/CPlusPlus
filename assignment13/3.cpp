#include<iostream>
using namespace std;
template <class T1,class T2, class T3>
class Multi
{
    public:
        T1 x;
        T2 y;
        T3 multipli()
        {
            return x*y;
        }
};
int main()
{
    Multi <int ,int ,int>m;
    m.x=9;
    m.y=6;
    cout<<m.multipli();
    return 0;
}
