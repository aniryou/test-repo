using namespace std;

#include<iostream>
#include<cmath>

inline double hypotnuse(double a, double b) {
	return sqrt(a*a + b*b);
}

int main() {
	double k=6, m=9;
	
	cout << hypotnuse(k, m) << endl;
	cout << sqrt(k*k + m*m) << endl;
	
	return 0;
}
