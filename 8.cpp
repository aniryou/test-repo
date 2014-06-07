using namespace std;
#include<iostream>

int main() {
	double a = 3.1415927;
	
	double &b = a;
	
	b = 89;
	
	cout << "a contains: " << a << endl;
	
	return 0;
}
