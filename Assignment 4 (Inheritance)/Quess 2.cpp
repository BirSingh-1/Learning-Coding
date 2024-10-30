//	How can you use constructors and destructors in C++ inheritance? Write a program to illustrate

#include<iostream>
using namespace std;
class A{
	public:
		int a;
		A(){
			a=5;
		}
		void display(){
			cout<<"value of a in class A is: "<<a<<endl;
		}		
};
class B:public A{
	int b;
	public:
		B(){
			b=10;
		}
		void display(){
			cout<<"value of b in class B is: "<<b<<endl;
			cout<<"value of a in class B is: "<<a<<endl;
		}
};
int main(){
	A x;
	x.display();
	B y;
	y.display();
}
