#pragma warning(disable:4996)
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <cstring>
#include "第二部分基础算法回文数.h"
using namespace std;

PalindromeNumber::PalindromeNumber() {
	memset(a, 0, sizeof(a));
	memset(b, 0, sizeof(b));
}
void PalindromeNumber::init_private(int a[]) {
	string s;
	cin >> n >> s;
	memset(a, 0, sizeof(a));
	a[0] = s.length();
	for (int i = 1; i <= a[0]; i++)
		if (s[a[0] - i] >= '0' && s[a[0] - i] <= '9') a[i] = s[a[0] - i] - '0';
		else a[i] = s[a[0] - i] - 'A' + 10;
}
void PalindromeNumber::init() {
	init_private(this->a);
}
bool PalindromeNumber::check_private(int a[]) {
	for (int i = 1; i <= a[0]; i++)
		if (a[i] != a[a[0] - i + 1]) return false;
	return true;
}
bool PalindromeNumber::check() {
	return check_private(this->a);
}
void PalindromeNumber::jia_private(int a[]) {
	int i, k;
	for (i = 1; i <= a[0]; i++) b[i] = a[a[0] - i + 1];
	for (i = 1; i <= a[0]; i++) a[i] += b[i];
	for (i = 1; i <= a[0]; i++) {
		a[i + 1] += a[i] / n;
		a[i] %= n;
	}
	if (a[a[0] + 1] > 0) a[0]++;
}
void PalindromeNumber::jia() {
	jia_private(this->a);
}