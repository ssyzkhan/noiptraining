#include <iostream>
#include<cstdio>
#include<cstdlib>
#include<iomanip>
#include "µÚ3µ¥Ôª.h"
using namespace std;
void Unit3::P0630201() {
	int n1 = 4, n2 = 5, n3;
	n3 = (n1 > n2);
	cout << n3 << ",";
	n3 = (n1 < n2);
	cout << n3 << ",";
	n3 = (n1 == 4);
	cout << n3 << ",";
	n3 = (n1 == 5);
	cout << n3 << endl;
	cout << getchar() << endl;
}
void Unit3::P0630301() {
	char x, y;
	x = 'm';
	y = 'n';
	int n;
	n = x < y;
	cout << n << endl;
	n = x == y - 1;
	cout << n << endl;
	n = ('y' != 'Y') + (5 > 3) + (y - x == 1);
	cout << n << endl;
	cout << getchar() << endl;
}
void Unit3::P0660301() {
	int a, b, c, d;
	a = 2; b = 3; c = 0;
	d = (a + b || c);
	cout << d << endl;
	cout << getchar() << endl;
}
void Unit3::P0660401() {
	int a, b, c, d;
	a = 2; b = 3; c = 0;
	d = (a > b) && (c = 4);
	cout << d << " " << c << endl;
	cout << getchar() << endl;
}
void Unit3::P0670201() {
	int a, b, c, d;
	a = 2; b = 3; c = 0;
	d = (a < b || (c = 4));
	cout << d << " " << c << endl;
	cout << getchar() << endl;
}
void Unit3::P0670301() {
	int a = 0, b = 1;
	bool flag = (a++) && (b++);
	cout << a << "," << b << endl;
	flag = a++ && b++;
	cout << a << "," << b << endl;
	flag = a++ || b++;
	cout << a << "," << b << endl;
	cout << getchar() << endl;
}
void Unit3::P0690101() {
	int n;
	cin >> n;
	if (n <= 5)
		cout << n * 300 << endl;
	else
		cout << n * 280 << endl;
	cout << getchar() << endl;
}
void Unit3::P0690102() {
	int n, ans;
	cin >> n;
	ans = n * 300;
	if (n > 5)
		ans = n * 280;
	cout << ans << endl;
	cout << getchar() << endl;
}
void Unit3::P0700201() {
	int x, y, z;
	cin >> x >> y >> z;
	if (x <= y && y <= z)cout << "YES" << endl;
	else cout << "NO" << endl;
	cout << getchar() << endl;
}
void Unit3:: P0710301() {
	int a, b, c;
	cin >> a >> b;
	if (a > b) {
		c = a;
		a = b;
		b = c;
	}
	cout << a << " " << b << endl;
}
void Unit3 :: P0710101() {
	int a, b;
	cin >> a >> b;
	if (a == b)
		cout << "Equal" << endl;
	else
		cout << "Unequal" << endl;
}
void Unit3::P0720201() {
	int a, b, c = 0, d = 0;
	cin >> a >> b;
	if (a > b) {
		c = a / b;
		d = a % b;
	}
	cout << c << " " << d << endl;
}
void Unit3::P0740101() {
	int x, y, z;
	cin >> x >> y >> z;
	if (x <= y)
		if (y <= z)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	else
		cout << "NO" << endl;
}
void Unit3 :: P0750201() {
	int x = 4, y = 3, z = 2;
	if (x <= y)
		if (y <= z)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	else
		cout << "NO" << endl;
	cout << getchar() << endl;
}
void Unit3::P0750202() {
	int x = 4, y = 3, z = 2;
	if (x <= y)
		if (y <= z)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	cout << getchar() << endl;
}
void Unit3::P0770301() {
	int x;
	cin >> x;
	if (x % 400 == 0)
		cout << "YES" << endl;
	else
		if (x % 4 == 0)
			if (x % 100 != 0)
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
		else
			cout << "NO" << endl;

}
void Unit3::P0780401() {
	char id;
	int flag = 0;
	float price, discount;
	cin >> id;
	cin >> price;
	if (id == 'V')
		if (price <= 500)
			discount = 0.85;
		else
			if (price <= 1000)
				discount = 0.8;
			else {
				discount = 0.75;
				flag = 1;
			}
	else {
		discount = 0.9;
		if (price > 500)
			flag = 1;
	}
	if (flag)
		printf("YES\n");
	else
		printf("NO\n");
	printf("%.2f\n", price * discount);
}