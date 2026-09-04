#include<iostream>
using namespace std;
//declare entire global; 1 variables
string bus;
bool status;
bool BusFinder(string day, string time, string destination)
{
    
    if (day=="Monday" && time=="8-11" && destination=="Mombasa")
    {
        status=true;
        bus="Modern Coast, KBV 207k";
    }
    else if(day=="Tueday" && time=="8-5" && destination=="Kisumu")
    {
        status=true;
        bus="ENA, KAK 207E";
    }
    else
    {
        status=false; 
    }
    return status;
}
int main()
{
    //declare tvariables
    string day, time, destination;
    cout<<"enter the day"<<endl;
    cin>>day;
    cout<<"enter the time"<<endl;
    cin>>time;
    cout<<"enter the destination"<<endl;
    cin>>destination;
    //call fuction BusFinder()
    status=BusFinder(day,time,destination);
    //make decision based in status
    if (status==true)
    {
        cout<<"matching bus found:\t"<<bus<<endl;
    }
    else
    {
        cout<<"no matching bus found!!"<<endl;        
    }
    return 0;
}