#include<iostream>
#include <iomanip>
using namespace std;
class grader
{
    private:
    int RegNo,UnitCode, CAT1, CAT2, ExamMark,FinalScore;
    string Name, UnitName;
    char grade;
    public:
    void accept()
    {
        cout<<"enter student Registration number"<<endl;
        cin>>RegNo;
        cout<<"enter student Name"<<endl;
        cin>>Name;
        cout<<"enter the unit code"<<endl;
        cin>>UnitCode;
        cout<<"enter the unit name"<<endl;
        cin>>UnitName;
        cout<<"enter cat1 marks"<<endl;
        cin>>CAT1;
        cout<<"enter cat2 marks"<<endl;
        cin>>CAT2;
        cout<<"enter the exam mark"<<endl;
        cin>>ExamMark;
        FinalScore=CAT1+CAT2+ExamMark;
        grade=grading(FinalScore);//calling the function

    }
    char grading(int score)
    {
        if(score>=70 && score<=100)
        grade='A';
        else if(score>=60 && score<=69)
        grade='B';
        else if(score>=50 && score<=59)
        grade= 'C';
        else if(score>=40 && score<=49)
        grade='D';
        else if(score>=0 && score<=39)
        grade='F';
        return grade;
    }
    void display();
};
void grader::display()
{
    cout<<"RegNo"<<setw(20)<<"Name"<<setw(10)<<"UnitCode"<<setw(10)<<"UnitName"<<setw(10)<<"CAT1"<<setw(20)<<"CAT2"<<setw(20)<<"ExamMark"<<setw(20)<<"FinalScore"<<setw(20)<<"grade"<<setw(20)<<endl;
    cout<<RegNo<<setw(20)<<Name<<setw(10)<<UnitCode<<setw(10)<<UnitName<<setw(10)<<CAT1<<setw(20)<<CAT2<<setw(20)<<ExamMark<<setw(20)<<FinalScore<<setw(20)<<grade<<endl;
}
int main ()
{
    grader g;
    g.accept();
    g.display();
    return 0;
}