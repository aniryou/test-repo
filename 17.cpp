using namespace std;

#include<iostream>

struct vector {
	double x;
	double y;
	
	double surface() {
		double s;
		s = x * y;
		if(s<0) s = -s;
		return s;
	}
};

int main() {
	vector v;
	
	v.x = 3;
	v.y = 4;
	
	cout << "The surface of v: " << v.surface() << endl;
	
	return 0;
}
