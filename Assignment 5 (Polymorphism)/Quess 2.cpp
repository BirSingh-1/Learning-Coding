//	Write a simple base class and a child class using public mode of inheritance.  
//	Implement the arrow operator to access the member functions of both parent and child class. 
#include<iostream>
using namespace std;

class base{
	public:
		void displaybase(){
			cout<<"base class"<<endl;
		}
};
class child:public base{
	public:
		void displaychild(){
			cout<<"derived class"<<endl;
		}
};
int main(){
	base b1;
	base *b2;
	b2=&b1;
	b2->displaybase();
	child d1;
	child *d2;
	d2=&d1;
	d2->displaychild();
}
