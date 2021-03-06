#include<iostream>

using namespace std;

double &biggest(double &r, double &s) {
	return (r > s) ? r : s;
}

int main() {
	double k = 3;
	double m = 7;
	
	cout << "k: " << k << endl;
	cout << "m: " << m << endl;
	
	biggest(k, m) = 10;
	
	cout << "k: " << k << endl;
	cout << "m: " << m << endl;
	
	biggest(k, m)++;
	
	cout << "k: " << k << endl;
	cout << "m: " << m << endl;
	
	return 0;
}
