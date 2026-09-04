#include<iostream>
using namespace std;
class sum
{
    private:
    int x,y;
    public:
    void accept();
    friend void add(sum);//declaring friend function 
};
void sum::accept()
{
    cout<<"enter the first number"<<endl;
    cin>>x;
    cout<<"enter the second number"<<endl;
    cin>>y;
}
void add(sum s)
{
    cout<<"The sum is\t "<<s.x+s.y<<endl;
}
int main()
{
    //create objects of class sum
    sum s;
    s.accept();//call member fucntion accept
    add(s);//call friend function
    return 0;

}