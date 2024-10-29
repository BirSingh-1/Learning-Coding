//	Write a program to define function cube() as inline for calculating cube of a number.

#include <iostream>
using namespace std; 
inline int cube(int a){return (a*a*a);
};
int main(){
	int x;
	cout<<"enter the no. for which you want to find the cube: ";
	cin>>x;
	cout<<"cube of "<<x<<" is: ";
	int y=cube(x);
	cout<<y;
	return 0;
}

