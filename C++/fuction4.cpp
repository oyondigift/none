#include<iostream>
using namespace std;
void volume()
{
    double l,w,h;
    cout<<"enter the length"<<endl;
    cin>>l;
    cout<<"enter the widht"<<endl;
    cin>>w;
    cout<<"enter the height"<<endl;
    cin>>h;
    // compute and display the height
    cout<<"the volume is\t"<<l*w*h<<endl;
}
int main()
{
    //call fuction volume
    volume();
    return 0;
    
}