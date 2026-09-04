#include<iostream>
#include <iomanip>
using namespace std;
class student
{
    private:
    string name,RegNO,course,department,academic,semester,unit,code,grade,Remarks;
    int key,sitcat,assign,attmark,exam,finalmark;   
    public:
    void accept();
    void display();
};
void student::accept()
{
    cout<<"Welcome to Sunshine AMS"<<endl;
    cout<<"1.New Student\n2.Register Student\n3.Key in Student Marks\n4.Print Student Progressive\n5.Exist"<<endl;
    cout<<"Select any key from the sbove\n";
    cin>>key;
    if (key==1)
    {
        cout<<"Enter Student Name"<<endl;
        cin>>name;
        cout<<"Registration Number"<<endl;
        cin>>RegNO;
        cout<<"Course"<<endl;
        cin>>course;
        cout<<"Department"<<endl;
        cin>>department;
        cout<<"Name"<<setw(10)<<"RegNO"<<setw(20)<<"Course"<<setw(15)<<"Department"<<endl;
        cout<<name<<setw(10)<<RegNO<<setw(20)<<course<<setw(15)<<department<<endl;
    }
    else if(key==2)
    {
        cout<<"Enter the Academic year"<<endl;
        cin>>academic;
        cout<<"Enter Semester"<<endl;
        cin>>semester;
        cout<<"Academic year"<<setw(20)<<"Semester"<<endl;
        cout<<academic<<setw(25)<<semester<<endl;
    }
    else if(key==3)
    {
        cout<<"Unit Name"<<endl;
        cin>>unit;
        cout<<"Unit Code"<<endl;
        cin>>code;
        cout<<"Sitting CAT out of 15"<<endl;
        cin>>sitcat;
        cout<<"Assignment out of 10"<<endl;
        cin>>assign;
        cout<<"Attendance Mark out of 5"<<endl;
        cin>>attmark;
        cout<<"Exam mark out of 70"<<endl;
        cin>>exam;
        finalmark=sitcat+assign+attmark+exam;
        if (finalmark>=70 && finalmark<=100)
        grade='A';
        else if(finalmark>=60 && finalmark<=69)
        grade='B';
        else if(finalmark>=50 && finalmark<=59)
        grade='C';
        else if(finalmark>=40 && finalmark<=49)
        grade='D';
        else if(finalmark>=0 && finalmark<=39)
        grade='F';    
    }
    else if(key==4)
    {
        cout<<"The student progressive results"<<endl; 
        cout<<"Registration Number\nFull Name\nDepartment"<<endl;  
    }
    else if(key==5)
    {
        cout<<"Closing the program"<<endl;        
    }
    else
    {
        cout<<"error"<<endl;
    }
    while (key==1 && key==2 && key==3 && key==4)
    {
        cout<<"Welcome to Sunshine AMS"<<endl;
        cout<<"1.New Student\n2.Register Student\n3.Key in Student Marks\n4.Print Student Progressive\n5.Exist"<<endl;
        
    }
}
void student::display()
{
    cout<<"Unit"<<setw(10)<<"Code"<<setw(10)<<"CAT"<<setw(15)<<"Assignment"<<setw(20)<<"Attendancemark"<<setw(10)<<"Exam"<<setw(10)<<"Final"<<setw(10)<<"Grade"<<endl;
    cout<<unit<<setw(10)<<code<<setw(10)<<sitcat<<setw(10)<<assign<<setw(15)<<attmark<<setw(20)<<exam<<setw(10)<<finalmark<<setw(10)<<grade<<endl;
    
}
int main()
{
    student s;
    s.accept();
    s.display();
    return 0;  
}
