//	A software company is creating a program to simulate a car's dashboard. The dashboard to display 
//	speed, fuel level, and temperature. The speed is controlled by a Speedometer class, the fuel level 
//	by a FuelGauge class, and the temperature by a Thermometer class. Implement the three classes: Speedometer, 
//	FuelGauge, and Thermometer, each with relevant attributes and methods. Then, create a Dashboard class that 
//	inherits from all three classes to display the combined information on the dashboard. 
//	Demonstrate how multiple inheritance is used to build this class.

#include<iostream>
#include<string>
using namespace std;

class speedometer{
	protected:
		int speed=60;
};
class fuelgauge{
	protected:
		string fuel="Half full";
};
class thermometer{
	protected:
		string temp="High";
};
class dashboard:public speedometer,public fuelgauge,public thermometer{
	public:
		void display(){
			cout<<"speed in km/hr is: "<<speed<<endl;
			cout<<"fuel tank is: "<<fuel<<endl;
			cout<<"temp of engine is: "<<temp<<endl; 
	}
};
int main(){
	dashboard car1;
	car1.display();
}
