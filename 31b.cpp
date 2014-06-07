using namespace std;

#include<iostream>
#include<fstream>

int main() {
	fstream f;
	char c;
	
	cout << "What's inside the test.txt file" << endl;
	cout << endl;
	
	f.open("test.txt", ios::in);
	
	while(!f.eof()) {
		f.get(c);
		cout << c;
	}
	
	f.close();
	
	return 0;
}
