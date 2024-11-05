//	Polymorphism is also known as dynamic linkage or late binding. Write a C++ program 
//	to implement (i) compile time polymorphism by function overloading 
#include<iostream>
using namespace std;

class base{
	public:
		void display(){
			cout<<"base class"<<endl;
		}
};
class derived:public base{
	public:
		void display(){
			cout<<"derived class"<<endl;
		}
};
int main(){
	base b1;
	b1.display();
	base *b2;
	b2=&b1;
	b2->display();
	derived d1;
	d1.display();
	derived *d2;
	d2=&d1;
	d2->display();
	b2=&d1;			// parent pointer can store address of child but it doesn't have any info about the fnctns of the child class
	b2->display();	
}
