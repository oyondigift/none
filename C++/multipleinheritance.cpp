#include<iostream>
using namespace std;
class x
{
    protected:
    int a;
    public:
    void acceptA()
    {
        cout<<"Enter Value of A\n";
        cin>>a;
    }
};
class y
{
    protected:
    int b;
    public:
    void acceptB()
    {
        cout<<"Enter Value of B\n";
        cin>>b;
    }
};
class sum:public x,public y
{
    public:
    void add()
    {
        cout<<"The sum of the two numbers is\t"<<a+b<<endl;

    }
};
int main()
{
    sum s;
    s.acceptA();
    s.acceptB();
    s.add();
    return 0;
}