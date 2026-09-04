#include<iostream>
using namespace std;
char grading(int marks)
{
    char grade;
    if (marks>=70 && marks<=100)
        grade='A';
    else if (marks>=60 && marks<=69)
        grade='B';
     else if (marks>=50 && marks<=59)
        grade='C';
     else if (marks>=40 && marks<=49)
        grade='D';
     else if (marks>=0 && marks<=39)
        grade='F';
    return grade; 
}
int main()
{
    //declare variables
    int marks;
    cout<<"enter the marks of a student"<<endl;
    cin>>marks;
    //call fuction 
    cout<<marks<<"\t is equivalent to\t"<<grading(marks)<<endl;
    return 0;
    
}