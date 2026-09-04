#include <iostream> 
using namespace std; 
class Person { 
private: 
 string name, gender, dob; 
public: 
 void accept() 
 { 
 cout << "Enter name: "; 
 cin >> name; 
 cout << "Enter gender: "; 
 cin >> gender; 
 cout << "Enter date of birth: "; 
 cin >> dob; 
 } 
 void display() { 
 cout << "\nPerson Details:\n"; 
 cout << "Name: " << name << endl; 
 cout << "Gender: " << gender << endl; 
 cout << "Date of Birth: " << dob << endl; 
 } 
}; 
int main() { 
 Person p; 
 p.accept(); // input data 
 p.display(); // display data 
 return 0; 
}