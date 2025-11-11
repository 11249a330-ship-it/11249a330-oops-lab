#include<iostream>
using namespace std;
class Math
{
    public:
    int add(int a,int b)
    {
        return a+b;
    }
    double add (double a,double b)
        {
            return a+b;
        }
};
int main()
{
    Math m;
    cout<<"sum of 2 int:"<<m.add(5,10)<<endl;
    cout<<"sum of 2 double:"<<m.add(2.5,3.7)<<endl;
    cout<<"sum of 3 int:"<<m.add(1,2)<<endl;
    return 0;
}