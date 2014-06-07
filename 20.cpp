using namespace std;

#include<iostream>

class vector {
public:
	double x;
	double y;
	
	double surface();
};

double vector::surface() {
	return x * y;
}

int main() {
	vector v;
	
	v.x = 3;
	v.y = 4;
	
	cout <<"Surface: " << v.surface() << endl;
	
	return 0;
}
