using namespace std;

#include<iostream>

class vector {
	public:
		double x, y;
		double surface() {
			double s;
			s = x * y;
			return s<0 ? -s : s;
		}
};

int main() {
	vector a;
	
	a.x = 3;
	a.y = 4;
	
	cout << "The surface is: " << a.surface() << endl;
	
	return 0;
}
