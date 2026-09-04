#include <iomanip>
#include<iostream>
using namespace std;
class person
{
    protected:
    string name,gender;
    public:
    void accept();
    void display();
};
class student:public person
{
    string regno;
    public:
    void accept()
    {
       cout<<"Enter registration number\n";
       cin>>regno;
       cout<<"Enter student name\n";
       cin>>name;
       cout<<"Enter Student gender\n";
       cin>>gender;
    }
    void display()
    {
        cout<<"Regno"<<setw(20)<<"Name"<<setw(20)<<"Gender"<<endl;
        cout<<regno<<setw(20)<<name<<setw(20)<<gender<<endl;
    }
};
class staff:public person
{
    string staffNo;
    public:
    void accept()
    {
       cout<<"Enter staff number\n";
       cin>>staffNo;
       cout<<"Enter staff name\n";
       cin>>name;
       cout<<"Enter staff gender\n";
       cin>>gender;
    }
    void display()
    {
        cout<<"StaffNo"<<setw(20)<<"Name"<<setw(20)<<"Gender"<<endl;
        cout<<staffNo<<setw(20)<<name<<setw(20)<<gender<<endl;
    }
};
int main()
{
    student stud;
    staff st;
    cout<<"Information about student!!!\n";
    stud.accept();
    stud.display();
    cout<<"Information about staff!!!\n";
    st.accept();
    st.display();
    return 0;
}