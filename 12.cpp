#include<iostream>

using namespace std;

double test(double a, double b=7) {
	return a - b;
}

int main() {
	cout << test(14, 5) << endl;
	cout << test(14) << endl;
	
	return 0;
}
