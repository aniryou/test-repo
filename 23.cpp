using namespace std;

#include<iostream>
#include<cmath>

class vector {
private:
	double x;
	double y;

public:	
	vector(double a=0, double b=0) {
		x = a;
		y = b;
	}

	vector(const vector &v) {
		x = v.x;
		y = v.y;
	}
	
	vector operator +(const vector &);
	vector operator -(const vector &);
	vector operator -();
	vector operator *(const vector &);
	vector &operator =(const vector &);
	vector operator ++(int);
	vector &operator ++();
	double module();
	void set_length(double=1);
	
	friend ostream &operator <<(ostream &, const vector &);
};

vector vector::operator +(const vector &v) {
	vector r;
	
	r.x = x + v.x;
	r.y = y + v.y;
	
	return r;
}

vector vector::operator *(const vector &v) {
	vector r;
	
	r.x = x * v.x;
	r.y = y * v.y;
	
	return r;
}

vector vector::operator -(const vector &v) {
	vector r;
	
	r.x = x - v.x;
	r.y = y - v.y;
	
	return r;
}

vector vector::operator -()  {
	vector r;
	
	r.x = -x;
	r.y = -y;
	
	return r;
}

vector &vector::operator=(const vector &v) {
	x = v.x;
	y = v.y;
	
	return *this;
}

vector &vector::operator ++() {
	x++;
	y++;
	
	return *this;
}

vector vector::operator ++(int) {
	vector r;
	
	r.x = x++;
	r.y = y++;
	
	return r;
}

double vector::module() {
	return sqrt(x*x + y*y);
}

void vector::set_length(double len) {
	x = x / len;
	y = y / len;
}

ostream &operator <<(ostream &o, const vector &v) {
	o << "(" << v.x << ", " << v.y << ")";
	return o;
}

int main() {
	vector u(11, 12), v(3, 4);
	vector w, x, y, z;
	
	w = u + v;
	x = u - v;
	y = -u;
	z = u * v;
	
	cout << u << endl;
	cout << v << endl;
	cout << w << endl;
	cout << x << endl;
	cout << y << endl;
	cout << z << endl;
	cout << z++ << endl<< z << endl;
	cout << ++z << endl;
	
	return 0;
}
