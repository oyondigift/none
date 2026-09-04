#include<iostream>
using namespace std;
class shapes
{
    public:
    shapes(double r, double h)
    {
        cout<<"The volume of the cylinder\t"<<3.142*r*r*h<<endl;
    }
    shapes(double r)
    {
        cout<<"The area is\t"<<3.142*r*r<<endl;
    }
    shapes(double l,double w,double h)
    {
        cout<<"The volume of cuboid is\t"<<l*w*h<<endl;
    }
};
int main()
{
    //call volume cylinder constructor
    shapes s(7,5);
    //call area constructor
    shapes s1(7);
    //call volume cuboid
    shapes s2(5,6,7);
    return 0;
}