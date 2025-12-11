#include <iostream>
using namespace std;
void printPascalTriangle(int N)
{
    for (int line = 0; line < N; line++)
    {
        for (int spaces = 0; spaces < (N - line - 1); spaces++)
        {
            cout << " ";
        }
        long long coef = 1; 

        for (int i = 0; i <= line; i++)
        {
            cout << coef << " ";
            coef = coef * (line - i) / (i + 1);
        }
        cout <<endl;
    }
}
int main() {
    int lines_to_print;
    cout<<"enter no of lines you want to print:";
    cin>>lines_to_print;
    cout << "Pascal's Triangle up to " << lines_to_print << " lines:" << std::endl;
    printPascalTriangle(lines_to_print);
    return 0;
}
