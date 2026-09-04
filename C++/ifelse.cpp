#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter the number"<<endl;
    cin>>a;
    //use if to confirm if the number is even number
    if(a%2==0)
    {
        cout<<"you entered an even number"<<endl;
    }
    else
    {
        cout<<"you entered an odd number"<<endl;

    }
    
    return 0;
}