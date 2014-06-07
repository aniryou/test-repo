#include<iostream>
#include<strstream>
#include<cstring>
#include<cmath>

using namespace std;

int main() {
	char a[1024];
	ostrstream b(a, 1024);
	
	b.seekp(0);
	
	b << "2 + 2 = " << 2+2 << ends;
	
	cout << a << endl;
	
	double v = 2;
	
	strcpy(a, "A sinus: ");
	b.seekp(strlen(a));
	b << "sin(" << v << ") = " << sin(v) << ends;
	
	cout << a << endl;
	
	return 0;
}
