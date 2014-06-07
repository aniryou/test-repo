#include<iostream>

using namespace std;

double test(double a, double b) {
	return a + b;
}

int test(int a, int b) {
	return a - b;
}

int main() {
	cout << test(14.0, 5.0) << endl;
	cout << test(14, 5) << endl;
	
	return 0;
}
