#include<iostream>

using namespace std;

int main() {
	int a;
	char s[100];
	
	cout << "this is a simple program" << endl;
	cout << endl;
	
	cout << "Type in your age: ";
	cin >> a;
	
	cout << "Type in your name: ";
	cin >> s;
	
	cout << endl;
	
	cout << "Hello " << s << " you're " << a << " years old" << endl;
	cout << endl << endl << "Bye!" << endl;
	
	return 0;
}
