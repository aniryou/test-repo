using namespace std;

#include<iostream>

int main() {
	double a = 12 * 3.25;
	double b = a + 1.12;
	
	cout << "a contains : " << a << endl;
	cout << "b contains : " << b << endl;
	
	a = a * 2 + b;
	
	double c = a + b * a;
	
	cout << "c contains : " << c << endl;
	
	return 0;
}
