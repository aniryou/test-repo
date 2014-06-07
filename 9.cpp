using namespace std;

#include<iostream>
#include<cmath>

namespace first {
	int a;
	int b;
}

namespace second {
	double a;
	double b;
}

int main() {
	first::a = 2;
	first::b = 3;
	
	second::a = 6.453;
	second::b = 4.1e4;
	
	cout << first::a + second::a << endl;
	cout << first::b + second::b << endl;
	
	return 0;
}
