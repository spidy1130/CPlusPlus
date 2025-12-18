#include<iostream>
using namespace std;
class Matrix
{
       int a[3][3];
    public:
    friend ostream& operator<<(ostream&,Matrix);
    friend istream& operator>>(istream&,Matrix&);
    Matrix operator-()
    {
        Matrix m;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                m.a[i][j]=-a[i][j];
            }
        }
        return m;

    }
    
};
ostream& operator<<(ostream& cout,Matrix m)
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<m.a[i][j]<<"  ";
        }
        cout<<endl;
    }
    return cout;
}
istream& operator>>(istream &cin,Matrix &m)
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
           cin>>m.a[i][j];
        }
        
    }
    return cin;
}
int main()
{
    Matrix m1,m2;
    cout<<"enter matrix(3*3)\n";
    cin>>m1;
    m2=-m1;
    cout<<m2;
    return 0;
}