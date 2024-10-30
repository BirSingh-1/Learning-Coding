//	You are developing a software system for an academic institution. The institution has various roles like Person, Staff, 
//	and Student. A Person has general attributes like name and address. Staff members, who are a type of Person, have 
//	additional attributes like employee_id and department. Student, another type of Person, has attributes like student_id 
//	and grade. Some Staff members are also Students (e.g., teaching assistants) and need to inherit from both classes. Implement 
//	a base class Person with general attributes. Then, create derived classes Staff and Student that inherit from Person 
//	and add their specific attributes. Finally, create a TeachingAssistant  class that inherits from both Staff and Student.

#include<iostream>
#include<string>
using namespace std;

class Person{
	protected:
		string name;
		string address;
};
class Staff:public Person{
	protected:
		int employee_id;
		string department;
};
class Student:public Person{
	protected:
		int student_id;
		int grade;
};
class TeachingAssistant:public Staff, public Student{
	
};

int main(){
	
}
// add and display details as per your convenience 
