#include<iostream>
#include <iomanip>
using namespace std;
class student
{
    private:
    int regno;
    string name, gender, DOB;
    public:
    void accept();
    void display();    
};
void student::accept()
{
    cout<<"enter the student registration number"<<endl;
    cin>>regno;
    cout<<"enter student name"<<endl;
    cin>>name;
    cout<<"enter student gender"<<endl;
    cin>>gender;
    cout<<"enter student date of birth"<<endl;
    cin>>DOB;
}
void student::display()
{
    cout<<"RegNo"<<setw(10)<<"Name"<<setw(20)<<"Gender"<<setw(10)<<"DOB"<<endl; 
    cout<<regno<<setw(10)<<name<<setw(20)<<gender<<setw(10)<<DOB<<endl;
}
int main()
{
    student s,s2;//s is object of type class
    //access members of the class using the object
    cout<<"entering information for student 1"<<endl;
    s.accept();//call member function accept()
    s.display();//call member function display()
    //create object of the student
    cout<<"entering the information for student 2"<<endl;
    s2.accept();
    s2.display();  
    return 0;
}