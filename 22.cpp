using namespace std;

#include<iostream>
#include<cmath>

class vector {
public:
	double x, y;
	
	vector(double a=0, double b=0) {
		x = a;
		y = b;
	}
	
	double module() {
		return sqrt(x*x + y*y);
	}
};

int main() {
	vector s[1000];
	
	vector t[3] = {vector(3, 4), vector(4, 5), vector(5, 6)};
	
	s[23] = t[2];
	
	cout << t[0].module() << endl;
	
	return 0;
}
