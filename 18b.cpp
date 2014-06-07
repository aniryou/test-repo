#include<iostream>

using namespace std;

class vector {
public:
	double x, y;
	
	vector(double a=0, double b=0) {
		x = a;
		y = b;
	}
};

ostream &operator << (ostream &o, vector v) {
	o << "(" << v.x << ", " << v.y << ")";
	return o;
}

int main() {
	vector k, m(43, 2);
	
	cout << "Vector k: " << k << endl;
	cout << "Vector m: " << m << endl;
	
	return 0;
}
