#include<iostream>
#include <iomanip>
using namespace std;
class person
{
    private:
    double height,weight;
    string name, gender;
    public:
    void accept()
    {
        cout<<"enter name of the person"<<endl;
        cin>>name;
        cout<<"enter the gender"<<endl;
        cin>>gender;
        cout<<"enter the height "<<endl;
        cin>>height;
        cout<<"enter the weight"<<endl;
        cin>>weight;
    }
    void display();//function declaration
};
void person::display()
{
    cout<<"Name"<<setw(20)<<"Gender"<<setw(20)<<"Height"<<setw(20)<<"Weight"<<endl;
    cout<<name<<setw(20)<<gender<<setw(20)<<height<<setw(20)<<weight<<endl;
}
int main()
{
    person p;
    p.accept();
    p.display();
    return 0;
}
