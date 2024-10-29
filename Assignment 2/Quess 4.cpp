//	Write a program to demonstrate the working of friend class. 

#include <iostream>
using namespace std;
class B;
class A{
    int a;
    public:
    A(int x){
      a=x;   }
    friend class B;
    void dis(){
        cout<<"a is: "<<a;
	}
};
class B{
    int b;
    public:
    B(int x){
      b=x;  }
    void dis(A obj){
        cout<<"a+b is: "<<obj.a+b;  
	}  
};
int main() {
    A a(10);
    B b(5);
    b.dis(a);
    return 0;
}

