#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("abc.txt",ios::app);
    if(!fout)
    {
        cout<<"not created\n";
    }
    else
        //fout<<"this is written "
       // fout<<"in file ";
       //fout<<"hola mi amigo!";
       fout<<"\nnamskar ";
    fout.close();
    return 0;
}