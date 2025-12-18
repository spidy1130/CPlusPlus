#include<iostream>
using namespace std;
class Matrix
{
    int arr[3][3];
    public:
        void set()
        {
            cout<<"enter elements(3*3):\n";
            for(int i=0;i<3;i++)
            {
                for(int j=0;j<3;j++)
                {
                    cin>>arr[i][j];
                }
            }
        }
        void show()
        {
            for(int i=0;i<3;i++)
            {
                for(int j=0;j<3;j++)
                {
                    cout<<arr[i][j]<<"   ";
                }
                cout<<endl;
            }
        }
        Matrix operator+(Matrix m)
        {
            Matrix temp;
            for(int i=0;i<3;i++)
            {
                for(int j=0;j<3;j++)
                {
                    temp.arr[i][j]=arr[i][j]+ m.arr[i][j];
                }
            }
            return temp;
        }

};
int main()
{
    Matrix m1,m2,m3;
    m1.set();
    m2.set();
    cout<<"first matrix:\n";
    m1.show();
    cout<<"second matrix:\n";
    m2.show();
    m3=m1+m2;
    cout<<"third matrix:\n";
    m3.show();
    return 0;
}