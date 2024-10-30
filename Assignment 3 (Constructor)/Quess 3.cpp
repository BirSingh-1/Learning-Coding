//	Verify the following about destructor by writing the program: 
//	(i) Name should begin with tilde sign(~) and must match class name. 
//	(ii) There cannot be more than one destructor in a class.
//	(iii) Destructors do not allow any parameter.
//	(iv) They do not have any return type, just like constructors. 

#include <iostream>
using namespace std;
class rect{
    int l,b;
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
    ~rect(){
        cout<<"destructed constructor"<<endl;     
	}
};
int main(){
    rect a;
    a.dis();
    rect b(5);
    b.dis();
    rect c(5,10);
    c.dis();
    return 0; 
}

