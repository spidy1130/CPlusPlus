#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("abc.txt");
    if(!fout)
    {
        cout<<"not created\n";
    }
    else
        fout<<"this is written ";
    fout.close();
    return 0;
}