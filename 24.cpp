using namespace std;

#include<iostream>

class vector {
public:
	double x, y;
	static int count;
	
	vector(double a=0, double b=0) {
		x = a;
		y = b;
		++count;
	}
	
	~vector() {
		--count;
	}
};

int vector::count=0;

ostream &operator <<(ostream &o, const vector &v) {
	o << "(" << v.x << ", " << v.y << ")";
	return o;
}

int main() {
	cout << "Numer of vectors:" << endl;
	
	vector a;
	cout << vector::count << endl;
	
	vector b;
	cout << vector::count << endl;
	
	vector *r, *u;
	
	r = new vector;
	cout << vector::count << endl;
	
	u = new vector;
	cout << vector::count << endl;
	
	delete r;
	cout << vector::count << endl;
	
	delete u;
	cout << b.count << endl;
	
	return 0;
}
