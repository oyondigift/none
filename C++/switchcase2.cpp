#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<("enter the age")<<endl;
    cin>>age;
    switch(age)
    {
        case 18:
        cout<<"you can vote"<<endl;
        break;
        case 25:
        cout<<"you can work"<<endl;
        break;
        case 35:
        cout<<"you can vie as a president"<<endl;
        break;
        case 60:
        cout<<"you are too old. Retire now"<<endl;
        break;
        case 90:
        cout<<"prepare to die"<<endl;
        break;
        default:
        cout<<"your age is invalid" <<endl;    
    
    }
}