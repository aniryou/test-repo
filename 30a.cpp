#include<iostream>

using namespace std;

class vector {
private:
	double x, y;
	
public:
	void set_x(double x) {
		this->x = x;
	}
	
	void set_y(double y) {
		this->y = y;
	}
	
	double get_x() {
		return x;
	}
	
	double get_y() {
		return this->y;
	}
	
	double surface() {
		double s = x*y;
		return s>0 ? s : -s;
	}
};

int main() {
	vector a;
	
	a.set_x(3);
	a.set_y(4);
	
	cout << "a(" << a.get_x() << ", " << a.get_y() << "); surface: " << a.surface() << endl;
	
	return 0;
}
