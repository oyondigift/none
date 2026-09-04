#include<iostream>
using namespace std;
class students
{
    public:
    students()//constructor
    {
        cout<<"C++ & constructors"<<endl;
    }
};
int main()
{
    //create class instance
    students s;
    students s1;
    return 0;
}