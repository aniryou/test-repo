using namespace std;

#include<iostream>
#include<cmath>

class vector {
private:
	
public:
	double x, y;
	
	vector(double a=0, double b=0) {
		x = a;
		y = b;
	}
	
	virtual double module() {
		return sqrt(x*x + y*y);
	}

	virtual double surface() {
		return x + y;
	}
	
	friend ostream& operator <<(ostream &, const vector&);
};

class trivector : public vector {
private:

public:
	double z;
	
	trivector(double a=0, double b=0, double c=0) : vector(a, b) {
		z = c;
	}
	
	double module() {
		return sqrt(x*x + y*y + z*z);
	}
	
	double surface() {
		return (x + y + z);
	}
	
	friend ostream& operator <<(ostream &, const trivector&);
};

ostream& operator <<(ostream& o, const vector& v) {
	o << "(" << v.x << ", " << v.y <<")";
	return o;
}

ostream& operator <<(ostream& o, const trivector& t) {
	o << "Vector (" << t.x << ", " << t.y << ", " << t.z << ")";
	return o;
}

void test(vector &k) {
	cout << "Test Result: " << k.module() << endl;
}

int main() {
	vector a(4, 5);
	trivector b(4, 5, 6);
	
	cout << "a(4, 5)    b(1, 2, 3)" << endl << endl;
			
	vector *r;
	
	r = &a;
	cout << "Module of vector a: " << r->module() << ", Surface: " << r->surface() << endl;
		
	r = &b;
	cout << "Module of trivector b: " << r->module() << ", Surface: " << r->surface() << endl;
	
	test(a);
	
	test(b);
	
	vector &s = b;
	cout << "Module of trivector b: " << s.module() << endl;
	
	return 0;
}
