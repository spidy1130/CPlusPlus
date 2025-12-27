#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    string line;
    fout.open("third.txt",ios::app|ios::in|ios::out);
    if(!fout)
    {
        cout<<"not created\n";
    }
    else
    {
        cout<<"enter the data\n";
        while(fout)
        {
            getline(cin,line);
            if(line == "-1")
                break;
            fout<<line;
        }
    }
    fout.close();
    ifstream fin;
    fin.open("third.txt");
    while(!fin.eof())
    {
        getline(fin,line);
        cout<<line;
    }
    fin.close();
    return 0;
}