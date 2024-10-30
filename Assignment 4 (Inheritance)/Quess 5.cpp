//	You are tasked with creating a system for a library that tracks different types of users. 
//	The system needs to handle general user information such as name, ID, and contact details. 
//	There are two specific types of users: Student and Teacher. Each type of user has additional attributes, 
//	such as grade level for students and department for teachers. Implement a base class LibraryUser with general 
//	attributes. Then, create two derived classes Student and Teacher that inherit from LibraryUser and add their 
//	own specific attributes. Demonstrate how hierarchical inheritance is applied in this scenario.

#include<iostream>
#include<string>
using namespace std;

class LibraryUser{
	protected:
		string name;
		int ID;
		int contact_no;
};
class Student:public LibraryUser{
	int grade;
};
class Teacher:public LibraryUser{
	string department;
};
int main(){
	Student A;
	Teacher B;
}
// add and display details as per your convenience 
