//	Implement a base class Book with attributes title, author, and price. Then, create
//	a derived class Textbook that inherits from Book and adds a new attribute subject.
//	Demonstrate how single inheritance is used to manage the data for general books and textbooks.

#include<iostream>
#include<string>
using namespace std;

class Book{
	public:
		string title="Obj Oriented Prgrmg";
		string author="Balagurusamy";
		float price=500.00;
};
class Textbook:public Book{
	string subject="CPP";
	public:
	void display(){
		cout<<title<<endl<<author<<endl<<subject<<endl<<price;
	}	
};
int main(){
	Textbook a;
	a.display();
	return 0;
}
