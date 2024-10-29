//	Create a code to implement the namespace and use similar
//	variables and functions defined in different code sections.

#include <iostream>
using namespace std;
namespace sq{
    void disp(int a){
        cout<<a*a;}}
namespace circle{
    void disp(int a){
        cout<<3.14*a*a; }}
int main() {
    sq::disp(5);
    cout<<endl;
    circle::disp(10);
    return 0;  }

