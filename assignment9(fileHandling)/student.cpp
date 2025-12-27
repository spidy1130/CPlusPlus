#include<iostream>
#include<fstream>
using namespace std;
int ID;
class student
{
    public:
        int id,age;
        string name,stream;

        void addStudent()
        {
            cout<<"Enter Name: ";
            cin.get();
            getline(cin,name);
            cout<<"Enter Age: ";
            cin>>age;
            cout<<"Enter Stream: ";
            cin>>stream;
            ID++;
            ofstream fout;
            fout.open("student_database.txt",ios::app);
            fout<<"\n"<<ID;
            fout<<"\n"<<name;
            fout<<"\n"<<age;
            fout<<"\n"<<stream;
            fout.close();

            fout.open("id.txt",ios::app);
            fout<<"\n"<<ID;
            fout.close();
            cout<<"Record Added Successfully"<<endl;

        }
        void printAllStudent()
        {
            
        }
};
int main()
{
    
}