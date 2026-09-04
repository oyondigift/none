#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float marks;
    char grade;
    cout<<"enter the marks of a student"<<endl;
    cin>>marks;
    if (marks>=70 && marks <=100)
    {
        grade='A';
    }
    else if (marks>=60 && marks<=69)
    {
        grade='B';
    }
    else if(marks>=50 && marks <=59)
    {
        grade='C';
    }
    else if (marks>=40 && marks<=49)
    {
        grade='D';
    }
    else if (marks>=0 && marks <39)
    {
        grade='F';
    }
    else
    {
        cout<<"invalid marks";
        exit;        
    }
    // display the values
    cout<<"marks"<<setw(10)<<"grade"<<endl;
    cout<<marks<<setw(10)<<grade<<endl;
    return 0;    
}