//	A logistics company needs a software system to manage its vehicle fleet. All vehicles share common attributes 
//	like make, model, and year. Trucks have additional attributes like load_capacity. Furthermore, refrigerated trucks have
//	a special attribute called temperature_control. Implement a base class Vehicle with common attributes. Then, create
//	derived class Truck that adds the load_capacity attribute. Finally, create another derived class RefrigeratedTruck a that
//	inherits from Truck and adds the temperature_control attribute. Demonstrate how multilevel inheritance works in this case.

#include<iostream>
#include<string>
using namespace std;

class Vehicle{
	protected:
		int make; 
		int model;
		int year;
};
class Truck:public Vehicle{
	protected:
		int load_capacity;
};
class RefrigeratedTruck:public Truck{
	int temperature_control;
};
int main(){
	
}
// add and display details as per your convenience 
