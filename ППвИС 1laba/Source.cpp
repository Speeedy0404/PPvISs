#include "Vector.h"
int main() {

	Vector a, c(37, 4, 7), f, d, b(3, 4, 5), i, n;
	double number;
	cin >> a;
	i = a + b;
	i += b;
	f = c - b;
	f -= b;
	d = b * c;
	c *= b;
	n = b * 3;
	n *= 4;
	n /= 12;
	number = b ^ c;
	if (b < c)
		cout << 1 << endl;
	else
		cout << 0 << endl;
	cout << long_of_vector(b);
	cout << i;
	cout << f;
	cout << b * c;
	cout << n;
	cout << number;
	return 0;
}
