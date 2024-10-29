//	Define a class Rectangle with variables width and height of integer 
//	type along with following: (a) void getdata() to initialize object values
//	(b) void calculatearea() to calculate and display the area.

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
        void calcarea(){
            int area=length*breadth;
            cout<<"area is: "<<area; 
		}
};
int main(){
    rect x;
    x.getdata();
    x.calcarea();
    return 0;
}

