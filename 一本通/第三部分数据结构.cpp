#pragma warning(disable:4996)
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <cstring>
#include "第三部分数据结构.h"
#define size 100
#define maxn 20

using namespace std;

void DataStructureProgramming::P3960201() {
	int a[size + 1], n, d, i = 0, j;
	cout << "Please enter a number(N) base 10:"; cin >> n;
	cout << "Please enter a number(d):"; cin >> d;
	do {
		a[++i] = n % d;
		n = n / d;
	} while (n != 0);
	for (j = i; j >= 1; j--)cout << a[j];
	cout << endl;
}
bool DataStructureProgramming::judge(char c[256]) {
	int top = 0, i = 0;
	while (c[i] != '@') {
		if (c[i] == '(') top++;
		if (c[i] == ')') {
			if (top > 0) top--;
			else return 0;
		}
		i++;
	}
	if (top != 0)return 0;  // 检测栈是否为空。不空则说明有未匹配的括号
	else return 1;
}
void DataStructureProgramming::P3971101() {
	char c[256];
	scanf("%s", c);
	if (judge(c))printf("YES"); 
	else printf("NO");
}
int DataStructureProgramming::comp(char s[256]) {
	int stack[101];
	int i = 0, top = 0, x, y;
	while (i <= strlen(s) - 2) {
		switch (s[i]) {
		case '+':stack[--top] += stack[top + 1]; break;
		case '-':stack[--top] -= stack[top + 1]; break;
		case '*':stack[--top] *= stack[top + 1]; break;
		case '/':stack[--top] /= stack[top + 1]; break;
		default:
			x = 0; 
			while (s[i] != ' ')
				x = x * 10 + s[i++] - '0';
			stack[++top] = x; break;
		}
		i++;
	}
	return stack[top];
}
void DataStructureProgramming::P3981201() {
	char s[256];
	printf("Input a string(@_over):");
	gets_s(s);
	printf("result=%d\n", comp(s));

}
int DataStructureProgramming::P3991301() {
	const int N = 1010;
	int stack[N], a[N];
	int top, n;
	cin >> n;
	for (int i = 1; i <= n; ++i)
		cin >> a[i];
	top = 0;
	for (int i = 1, cur = 1; i <= n; ++i)  // cur 当前要从A方向驶入的车厢号
	{
		while (cur <= a[i])
			stack[++top] = cur++;
		if (stack[top] == a[i])
			--top;
		else {
			cout << "NO" << endl;
			return 0;
		}
	}
	cout << "YES" << endl;
	return 0;
}
void DataStructureProgramming::work(int a, int n) {
	const int N = 10001;
	long long q[N];
	int rear = 2;
	q[1] = 1;
	int two = 1, three = 1;
	while (rear <= n) {
		long long t1 = q[two] * 2 + 1, t2 = q[three] * 3 + 1;
		int t = min(t1, t2);
		if (t1 < t2)
			two++; 
		else 
			three++;
		if (t == q[rear - 1])
			continue;
		q[rear++] = t;
	}
	cout << q[n] << endl;
	
}
void DataStructureProgramming::P4062201() {
	int a, n;
	while (cin >> a >> n)
		work(a, n);
}