//	Polymorphism is also known as dynamic linkage or late binding. Write a C++ program 
//	to implement (ii) virtual function.
#include<iostream>
using namespace std;

class base{
	public:
		virtual void display(){
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
	b2=&d1;
	b2->display();	
}
