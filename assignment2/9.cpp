#include <iostream>
using namespace std;
int max(int, int);
float max(float, float);
int main()
{
    int a, b;
    float m, n;
    cout << "enter two integers:";
    cin >> a >> b;
    cout << "greater is " << max(a, b);
    cout << "\nenter two real:";
    cin >> m >> n;
    cout << "greater is " << max(m, n);
    return 0;
}
int max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
float max(float a,float b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}