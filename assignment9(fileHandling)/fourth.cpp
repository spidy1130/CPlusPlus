#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    string line;
    fout.open("sec.txt",ios::app|ios::in|ios::out);
    if(!fout)
    {
        cout<<"not created\n";
    }
    else
    {
        while(fout)
        {
            getline(cin,line);
            if(line == "-1")
                break;
            fout<<line;
        }
    }
    fout.close();
    return 0;
}