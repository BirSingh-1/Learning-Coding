//	Create a class named 'Rectangle' with two data members- length and breadth and a function to 
//	calculate the area which is 'length*breadth'. The class has three constructors which are : 
//	(a) having no parameter - values of both length and breadth are assigned zero. 
//	(b) having two numbers as parameters - the two numbers are assigned as length and breadth respectively. 
//	(c) having one number as parameter - both length and breadth are assigned that number. 
//	Now, create objects of the 'Rectangle' class having none, one and two parameters and print their areas. 

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
    void display(){
        cout<<"area is: "<<l*b<<endl;   
	}  
};
int main(){
	rect a;
    a.display();
    rect b(5);
    b.display();
    rect c(5,10);
    c.display();
    return 0;  
}

