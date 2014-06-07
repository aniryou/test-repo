using namespace std;

#include<iostream>
#include<cstring>

class person {
public:
	char *name;
	int age;
	
	person(char *s="no name", int a=-1) {
		name = strdup(s);
		strcpy(name, s);
		age = a;
	}
	
	person(const person &p) {
		cout << "Copy Constructor is invoked" << endl;
		name = strdup(p.name);
		strcpy(name, p.name);
		age = p.age;
	}
	
	person &operator =(const person &p) {
		cout << "overloaded = operator is invoked" << endl;
		name = strdup(p.name);
		strcpy(name, p.name);
		age = p.age;
		return *this;
	}
	
	~person() {
		delete name;
	}
};

void modify_person(person &p) {
	p.age += 7;
}

person compute_person(person p) {
	p.age += 7;
	return p;
}

ostream &operator <<(ostream &o, person &p) {
	o << "Name: " << p.name << ", Age: " << p.age << endl;
	return o;
}

int main() {
	person p;
	cout << p << endl << endl;
	
	person k("Arpita Choudhary", 29);
	cout << k << endl << endl;
	
	p = k;
	cout << p << endl << endl;
	
	p = person("Anil Choudhary", 30);
	cout << p << endl << endl;
	
	compute_person(p);
	cout << p << endl << endl;
	
	modify_person(k);
	cout << k << endl << endl;
	
	return 0;
}
