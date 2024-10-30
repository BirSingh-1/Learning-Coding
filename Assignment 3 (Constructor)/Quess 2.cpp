//	Redefine Quess 1 by creating an array of objects of the class Rectangle and 
//	calculate area for each object calling different constructors. Also implement 
//	constructors with default arguments and destructor in this program.

#include <iostream>
using namespace std;
class rect{
    int l, b;
    public:
    rect(){
    	l=5;
     	b=10;    
	}
    rect(int x){
        l=x;
        b=10;    
	}
    rect(int x, int y){
        l=x;
        b=y;    
	}
    void dis(){
        cout<<"area is: "<<l*b<<endl;   
	}  
};
int main() {
	rect *r=new rect[6];
    r[1].dis();
    r[2]=rect(5);
    r[2].dis();
    r[3]=rect(5,10);
    r[3].dis();
    r[4].dis();
    return 0;  
}

