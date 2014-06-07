#include<iostream>

using namespace std;

class vector {
public:
	double x, y;
	const static double pi = 3.1415927;
	
	vector(double a=0, double b=0) {
		x = a;
		y = b;
	}
	
	double cylinder_volume() {
		return x * x /4 * pi * y;
	}
};

int main() {
	vector v(3, 4);
	cout << v.cylinder_volume() << endl;
	
	return 0;
}
