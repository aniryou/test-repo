#include<iostream>

using namespace std;

int main() {
	double a;
	
	cout << "Type a number:	";
	cin >> a;
	
	{
		int a = 1;
		a = a * 10 + 4;
		cout << "Local number: " << a << endl;
	}
	
	cout << "You typed: " << a << endl;
	
	return 0;
}
