#include<iostream>

using namespace std;

class vector {
public:
	double x;
	double y;
	
	vector() {
		x = y = 0;
	}
	
	vector(double a, double b) {
		x = a;
		y = b;
	}
};

ostream &operator <<(ostream &o, vector v) {
	o << "(" << v.x << ", " << v.y << ")";
	return o;
}

int main() {
	vector k;
	
	cout << "Vector k: " << k << endl;
	
	vector m(45, 2);
	cout << "Vector m: " << m << endl;
	
	k = vector(23, 2);
	cout << "Vector k: " << k << endl;
	
	return 0;
}
