using namespace std;

#include<iostream>

template <class ttype1, class ttype2>
ttype1 minimum(ttype1 a, ttype2 b) {
	ttype1 r, b_converted;
	
	b_converted = (ttype1) b;
	r = a;
	if(b_converted < a) r = b;
	
	return r;
}

int main() {
	int i;
	double d;
	
	i = 45;
	d = 7.41;
	
	cout << "Most little: " << minimum(i, d) << endl;
	cout << "Most little: " << minimum(d, i) << endl;
	cout << "Most little: " << minimum('A', i) << endl;
	
	return 0;
}
