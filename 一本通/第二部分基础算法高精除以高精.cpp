#pragma warning(disable:4996)
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <cstring>
#include "第二部分基础算法高精除以高精.h"
using namespace std;

HighPrecisionDividedByHighPrecision::HighPrecisionDividedByHighPrecision() {
	memset(a, 0, sizeof(a));
	memset(b, 0, sizeof(b));
	memset(c, 0, sizeof(c));
}
void HighPrecisionDividedByHighPrecision::init_private(int a[]) {
	string s;
	cin >> s;
	a[0] = s.length();
	for (int i = 1; i <= a[0]; i++)
		a[i] = s[a[0] - i] - '0';
}
void HighPrecisionDividedByHighPrecision::init() {
	init_private(this->a);
	init_private(this->b);
}
void HighPrecisionDividedByHighPrecision::print_private(int a[]) {
	int i;
	if (a[0] == 0) { cout << 0 << endl; return; }
	for (i = a[0]; i > 0; i--) cout << a[i];
	cout << endl;
	return;
}
void HighPrecisionDividedByHighPrecision::print() {
	print_private(this->c);
	print_private(this->a);
}
int HighPrecisionDividedByHighPrecision::compare_private(int a[], int b[]) {
	int i;
	if (a[0] > b[0]) return 1;
	if (a[0] < b[0]) return -1;
	for (i = a[0]; i > 0; i--) {
		if (a[i] > b[i]) return 1;
		if (a[i] < b[i]) return -1;
	}
	return 0;
}
void HighPrecisionDividedByHighPrecision::jian_private(int a[], int b[]) {
	int flag, i;
	flag = compare_private(a, b);
	if (flag == 0) { a[0] = 0; return; }
	if (flag == 1) {
		for (i = 1; i <= a[0]; i++) {
			if (a[i] < b[i]) {
				a[i + 1]--; a[i] += 10;
			}
			a[i] -= b[i];
		}
		while (a[0] > 0 && a[a[0]] == 0)a[0]--;
		return;
	}
}
void HighPrecisionDividedByHighPrecision::numcpy_private(int p[], int q[], int det) {
	for (int i = 1; i <= p[0]; i++)q[i + det - 1] = p[i];
	q[0] = p[0] + det - 1;
}
void HighPrecisionDividedByHighPrecision::chugao_private(int a[], int b[], int c[]) {
	int i, tmp[101];
	c[0] = a[0] - b[0] + 1;
	for (i = c[0]; i > 0; i--) {
		memset(tmp, 0, sizeof(tmp));
		numcpy_private(b, tmp, i);
		while (compare_private(a, tmp) > 0) { c[i]++; jian_private(a, tmp); }
	}
	while (c[0] > 0 && c[c[0]] == 0)c[0]--;
	return;
}
void HighPrecisionDividedByHighPrecision::chugao() {
	chugao_private(this->a, this->b, this->c);
}