#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
    double overtime,amountpaid,gpay,NSSF,Housinglevy,SHIF,servicecharge,PAYE,NetPay;
    int fixedallowance;
    //constant
    fixedallowance=50000;
    cout<<"Enter the Overtime worked hours"<<endl;
    cin>>overtime;
    if (overtime>=1 && overtime<=50)
    {
        amountpaid=300*overtime;
    }
    else
    {
        amountpaid=350*overtime;
    }
    //gross pay
    gpay=fixedallowance+amountpaid;  
    if (gpay>=50000)
    {
        NSSF=0.06*gpay;
        Housinglevy=0.015*gpay;
        SHIF=0.027*gpay;
        servicecharge=100;
    }
    else if(gpay>=40000 && gpay<50000)
    {
        NSSF=0.06*gpay;
        Housinglevy=0.015*gpay;
        SHIF=0.027*gpay;
        servicecharge=100;
    }
    else if(gpay>=35000 && gpay<40000)
    {
        NSSF=0.06*gpay;
        Housinglevy=0.015*gpay;
        SHIF=0.027*gpay;
        servicecharge=100;
    }
    else if(gpay>=25000 && gpay<35000)
    {
        NSSF=0.06*gpay;
        Housinglevy=0.015*gpay;
        SHIF=0.027*gpay;
        servicecharge=100;
    }
    else if(gpay>=16000 && gpay<25000)
    {
        NSSF=0.06*gpay;
        Housinglevy=0.015*gpay;
        SHIF=0.027*gpay;
        servicecharge=100;
    }
    else if(gpay>=9000 && gpay<16000)
    {
        NSSF=0.06*gpay;
        Housinglevy=0.015*gpay;
        SHIF=0.027*gpay;
        servicecharge=100;
    }
    else
    {
        NSSF=0.06*gpay;
        Housinglevy=0.015*gpay;
        SHIF=0.027*gpay;    
        servicecharge=100;
    }
    //Paye as you earn for the employee
    PAYE=NSSF+Housinglevy+SHIF+servicecharge;
    NetPay=gpay-(PAYE+NSSF+SHIF+servicecharge+Housinglevy);
    cout<<"Grosspay"<<setw(10)<<"PAYE"<<setw(10)<<"NSSF"<<setw(10)<<"SHIF"<<setw(20)<<"HousingLevy"<<setw(10)<<"NetPay"<<endl;
    cout<<gpay<<setw(13)<<PAYE<<setw(10)<<NSSF<<setw(10)<<SHIF<<setw(12)<<Housinglevy<<setw(17)<<NetPay<<endl;
    return 0;
}