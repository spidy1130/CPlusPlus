#include<iostream>
using namespace std;
class Cube
{
    private:
     int s,volume;
     public:
      Cube()
      {
        s=5;volume=s*s*s;
      }
      void setSide(int a)
      {
        s=a;
      }
      void calculateV()
      {
        volume=s*s*s;
      }
      void ShowV()
      {
        cout<<"volume of the cube is "<<volume<<endl;
      }

};
int main()
{
    Cube C1,C2;
    C1.ShowV();
    C2.setSide(10);
    C2.calculateV();
    C2.ShowV();
    return 0;
}