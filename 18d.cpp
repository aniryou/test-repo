using namespace std;

#include<iostream>
#include<cstdlib>

#define OUT_OF_BOUND 1

template <class MyClass>
class array {
public:
	int size;
	MyClass *data;
	
	array(int n) {
		size = n;
		data = new MyClass[n];
	}
	
	~array() {
		cout << "About to destruct array" << endl;
		for(int i=0; i<size; i++)
			delete data[i];
		delete[] data;
	}
	
	MyClass &operator[] (int i) {
		if(i<0 || i>=size)
			throw OUT_OF_BOUND;
		return data[i];
	}
};

template<class MyClass>
ostream &operator <<(ostream &o, array<MyClass> &a) {
	for(int i=0; i<a.size; i++) {
		o << a.data[i] << " ";
	}
	return o;
}

int main() {
	array<char *> i_arr(2);
	
	try {
		i_arr[0] = "Arpita";
		i_arr[1] = "Choudhary";
		i_arr[2] = "Kurdiya";
	} catch(int errcode) {
		switch(errcode) {
			case OUT_OF_BOUND:
				cout << "Array index out of Bound" << endl;
				break;
				
			default:
				break;
		}
	}
	
	cout << i_arr << endl;
	
	return 0;
}
