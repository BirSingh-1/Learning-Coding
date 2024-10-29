//	Write a program using Array of Objects to display area of multiple rectangles. 

#include <iostream>
using namespace std;
class rect{
        float length;
        float breadth;
        public:
        void getdata(){
            cout<<"length: ";
            cin>>length;
            cout<<"breadth: ";
            cin>>breadth; }
        void calcar(){
            int area=length*breadth;
            cout<<area;  }};
    int main() {
    rect x[3];
    int i;
    for(i=0;i<3;i++){
    	cout<<"enter the details for rect "<<i+1<<endl;
    	x[i].getdata();
	}
	for(i=0;i<3;i++){
		cout<<"area of rect "<<i+1<<":	";
		x[i].calcar();
		cout<<endl;
	}
    return 0;  }

