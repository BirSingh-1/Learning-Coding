//	Write C++ programs to practice & understand various pointer objects in the main function 
//	(i) Base *b = new Base(); (ii) Base *b = new Derived() (iii) Derived *d = new Base()
//	(iv) Derived *d = new Derived(). 
#include <iostream>
using namespace std;

class Base {
public:
    void baseFunction() {
        cout << "Base class function called." << endl;
    }
    
    virtual void virtualFunction() {
        cout << "Base class virtual function called." << endl;
    }
};


class Derived : public Base {
public:
    void baseFunction() {
        cout << "Derived class overrides baseFunction." << endl;
    }
    
    void derivedFunction() {
        cout << "Derived class specific function called." << endl;
    }
    
    void virtualFunction() override {
        cout << "Derived class virtual function called." << endl;
    }
};

int main() {
    cout << "Case (i): Base *b = new Base();" << endl;
    Base *b1 = new Base();
    b1->baseFunction();           
    b1->virtualFunction();        
    cout << endl;

    cout << "Case (ii): Base *b = new Derived();" << endl;
    Base *b2 = new Derived();
    b2->baseFunction();           
    b2->virtualFunction();        
    cout << endl;
    
    cout << "Case (iii): Derived *d = new Base();" << endl;
    // Derived *d1 = new Base();   // This is an invalid case, will not compile.
    cout << "Error: Derived *d = new Base() is not allowed due to type incompatibility." << endl;
    cout << endl;

    cout << "Case (iv): Derived *d = new Derived();" << endl;
    Derived *d2 = new Derived();
    d2->baseFunction();           
    d2->derivedFunction();        
    d2->virtualFunction();        
    cout << endl;
    
    delete b1;
    delete b2;
    delete d2;

    return 0;
}

