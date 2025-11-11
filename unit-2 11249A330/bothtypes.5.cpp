#include<stdio.h>
using namespace std;
class Demo
{
    int x;
    public:
    Demo()
    {
        x=0;
        cout<<"Default constructor called"<<endl;
    }
    Demo(int a)
    {
        x=a;
        cout<<"Parameterised constructor called"<<endl;
    }
    Demo(Demo&d)
    {
        X=d.x;
        cout<<"copy constructor called"<<endl;
    }
    ~Demo()
    {
        cout<<"Destructor for object with x="<<x<<endl;
    }
};
int main()
{
    Demo d1;
    Demo d2(10);
    Demo d3(d2);
    return 0;
}