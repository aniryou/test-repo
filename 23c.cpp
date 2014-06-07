using namespace std;

#include<iostream>
#include<cmath>

class vector {
private:

public:
	double x;
	double y;
	
	vector(double=0, double=0);
	vector(const vector&);
	vector &operator =(const vector&);
	vector operator +(const vector&);
	vector operator -(const vector&);
	vector operator -();
	vector operator *(const vector&);
	vector operator *(double);
	double module();
	void set_length(double=1);
	
	friend ostream &operator <<(ostream &, const vector &);
	friend vector operator *(double, const vector&);
};

vector::vector(double a, double b) {
	x = a;
	y = b;
}

vector::vector(const vector& v) {
	x = v.x;
	y = v.y;
}

vector& vector::operator =(const vector& v) {
	x = v.x;
	y = v.y;
	return *this;
}

vector vector::operator +(const vector& v) {
	return vector(x+v.x, y+v.y);
}

vector vector::operator -(const vector& v) {
	return vector(x-v.x, y-v.y);
}

vector vector::operator -() {
	return vector(-x, -y);
}

vector vector::operator *(const vector& v) {
	return (x*v.x, y*v.y);
}

vector vector::operator *(double d)  {
	return vector(x*d, y*d);
}

vector operator *(double d, const vector& v) {
	return vector(d*v.x, d*v.y);
}

double vector::module() {
	return sqrt(x*x + y*y);
}

void vector::set_length(double len) {
	double mod = this->module();
	x = x/mod * len;
	y = y/mod * len;
}

ostream &operator <<(ostream &o, const vector& v) {
	o << "(" << v.x << ", " << v.y << ")";
	return o;
}

int main() {
	vector c(3, 5);
	vector *r;
	
	r = new vector;
	cout << *r << endl;
	
	r->x = 94;
	r->y = 345;
	cout<< *r << endl;
	
	r = new vector(94, 343);
	cout << *r << endl;
	
	*r = *r - c;
	r->set_length(3);
	cout << *r << endl;
	
	delete r;
	
	r = &c;
	cout << *r << endl;
	
	r = new vector(78, 345);
	cout << *r << endl;
	
	cout << "x component of r: " << r->x<< endl;
	cout << "x component of r: " << (*r).x << endl;
	
	delete r;
	
	r = new vector[4];
	r[3] = vector(4, 5);
	cout << r[3].module() << endl;
	
	delete[] r;
	
	int n=5;
	r = new vector[n];
	
	r[1] = vector(432, 3);
	cout<< r[1] << endl;
	
	delete[] r;
	
	return 0;
}
