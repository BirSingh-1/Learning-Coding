//	Verify that an abstract class can have constructors. 

#include <iostream>
using namespace std;

class AbstractBase {
public:
    AbstractBase(){
        cout << "AbstractBase class constructor called." << endl;
    }
    virtual void show() = 0;
};

class Derived : public AbstractBase {
public:
    Derived(){
        cout << "Derived class constructor called." << endl;
    }
    void show() override {
        cout << "Derived class show function called." << endl;
    }
};

int main() {
    Derived d;
    d.show();
    return 0;
}

