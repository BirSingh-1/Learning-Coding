//	Implement dynamic memory allocation. Use new and delete keywords.  
//	(For integer variable, integer array, class objects, Array of Objects)

#include<iostream>
using namespace std;
class abc{
	int a;
	public:
		abc(){
			a=5;
		}
		void display(){
			cout<<"value of a is: "<<a<<endl;
		}
		~abc(){
			cout<<"destructor"<<endl;
		}
};
int main(){
	int *m=new int;
	*m=4;
	cout<<*m<<endl;
	abc *x=new abc();
	x->display();
	int *a=new int[5];
	for(int i=0;i<5;i++){
		a[i]=i+1;
	}
	for(int i=0;i<5;i++){
		cout<<a[i]<<"\t";
	}
	cout<<endl;
	abc *y=new abc[5];
	for(int i=0;i<5;i++){
		y[i].display();
	}
	delete m;
	delete x;
	delete []a;
	delete []y;
}
