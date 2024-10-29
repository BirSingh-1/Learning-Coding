//	Create a code snippet of Quess 2 that illustrates the following:
//	Calling of private member functions inside public member function

#include <iostream>
#include<string>
using namespace std;
class students{
    string name;
    int rollno;
    string deg;
    string hostel;
    float cgpa;
    void tell(){
        cout<<"enter name and roll no: ";
        getline(cin, name);
        cin>>rollno;
        cin.ignore(); }
    public:
    void get(){
        tell();
        cout<<"enter deg: ";
        getline(cin, deg);
        cout<<"enter hostel: ";
        cin>>hostel;
        cout<<"enter cgpa: ";
        cin>>cgpa; };
    void diplay(){
        cout<<"your name: "<<name<<endl;
        cout<<"your roll no: "<<rollno<<endl;
        cout<<"your deg: "<<deg<<endl;
        cout<<"your hostel: "<<hostel<<endl;
        cout<<"your cgpa: "<<cgpa;
    }
};
int main() {
    students A;
    A.get();
    A.diplay();
    return 0;
}

