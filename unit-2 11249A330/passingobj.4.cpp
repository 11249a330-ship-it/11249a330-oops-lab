#include<iostream>
using namespace std;
class employee
{
    int id;
    char name[20];
    public:
    void get Data ()
    {
        cout<<"Enter ID and Name:";
        cin>>id>>name;
    }
    void dispaly()
    {
        cout<<"ID:"<<id<<"Name:"<<name<<endl;
    }
};
int main()
{
Employee e[3];
for(int i=0;i<3;i++)
{
    e[i].get data();
}
cout<<"\n Employee Details:\n";
for(int i=0;i<3;i++)
{
    e[i].dispaly();
}
return o;
}
