using namespace std;

#include<iostream>
#include<cmath>

class vector {
public:
	double x;
	double y;
	
	vector(double a=0, double b=0) {
		x = a;
		y = b;
	}
	
	double module() {
		return sqrt(x*x + y*y);
	}
	
	void set_length(double a=1) {
		double length;
		
		length = this->module();
		
		x = x / length * a;
		y = y / length * a;
	}
};

int main() {
	vector c(3, 5);
	
	cout << "The module of vector c: " << c.module() << endl;
	
	c.set_length(2);
	
	cout << "The module of vector c: " << c.module() << endl;
	
	c.set_length();
	
	cout << "The module of vector c: " << c.module() << endl;
	
	return 0;
}
