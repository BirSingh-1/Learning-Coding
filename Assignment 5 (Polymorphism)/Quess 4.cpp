//	Write a program to implement (i) virtual function (ii) pure virtual function 
#include <iostream>
using namespace std;

class Base {
public:
    virtual void display() {
        cout << "Base class display function called." << endl;
    }
    virtual void show() = 0; // This makes Base an abstract class therefore we can't make its object
};

class Derived : public Base {
public:
    void display(){
        cout << "Derived class display function called." << endl;
    }
    void show(){
        cout << "Derived class show function called." << endl;
    }
};

int main() {
    Base *ptr = new Derived();
    ptr->display(); 
    ptr->show();    
    delete ptr;
    return 0;
}

