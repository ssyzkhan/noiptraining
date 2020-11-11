#pragma warning(disable:4996)
#include <iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>
#include<iomanip>
#include"第8单元指针.h"
using namespace std;
void PointerProgramming::P2820301() {
	int* p, * q;
	p = (int*)malloc(40);
	q = p;
	*p = 1;
	p++;
	*p = 2;
	free(q);
}
void PointerProgramming::P2860101() {
	int a[100], n;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
	int* p = &a[0];
	for (int i = 0; i < n; i++) {
		cout << *p << endl;
		p++;
	}
}
void PointerProgramming::P2860201() {
	int n, a[5011];
	int* p, * s1, * s2;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
	p = &a[0];
	s1 = new(int);
	*s1 = 0;
	s2 = new(int);
	*s2 = 0;
	for (int i = 0; i < n; i++) {
		if (*p % 2 == 0) *s1 += *p;
		else *s2 += *p;
		p++;
	}
	cout << *s2 << endl << *s1 << endl;
}
void PointerProgramming::P2870301() {
	int a = 10;
	double b = 3.5;
	void* p;
	p = &a;
	cout << *(int*)p << endl;
	p = &b;
	cout << *(double*)p << endl;
	cout << getchar() << endl;
}
void PointerProgramming::P2880401() {
	int a = 10;
	int* p;
	int** pp;
	p = &a;
	pp = &p;
	cout << a << "=" << *p << "=" << **pp << endl;
	cout << getchar() << endl;
}
void PointerProgramming::P2910101() {
	int a[] = { 10,11,12,13,14,15 };
	int* p = a + 4;
	cout << *a;
	cout << " " << *(a + 3);
	cout << " " << *(++p) << endl;
	cout << getchar() << endl;
}
void PointerProgramming::P2930301() {
	const int maxn = 1001;
	int m, n, k;
	int x[maxn], y[maxn], d[maxn];
	int c[maxn];
	int* a[maxn];
	memset(c, 0, sizeof(c));
	freopen("change.in", "r", stdin);
	freopen("change.out", "w", stdout);
	cin >> n >> m >> k;
	for (int i = 0; i < k; i++) {
		cin >> x[i] >> y[i] >> d[i];
		c[y[i]]++;
	}
	for (int i = 1; i <= m; i++)
		a[i] = new int[c[i]];
	for (int i = 0; i < k; i++) {
		*a[y[i]] = d[i];
		a[y[i]]++;
	}
	for (int i = 1; i <= m; i++) {
		a[i] = a[i] - c[i];
		for (int j = 0; j < c[i]; j++, a[i]++)
			cout << *a[i] << ' ';
	}
	
}
void PointerProgramming::copy_string(char* from, char* to) {
	while (*from != '\0') {
		*to = *from;
		*to++;
		*from++;
	}
	*to = '\0';
}
void PointerProgramming::P2940501() {
	char a[20] = "c language";
	char b[20] = "very good";
	copy_string(a, b);
	cout << a << endl;
	cout << b << endl;
}