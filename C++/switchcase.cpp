#include<iostream>
using namespace std;
int main()
{
    int day;
    cout<<"enter value between [1-7]"<<endl;
    cin>>day;
    switch(day)
    {
        case 1:
        cout<<"sunday"<<endl;
        break;
        case 2:
        cout<<"monday"<<endl;
        break;
        case 3:
        cout<<"tuesday"<<endl;
        break;
        case 4:
        cout<<"wednesday"<<endl;
        break;
        case 5:
        cout<<"thursday"<<endl;
        break;
        case 6:
        cout<<"friday"<<endl;
        break;
        case 7:
        cout<<"saturday"<<endl;
        break;
        default:
        cout<<"invalid input"<<endl;
    }
    return 0;
}