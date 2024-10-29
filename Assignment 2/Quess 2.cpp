#include <iostream>
using namespace std;
class B;
class A{
    int a;
    public:
    A(int x){
      a=x;
	}
    friend void C(A &x,B &y);
    void dis(){
        cout<<"a is: "<<a<<endl;
	}
};
class B{
    int b;
    public:
    B(int x){
      b=x;
	}
    friend void C(A &x,B &y);
    void dis(){
        cout<<"b is: "<<b;
	}
};
void C(A &a,B &b){
    int temp;
    temp=a.a;
    a.a=b.b;
    b.b=temp;
}
int main() {
	int x,y;
	cout<<"enter value of a and b resp: ";
	cin>>x>>y;
    A a(x);
    B b(y);
    C(a,b);
    cout<<"after swapping: "<<endl;
    a.dis();
    b.dis();
    return 0;
}

