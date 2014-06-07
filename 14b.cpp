using namespace std;

#include<iostream>

struct vector {
	int x;
	int y;
};

ostream &operator << (ostream &o, vector a) {
	o << "(" << a.x << ", " << a.y << ")";
	return o;
}

int main() {
	vector v;
	
	v.x = 2;
	v.y = 3;
	
	cout << v << endl;
	
	return 0;
}
