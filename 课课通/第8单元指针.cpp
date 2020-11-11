#pragma warning(disable:4996)
#include <iostream>
#include<cstdio>
#include<cstdlib>
#include<iomanip>
#include<algorithm>
#include "第8单元指针.h"
using namespace std;
int test(int a) {
	return a * a;
}
void Unit8::P2980101() {
	cout << test << endl;
	int (*fp) (int a);
	fp = test;
	cout << fp(5) << endl;
	cout << (*fp)(10) << endl;
	cout << getchar() << endl;
}
int add(int a, int b) { return a + b; }
typedef int (*addp)(int, int);

void Unit8::P2980102() {
	addp fp = add;
	cout << fp(2, 3) << endl;
	cout << getchar() << endl;
}
int cal1(int a, int b) { return a + b; }
int cal2(int a, int b) { return a - b; }
int cal3(int a, int b) { return a * b; }
int cal4(int a, int b) { return a / b; }
typedef int (*f)(int, int);
void Unit8::P3000201()
{
	freopen("cal.in", "r", stdin);
	freopen("cal.out", "w", stdout);
	int m, n, k;
	f a[4] = { cal1,cal2,cal3,cal4 };
	cin >> m >> n >> k;
	cout << a[k - 1](m, n) << endl;
	cout << getchar() << endl;
}
void Unit8::P3010301() {
	int a = 10, b = 20;
	int* f;
	int& ra = a;
	f = &a;
	cout << "a=" << *f << endl;
	ra += 5;
	cout << "a=" << *f << endl;
	cout << getchar() << endl;
}
void change1(int& m, int& n) { //引用参数
	int t = m;
	m = n;
	n = t;
	return;
}
void change2(int* m, int* n) { // 指针参数
	int t = *m;
	*m = *n;
	*n = t;
	return;
}
void change3(int m, int n) { // 普通变量参数
	int t = m;
	m = n;
	n = t;
	return;
}
void Unit8::P3010401(){
	int x = 7, y = 160;
	change1(x, y);
	cout << x << " " << y << endl;
	change2(&x, &y);
	cout << x << " " << y << endl;
	change3(x, y);
	cout << x << " " << y << endl;
}
struct tstudent{
	int num;
	char name[20];
	char sex;
	int age;
};
tstudent x = { 13,"lihao",'m',35 };
tstudent* p;
void Unit8::P3020501() {
	p = &x;
	cout << x.num << endl;
	cout << (*p).name << endl;
	cout << p->age << endl;
}
void Unit8::P3090101() {
	int a[11];
	memset(a, 0, sizeof(a));
	freopen("apple.in", "r", stdin);
	freopen("apple.out", "w", stdout);
	int* p;
	int s = 0;
	p = a;
	for (int i = 0; i < 10; i++) {
		cin >> *p;
		p++;
	}
	p = new(int);
	cin >> *p;
	for (int i = 0; i < 10; i++)
		if (a[i] <= *p + 30) s++;
	cout << s << endl;
}
struct node {
	int num;
	node* next;
};
void Unit8::P3110101() {
	freopen("insert.in", "r", stdin);
	freopen("insert.out", "w", stdout);
	int n, x;
	node* head, * p, * q, * r;
	cin >> n;
	head = new node;
	head->next = NULL;
	cin >> head->num;
	q = head;
	for (int i = 2; i <= n; i++) {
		p = new node;
		p->next = NULL;
		cin >> p->num;
		q->next = p;
		q = p;
	}
	cin >> x;
	p = head;
	while (p != NULL) {
		if (p->num >= x) break;
		q = p;
		p = p->next;
	}
	r = new node;
	r->num = x;
	r->next = NULL;
	if (p == head) {
		r->next = head;
		head = r;
	}
	else if (p == NULL) {
		q->next = r;
	}
	else {
		q->next = r;
		r->next = p;
	}
	p = head;
	while (p->next != NULL) {
		cout << p->num << " ";
		p = p->next;
	}
	cout << p->num << endl;
}
struct d_node {
	int num;
	d_node* pre, * next;
};
void Unit8::P3120301() {
	freopen("flag.in", "r", stdin);
	freopen("flag.out", "w", stdout);
	int n, m, d, s;
	d_node* head, * tail, * p, * q, * r;
	cin >> n >> m;
	head = new d_node;
	head->next = NULL;
	head->pre = NULL;
	head->num = 1;
	q = head;
	for (int i = 2; i <= n; i++) {
		p = new d_node;
		p->pre = NULL;
		p->next = NULL;

		p->num = i;
		q->next = p;
		p->pre = q;
		q = p;
	}
	tail = q;
	p = head;
	s = 0;
	d = 1;
	while (head != tail) {
		s++;
		if (s == m) {
			s = 0;
			if (p == tail) {
				tail = p->pre;
				p = tail;
				d = 2;
				continue;
			}
			if (p == head) {
				head = p->next;
				p = head;
				d = 1;
				continue;
			}
			p->pre->next = p->next;
			p->next->pre = p->pre;
		}
		if (d == 1) {
			if (p == tail) {
				p = p->pre;
				d = 2;
			}
			else
				p = p->next;
		}
		else {
			if (p == head) {
				p = p->next;
				d = 1;
			}
			else 
				p = p->pre;
		}
	}
	cout << head->num << endl;
}

void Unit8::P3160401() {
	freopen("monkey.in", "r", stdin);
	freopen("monkey.out", "w", stdout);
	int n, k, s=0;
	node* head, * p, * q;
	cin >> n >> k;
	head = new node;
	head->next = NULL;
	head->num = 1;
	q = head;
	for (int i = 2; i <= n; i++) {
		p = new node;
		p->next = NULL;
		p->num = i;
		q->next = p;
		q = p;
	}
	q->next = head;
	p = head;
	while (p->next != p) {
		s++;
		if (s == k) {
			s = 0;
			cout << p->num << " ";
			q->next = p->next;
			p = p->next;
		}
		else {
			q = p;
			p = p->next;
		}
		cout << p->num << endl;
	}
}
void Unit8::P3160402() {
	int a[1010];
	memset(a, 0, sizeof(a));
	freopen("monkey.in", "r", stdin);
	freopen("monkey.out", "w", stdout);
	int n, k, s = 0, p, q;
	cin >> n >> k;
	for (int i = 1; i < n; i++)
		a[i] = i + 1;
	a[n] = 1;
	p = 1;
	q = n;
	while (a[p] != p) {
		s++;
		if (s == k) {
			s = 0;
			cout << p << " ";
			a[q] = a[p];
			p = a[p];
		}
		else {
			q = p;
			p = a[p];
		}
	}
	cout << p << endl;
}