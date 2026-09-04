#include<iostream>
using namespace std;
//defination of function sum
double sum (double x, double y)
{
    return x+y;
}
int main()
{
    //declare variables
    double a,b;
    cout<<"enter a number 1\n";
    cin>>a;
    cout<<"enter a number 2\n";
    cin>>b;
    cout<<"the sum is\t"<<sum(a,b)<<endl;
    return 0;
}