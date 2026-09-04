#include<iostream>
using namespace std;
class animal
{
    public:
    animal()
    {
        cout<<"Default constructor\n";
    }
};
class dog:public animal
{

};
int main()
{
    //create an instance of class dog
    dog d;
    return 0;
}