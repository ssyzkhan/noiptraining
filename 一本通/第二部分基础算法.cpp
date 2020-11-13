#pragma warning(disable:4996)
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <cstring>
#include "第二部分基础算法.h"
#include "第二部分基础算法高精除以高精.h"
#include "第二部分基础算法回文数.h"


using namespace std;
void BaseAlgorithm::P1811101() {
	char a1[100], b1[100];
	int a[100], b[100], c[100], lena, lenb, lenc, i, x;
	memset(a, 0, sizeof(a));
	memset(b, 0, sizeof(b));
	memset(c, 0, sizeof(c));
	gets_s(a1);
	gets_s(b1);
	lena = strlen(a1);
	lenb = strlen(b1);
	for (i = 0; i <= lena - 1; i++) a[lena - i] = a1[i] - 48;
	for (i = 0; i <= lenb - 1; i++) b[lenb - i] = b1[i] - 48;
	lenc = 1;
	x = 0;
	while (lenc <= lena || lenc <= lenb) {
		c[lenc] = a[lenc] + b[lenc] + x;
		x = c[lenc] / 10;
		c[lenc] %= 10;
		lenc++;
	}
	c[lenc] = x;
	if (c[lenc] == 0)
		lenc--;
	for (i = lenc; i >= 1; i--)
		cout << c[i];
	cout << endl;
}
void BaseAlgorithm::P1831201() {
	int a[256], b[256], c[256], lena, lenb, lenc, i;
	char n[256], n1[256], n2[256];
	memset(a, 0, sizeof(a));
	memset(b, 0, sizeof(b));
	memset(c, 0, sizeof(c));
	printf("Input minuend:"); gets_s(n1); //输入被减数
	printf("Input subtrahend:"); gets_s(n2); //输入减数
	if (strlen(n1) < strlen(n2) || (strlen(n1) == strlen(n2) && strcmp(n1, n2) < 0)) {
		strcpy(n, n1);
		strcpy(n1, n2);
		strcpy(n2, n);
		cout << "-";
	}
	lena = strlen(n1); lenb = strlen(n2);
	for (i = 0; i <= lena - 1; i++) a[lena - i] = int(n1[i] - '0');
	for (i = 0; i <= lenb - 1; i++) b[lenb - i] = int(n2[i] - '0');
	i = 1;
	while (i <= lena || i <= lenb) {
		if (a[i] < b[i]) {
			a[i] += 10;
			a[i + 1]--;
		}
		c[i] = a[i] - b[i];
		i++;
	}
	lenc = i;
	while ((c[lenc] == 0) && (lenc > 1))lenc--;
	for (i = lenc; i >= 1; i--) cout << c[i];
	cout << endl;
}
void BaseAlgorithm::P1841301() {
	char a1[100], b1[100];
	int a[100], b[100], c[100], lena, lenb, lenc, i, j, x;
	memset(a, 0, sizeof(a));
	memset(b, 0, sizeof(b));
	memset(c, 0, sizeof(c));
	gets_s(a1); 
	gets_s(b1);
	lena = strlen(a1); lenb = strlen(b1);
	for (i = 0; i <= lena - 1; i++)a[lena - i] = a1[i] - 48;
	for (i = 0; i <= lenb - 1; i++)a[lenb - i] = b1[i] - 48;
	for (i = 1; i <= lena; i++) {
		x = 0;
		for (j = 1; j <= lenb; j++) {
			c[i + j - 1] = a[i] * b[j] + x + c[i + j - 1];
			x = c[i + j - 1] / 10;
			c[i + j - 1] %= 10;
		}
		c[i + lenb] = x;
	}
	lenc = lena + lenb;
	while (c[lenc] == 0 && lenc > 1)
		lenc--;
	for (i = lenc; i >= 1; i--)
		cout << c[i];
	cout << endl;
}
void BaseAlgorithm::P1851401() {
	char a1[100], c1[100];
	int a[100], c[100], lena, i, x = 0, lenc, b;
	memset(a, 0, sizeof(a));
	memset(c, 0, sizeof(c));
	gets_s(a1);
	cin >> b;
	lena = strlen(a1);
	for (i = 0; i <= lena - 1; i++)
		a[i + 1] = a1[i] - 48;
	for (i = 1; i <= lena; i++) {
		c[i] = (x * 10 + a[i]) / b;
		x = (x * 10 + a[i]) % b;
	}
	lenc = 1;
	while (c[lenc] == 0 && lenc < lena)
		lenc++;
	for (i = lenc; i <= lena; i++)
		cout << c[i];
	cout << endl;
}


void BaseAlgorithm::P1861501() {
	HighPrecisionDividedByHighPrecision myHPDHP;
	myHPDHP.init();
	myHPDHP.chugao();
	myHPDHP.print();
}
void BaseAlgorithm::P1881601() {
	PalindromeNumber myPN;
	myPN.init();
	if (myPN.check()) { cout << 0 << endl; return; }
	int ans = 0;
	while (ans <= 30) {
		ans++;
		myPN.jia();
		if (myPN.check()) { cout << ans << endl; return; }
	}
	cout << "Impossible";
	return;
}
void BaseAlgorithm::P1932101() {
	const int MAXN = 1001;
	float a[MAXN],temp;
	memset(a, 0, sizeof(a));
	int n, k, i, j;
	cin >> n;
	for (i = 0; i < n; i++)
		cin >> a[i];
	for (i = 0; i < n; i++) {
		k = i;
		for (j = i + 1; i < n; i++) {
			if (a[j] < a[k])k = j;
		}
		if (k != i)
			temp = a[i]; a[i] = a[k]; a[k] = temp;
	}
	for (i = 0; i < n; i++)
		cout << a[i] << " ";
}