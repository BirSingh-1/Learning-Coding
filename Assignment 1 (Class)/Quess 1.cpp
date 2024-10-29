//	Create a structure in C++ containing the details of Students as details below 
//	and a main function to execute the structure. Data Members(properties): Name, Roll No,
//	Degree, Hostel, CurrentCGPA; Member Function(behavior): addDetails(), updateDetails(),
//	updateCGPA(), updateHostel(), displaydetails()

#include<iostream>
#include<string>
using namespace std;

struct students{
    string name;
    int rollno;
    string deg;
    string hostel;
    float cgpa;
	void adddetails(){
		cout<<"enter name: ";
    	getline(cin, name);
    	cout<<"enter rollno.: ";
    	cin>>rollno;
		cout<<"enter deg: ";
    	cin.ignore();
    	getline(cin, deg);
    	cout<<"enter hostel: ";
    	cin>>hostel;
    	cout<<"enter cgpa: ";
    	cin>>cgpa;
    	cout<<endl; }
	void displaydetails(){
    	cout<<"Name: "<<name<<endl;
    	cout<<"Roll no: "<<rollno<<endl;
    	cout<<"Deg: "<<deg<<endl;
    	cout<<"Hostel: "<<hostel<<endl;
    	cout<<"CGPA: "<<cgpa<<endl; }
    void uopdatedetails(){
    	cout<<"enter updated cgpa and hostel: ";
    	cin>>cgpa>>hostel;
    	cout<<endl;
    	cout<<"your updated cgpa and hostel: "<<cgpa<<"\t"<<hostel;
	}
};
int main() {
    students A;
    A.adddetails();
    A.displaydetails();
    A.uopdatedetails();
    return 0; }

