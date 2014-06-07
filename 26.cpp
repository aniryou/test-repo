#include<iostream>
#include<cmath>

using namespace std;

class vector {
private:	
	double x, y;
	
public:		
	vector(double a=0, double b=0) {
		x = a;
		y = b;
	}
	
	double module() {
		return sqrt(x*x + y*y);
	}
	
	double surface() {
		return x * y;
	}
};

class trivector : vector {
private:	
	double z;
	
public:	
	trivector(double a, double b, double c) : vector(a, b) {
		z = c;
	}
	
	trivector(vector v) : vector(v.x, v.y) {
		z = 0;
	}
	
	double module() {
		return sqrt(x*x + y*y + z*z);
	}
	
	double volume() {
		return this_surface() * z;
	}
};

ostream& operator <<(ostream& o, const vector& v) {
	o << "(" << v.x << ", " << v.y << ")";
	return o;
}

ostream& operator <<(ostream& o, const trivector& t) {
	o << "(" << t.x << ", " << t.y << ", " << t.z << ")";
	return o;
}

int main() {
	vector a(4, 5);
	trivector b(1, 2, 3);
	
	cout << "a(4, 5), b(1, 2, 3), *r=b" << endl << endl;
	
	cout << "Surface of a: " << a.surface() << endl;
	cout << "Volume of b: " << b.volume() << endl;
	cout << "Surface of base of b: " << b.surface() << endl;
	
	cout << "Module of a: " << a.module() << endl;
	cout << "Module of b: " << b.module() << endl;
	cout << "Module of base of b: " << b.vector::module() << endl;
	
	trivector  k;
	k = a;
	
	vector j;
	j = b;
	
	vector *r;
	r = &b;
	
	cout << "Surface of r: " << r->surface() << endl;
	cout << "Module of r: " << r->module() << endl;
	
	return 0;
}
