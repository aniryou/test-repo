using namespace std;

#include<iostream>

double *silly_function() {
	static double r = 342;
	return &r;
}

int main() {
	double *a;
	
	a = silly_function();
	
	double &b = *a;
	
	b += 1;
	b = b * b;
	b += 4;
	
	cout << "Content of *a, b and r: " << b << endl;
	
	return 0;
}
