#include<iostream>

using namespace std;

void change(double &r, double s) {
	r = 100;
	s = 200;
}

int main() {
	double k, m;
	
	k = 3;
	m = 4;
	
	change(k, m);
	
	cout << k << ", " << m << endl;
	
	return 0;
}
