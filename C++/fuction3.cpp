#include<iostream>
using namespace std;
double area(double r)
{

    return 3.142*r*r;
}
int main()
{
  double radius;
  cout<<"enter the radius"<<endl;
  cin>>radius;
  // display area 
  cout<<"the area of the circle is\t"<<area(radius)<<endl;
  return 0;
  
}