using namespace std;

#include<iostream>
#include<cmath>

class vector {
friend ostream &operator <<(ostream &, const vector &);
private:
	double x, y;
	
public:
	vector(double=0, double=0);
	
	vector operator +(vector);
	vector operator -(vector);
	vector operator -();
	vector operator *(double);
	double module();
	void set_length(double=1);
};

vector::vector(double a, double b) {
	x = a;
	y = b;
}

vector vector::operator +(vector v) {
	return vector(x+v.x, y+v.y);
}

vector vector:operator -(vector v) {
	vector(x-v.x, y-v.y);
}

vector vector::operator -() {
	return vector(-x, -y);
}

vector vector operator *(double a) {
	return vector(a*x, a*y);
}


