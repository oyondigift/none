#include<iostream>
#include <iomanip>
using namespace std;
class person
{
    protected:
    string name;
    double height,weight;
    public:
    void accept()
    {
        cout<<"Enter the Name\n";
        cin>>name;
        cout<<"Enter the Height\n";
        cin>>height;
        cout<<"Enter the Weight\n";
        cin>>weight;
    }
};
class student:public person
{
    private:
    int regno;
    public:
    void acceptRegNo()
    {
        cout<<"Enter the Registration Number\n";
        cin>>regno;
    }
    void display();
};
void student::display()
{
    cout<<"RegNo"<<setw(20)<<"Name"<<setw(20)<<"Height"<<setw(10)<<"Weight\n";
    cout<<regno<<setw(20)<<name<<setw(20)<<height<<setw(20)<<weight<<endl;
}
int main()
{
    student s;
    s.accept();
    s.acceptRegNo();
    s.display();
    return 0;
}