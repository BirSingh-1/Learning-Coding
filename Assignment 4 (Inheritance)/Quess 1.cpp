//	Write a simple base class, then a derived class and use objects of both of 
//	them in the main function. It will be a simple illustration of inheritance.

#include<iostream>
using namespace std;
class A{
	public:
		int a=5;
		void display(){
			cout<<"value of a in class A is: "<<a<<endl;
		}		
};
class B:public A{
	int b=10;
	public:
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
