//	Write a program to implement (a) pointer to an object (b) this pointer.
//	Practice both ‘.’ (dot operator) and ‘->’ (arrow operator). 

#include <iostream>
using namespace std;
class a{
    int x;
    public:
    void val(int m){
        this->x=m; }
    int dpl(){
        return x;   } };
int main() {
    a obj,*p;
    p=&obj;
    int x;
    obj.val(8);
    x=p->dpl();
    cout<<x;
    return 0;  }

