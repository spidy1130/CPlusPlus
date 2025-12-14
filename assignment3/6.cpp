#include<iostream>
using namespace std;
class Square
{
private:
  int a;
public:
  int square(int a)
  {
    return a*a;
  }
};
int main()
{
    Square s;
    cout<<"square is "<<s.square(8);
    return 0;
}