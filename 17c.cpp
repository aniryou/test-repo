using namespace std;

#include<iostream>

class vector {
	public:
		double x, y;
		
		double surface() {
			double s;
			s = x * y;
			return s < 0 ? -s : s;
		}
		
		vector its_opposite() {
			vector r;
			r.x = -x;
			r.y = -y;
			return r;
		}
		
		void be_opposited() {
			x = -x;
			y = -y;
		}
		
		void be_calculated(double a, double b, double c, double d) {
			x = a-c;
			d = b - d;
		}
		
		vector operator *(double a) {
			vector r;		
			r.x = a * x;
			r.y = a * y;		
			return r;
		}
};
		
ostream &operator << (ostream &o, vector v) {
	o << "(" << v.x << ", " << v.y << ")";
	return o;
}

int main() {
	vector a, b;
	
	a.x = 3;
	a.y = 5;
	
	b = a.its_opposite();
	
	cout << "Vector a: " << a << endl;
	cout << "Vector b: " << b << endl;
	
	b.be_opposited();
	cout << "Vector b: " << b << endl;
	
	a.be_calculated(7, 8, 3, 2);
	cout << "Vector a: " << a << endl;
	
	a = b * 2;
	cout << "Vector a: " << a << endl;
	
	a = b.its_opposite() * 2;
	cout << "Vector a: " << a << endl;
	
	cout << "x of opposite of a: " << a.its_opposite().x << endl;
	
	return 0;
}
