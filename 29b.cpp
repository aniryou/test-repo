using namespace std;

#include<iostream>
#include<cmath>

class octopus {
public:
	virtual double module() = 0;
};

class cuttlefish {
public:
	virtual int test() = 0;
};

class vector : public octopus, public cuttlefish {
public:
	double x, y;
	
	vector(double a=0, double b=0) {
		x = a;
		y = b;
	}
	
	double module() {
		return sqrt(x*x + y*y);
	}
	
	int test() {
		if(x>y) return 1;
		return 0;
	}
};

int main() {
	vector a(1, 2), b(2, 1);
	
	cout << a.module() << endl;
	cout << a.module() << endl;
	
	cout << a.test() << endl;
	cout << b.test() << endl;
	
	return 0;
}
