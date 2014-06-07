using namespace std;

#include<iostream>
#include<cstring>

int main() {
	double *d;
	
	d = new double;
	
	*d = 4.3;
	
	cout << "Type a number: ";
	cin >> *d;
	
	*d = *d + 5;
	
	cout << "Result: " << *d << endl;
	
	delete d;
	
	d = new double[15];
	
	d[0] = 4456;
	d[1] = d[0] + 567;
	
	cout << "Contents of d[1] " << d[1] << endl;
	
	delete []d;
	
	int n = 30;
	
	d = new double[n];
	
	for(int i=0; i<n; i++)
		d[i] = i;
	
	delete [] d;
	
	char *s;
	s = new char[100];
	
	strcpy(s, "Hello!");
	cout << s << endl;
	
	delete [] s;
	
	return 0;
}
