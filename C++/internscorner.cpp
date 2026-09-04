#include<iostream>
using namespace std;
class person
{
    private:
    string name;
    public:
    void accept();
    void display();
};
class displaymenu
{
    void display()
    {
        cout<<"Welcome to interns corner\n1.Add Job\n2.Find Job\n3.Display Job\n4.Exit"<<endl;
        
    }

};