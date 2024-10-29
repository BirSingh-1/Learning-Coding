//	Differentiate between private and public access/scope. Perform the Quess 1
//	with class instead of structure with having the data members private and some
//	member functions in private scope and some in public scope.

#include <iostream>
#include<string>
using namespace std;
class students{
    string name;
    int rollno;
    string deg;
    string hostel;
    float cgpa;
    public:
    void adddetails(){
        cout<<"enter name: ";
        getline(cin, name);
        cout<<"roll no: ";
        cin>>rollno;
        cin.ignore();
        cout<<"enter deg: ";
        getline(cin, deg);
        cout<<"enter hostel: ";
        cin>>hostel;
        cout<<"enter cgpa: ";
        cin>>cgpa; 
	}
    void display(){
        cout<<endl<<"name: "<<name<<endl;
        cout<<"roll no: "<<rollno<<endl;
        cout<<"deg: "<<deg<<endl;
        cout<<"hostel: "<<hostel<<endl;
        cout<<"cgpa: "<<cgpa;  
	}    
};
int main() {
    students A;
    A.adddetails();
    A.display();
    return 0;
}

