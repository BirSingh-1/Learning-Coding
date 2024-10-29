//	Write a program to add data objects of two different classes using friend functions.

#include <iostream>
using namespace std;
class B;
class A{
    int a;
    public:
    A(int x){
      a=x;
	}
    friend void C(A x,B y);
    void dis(){
        cout<<"a is: "<<a;
	}  
};
class B{
    int b;
    public:
    B(int x){
      b=x;
	}
    friend void C(A x,B y);
    void dis(){
        cout<<"b is: "<<b;
	}
};
void C(A a,B b){
    cout<<"sum of given no.s are: "<<a.a+b.b;
}
int main() {
	int x,y;
	cout<<"enter the two no's resp: ";
	cin>>x>>y;
    A a(x);
    B b(y);
    C(a,b);
    return 0;
}

