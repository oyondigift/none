#include<iostream>
using namespace std;
class person
{
    private:
    int x,y;
    public:
    person()//default constructor
    {
        x=5,y=6;
        cout<<"x="<<x<<"y="<<y<<endl;
    }
};
int main()
{
    person p;
    return 0;
}  