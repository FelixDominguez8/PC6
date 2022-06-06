#include <iostream>
using namespace std;

class F {
public:
	F(int m = 1, int d = 1, int a = 1900, int h = 1, int mi = 1, int s = 1) {
		this->m = m; 
		this->a = a; 
		this->d = d;
		this->h = h;
		this->mi = mi;
		this->s = s;
	}
	F& operator++(int) { 
		d++; return *this; 
	}
	F operator--() { 
		d--; return *this;
	}
	F& operator--(int) { 
		d--; return *this;
	}
	F operator++() { 
		d++; return *this;
	}
private:
	unsigned int m, d, a, h, mi, s;
	friend int main();
};


int main() {
	F f; f++; cout << f.d << endl; --f; cout << f.d << endl;
	++f;
	f--;
	return 0;
}
