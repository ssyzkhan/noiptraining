#include <iostream>
#include "µÚ1µ¥Ôª.h"

using namespace std;
void Unit1::P0090101() {
	const float pi = 3.14159;
	double r, l, s;
	cin >> r;
	l = 2 * pi * r;
	s = pi * r * r;
	cout << l << ' ' << s << endl;
}
void Unit1::P0150101() {
	int a, b, c;
	cin >> a >> b;
	c = 3 * a - 2 * b + 1;
	cout << c << endl;
}
void Unit1::P0160201() {
	int a, b, c, d, ans;
	cin >> a >> b >> c;
	d = a - b;
	a = d + c;
	ans = a * b;
	cout << "Ans=" << ans << endl;
}
void Unit1::P0170201() {
	int a, b, c;
	cin >> a >> b;
	c = 3 * a - 2 * b + 1;
	cout << c << endl;
}