//	Define a class Complex with variables real and imaginary along with following:
//	(a) void setComplex (float, float) to initialize object values. 
//	(b) void displayComplex()to show the complex number 
//	(c) Pass and return objects to calculate sum of two complex numbers. Display the sum.

#include <iostream>
using namespace std;
class complex{
    float real;
    float img;
        public:
    	void setcomplex(float a,float b){
            real=a;
            img=b; 
		}
        void dpyclx(){
            cout<<real<<" + "<<img<<" i";  
		}
        complex addclx(complex a){
        	complex h;
            h.real=real+a.real;
            h.img=img+a.img;
            return h;
        }  
};
int main() {
    complex x,y,z;
	int a,b,c,d;
    cout<<"enter real and img no. for 1: ";
    cin>>a>>b;
    cout<<"enter real and img no. for 2: ";
    cin>>c>>d;
    x.setcomplex(a,b);
    y.setcomplex(c,d);
    z=x.addclx(y);
    z.dpyclx();
    return 0; 
}

