#include<iostream>
#include<cstring>

using namespace std;

class person {
public:
	char *name;
	int age;
	
	person(char *n="no name", int a=0) {
		name = strdup(n+1);
		strcpy(name, n);
		age = a;
		cout << "Instance initialized" << endl;
	}
	
	~person() {
		cout << "Instance " << name << " going to be deleted " << endl;
		delete name;
	}
};

ostream &operator << (ostream &o, person &p) {
	o << "Name: " << p.name << ", age: " << p.age;
	return o;
}

int main() {
	cout << "Hello!" << endl << endl;
	
	person a;
	cout << a << endl << endl;
	
	person b("John");
	cout << b << endl << endl;
	
	b.age = 21;
	cout << b << endl << endl;
	
	person c("Miki", 45);
	cout << c << endl << endl;
	
	cout << "Bye!" << endl << endl;
	
	return 0;
}
