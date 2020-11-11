#pragma warning(disable:4996)
#include <iostream>
#include<cstdio>
#include<cstdlib>
#include<iomanip>
#include<ctime>
#include <windows.h>
#include "µÚ2µ¥Ôª.h"
using namespace std;

void Unit2::P0240101() {
	cout << 2 + 4 << endl;
	cout << "ABCD" << endl;
	int a = 10, b = 5;
	cout << a + b << endl;
	cout<<getchar()<<endl;
}
void Unit2::P0250201() {
	cout << "   *\n";
	cout << "  ***\n";
	cout << " *****\n";
	cout << "*******\n";
	cout << " *****\n";
	cout << "  ***\n";
	cout << "   *\n";
	cout << getchar() << endl;
}
void Unit2::P0250301() {
	int a, b, h, s;
	a = 15; b = 20; h = 12;
	s = (a + b) * h / 2;
	cout << s << endl;
	cout << getchar() << endl;
}
void Unit2::P0260101() {
	int a, b, c, d, ans;
	a = 2; b = 3; c = 4;
	d = a - b;
	a = d + c;
	ans = a * b;
	cout << "Ans= " << ans << endl;
	cout << getchar() << endl;
}
void Unit2::P0260201() {
	cout << 10.0 / 6.0 << endl;
	cout << fixed << setprecision(8) << 10.0 / 6.0 << endl;
	cout << getchar() << endl;
}
void Unit2::P0260301() {
	int a;
	cin >> a;
	cout << "dec: " << dec << a << endl;
	cout << "hex: " << hex << a << endl;
	cout << "oct: " << oct << a << endl;
}
void Unit2::P0280101() {
	int a, b, c;
	double d, e;
	a = 5; b = 6;
	d = 2.53;
	c = a + b;
	e = c + d;
	cout << a << "+" << b << "=" << c << endl;
	cout << c << "+" << d << "=" << e << endl;
	cout << getchar() << endl;
}
void Unit2::P0280201() {
	int a = 2147483647;
	a = a + 1;
	cout << "a= " << a << endl;
	cout << getchar() << endl;
}
void Unit2::P0290301() {
	int b = 0, a = 100;
	char ch = 'A';
	b = a + ch;
	cout << ch << " " << int(ch) << " " << b << endl;
	cout << getchar() << endl;
}
void Unit2 :: P0290401() {
	cout << sizeof(char) << endl;
	cout << sizeof(int) << endl;
	cout << sizeof(unsigned int) << endl;
	cout << sizeof(long int) << endl;
	cout << sizeof(short int) << endl;
	cout << sizeof(float) << endl;
	cout << sizeof(double) << endl;
	cout << getchar() << endl;
}
void Unit2::P0320201() {
	int a;
	a = 3;
	cout << a << endl;
	a = 10;
	cout << a << endl;
	a = a * 5;
	cout << a << endl;
	cout << getchar() << endl;
}
void Unit2::P0330201() {
	int a, b, c, ans = 100;
	a = 1; b = 2; c = 5;
	a = a + b;
	b = a + b + c;
	ans = ans + a + b + c;
	cout << ans << endl;
	cout << getchar() << endl;
}
#define PI 3.14159 // const double PI = 3.14159
void Unit2::P0330301() {
	double square = 0, volume = 0, radius = 0;
	cin >> radius;
	square = PI * radius * radius;
	volume = 4 * 3.14159 * radius * radius * radius / 3;
	cout << "square=" << square << "volume=" << volume << endl;
}
void Unit2::P0340101() {
	char c1, c2, c3;
	c1 = 48;
	c2 = 65;
	c3 = 97;
	cout << c1 << " " << c2 << " " << c3 << " ";
	cout << int(c1) << " "<< (int)c2 <<" " << int(c3) << endl;
	cout << getchar() << endl;
}
void Unit2::P0350201() {
	char c1, c2, c3;
	c1 = 'a';
	c2 = 'Z';
	c1 = c1 - 32;
	c2 = c2 + 32;
	c3 = '0' + 9;
	cout << c1 << " " << c2 << " " << c3 << endl;
	cout << getchar() << endl;
}
void Unit2::P0350301() {
	char a = 'A'; putchar(a);
	putchar('\\');
	putchar('\n');
	char c; c = getchar();
	putchar(c + 1);
}
void Unit2::P0360401() {
	char s[20];
	gets_s(s);
	puts(s);

}
void Unit2:: P0370101() {
	char i, j;
	i = 'c';
	j = 'd';
	i = i - 32;
	j = j - 32;
	cout << i << ' ' << j << endl;
	cout << getchar() << endl;
}
void Unit2::P0380101() {
	int a, b, c, s;
	cin >> a >> b;
	c = 2 * (a + b);
	s = a * b;
	cout << c << " " << s << endl;
	cout << getchar() << endl;
}
void Unit2::P0380201() {
	int n, a, b, c;
	cin >> n;
	a = n % 10;
	b = n / 10 % 10;
	c = n / 100;
	cout << a + b + c << endl;
	cout << getchar() << endl;
}
void Unit2::P0390301() {
	double x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	cout << sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)) << endl;
}
void Unit2::P0400301() {
	cout << ceil(-5.01) << endl;
	cout << floor(-5.99) << endl;
	cout << pow(3.5, 2.0) << endl;
	cout << pow(-5, 3) << endl;
	cout << sqrt(100.0) << endl;
	cout << getchar() << endl;
}
void Unit2:: P0410101() {
	int a, b, c;
	cin >> a >> b >> c;
	char d, e;
	cin >> d >> e;
	float f;
	cin >> f;
	cout << "a=" << a << " b=" << b << " c=" << c << endl;
	cout << "d=" << d << " e=" << e << " f=" << f << endl;
}
void Unit2::P0420201() {
	char ch1, ch2;
	cin >> ch1;
	ch2 = ch1 - 32;
	cout << ch2 << endl;
	
}
void Unit2::P0430101() {
	int a, b, s, d;
	bool l, e;
	a = 3;
	b = 3;
	s = a + b;
	d = a / b;
	l = a < b;
	e = a == b;
	cout << s << ' ' << d << ' ' << l << ' ' << e << endl;
	cout << getchar() << endl;
}
void Unit2::P0440201() {
	int a, b;
	cin >> a >> b;
	a += b;
	b -= 1;
	cout << a << " " << b << endl;
	a /= 2;
	b *= b;
	cout << a << " " << b << endl;
	a %= b;
	b %= 10;
	cout << a << " " << b << endl;
}
void Unit2 :: P0450301() {
	int a, b;
	a = b = 5;
	cout << a << ' ' << b << endl;
	(a = b) = 10;
	cout << a << ' ' << b << endl;
	(a += b) = 20;
	cout << a << ' ' << b << endl;
	cout << getchar() << endl;
}
void Unit2::P0450401() {
	int j = 10, k = 1000;
	int i = (k + 1, j + 100, 999 + j);
	cout << i << endl;
	cout << getchar() << endl;
}
void Unit2:: P0460101() {
	int a, b, c, d;
	cin >> a >> b;
	a *= b;
	b--;
	(c = d = a) = b;
	d = (a++, b + 10, c--);
	cout << a << " " << b << " " << c << " " << d << endl;
	cout << getchar() << endl;
}
void Unit2::P0480101() {
	int i = 3, j;
	j = ++i;
	cout << j << i << endl;
	j = i++;
	cout << j << i << endl;
	cout << getchar() << endl;
}
void Unit2::P0480201() {
	int a = 5, b, c, i = 10;
	b = a++;
	printf("no.1: a= %d, b=%d\n", a, b);
	c = ++b;
	printf("no.2: a=%d,b=%d,c=%d\n", a, b, c);
	printf("no.3:i,i++,i++ = %d,%d,%d\n", i, i++, i++);
	printf("no.4:i=%d\n", ++i);
	printf("no.5:i=%d\n", --i);
	printf("no.6:i=%d\n", i++);
	printf("no.7:i=%d\n", i--);
	printf("no.8:i=%d\n", -i++);
	printf("no.9:i=%d\n", -i--);
	printf("no.10:i=%d\n", i);
	cout << getchar() << endl;
}
void Unit2::P0490301() {
	int a = 10, b, c, t = 0, s = 100;
	a += 20;
	c = b *= b = a;
	(s /= c) %= a;
	t += (a + b) * c;
	cout << a << ' ' << b << ' ' << c << ' ' << s << ' ' << t << endl;
	cout << getchar() << endl;
}
void Unit2::P0500201() {
	int i = 1;
	i = (++i) + (++i);
	cout << i << endl;
	cout << getchar() << endl;
}
void Unit2::P0500301() {
	int b = 13, a = 10;
	(a = (b *= b)) += 4;
	printf("%d %d\n", a, b);
	cout << getchar() << endl;
}
void Unit2::P0520101() {
	float pi = 3.14159;
	int s, r = 4;
	s = r * r * pi;
	cout << s << endl;
	cout << getchar() << endl;
}

void Unit2::P0530201() {
	int x;
	float a = 15.75;
	double b = 323.01;
	cout << (int)a << endl;
	cout << (int)(b + 0.5) % 10 << endl;
	cout << (int)b % (int)a + 1 << endl;
	cout << getchar() << endl;
}
void Unit2::P0530101() {
	int a, b, c;
	long long s;
	a = 1532646572;
	b = 1458679433;
	c = 1253467832;
	s = (long long)a + b + c;
	cout << "s= " << s << endl;
	cout << getchar() << endl;
}
void Unit2::P0540201() {
	int a, b;
	a = 32768;
	b = a;
	printf("%d %d\n", a, b);
	cout << getchar() << endl;
}
void Unit2::P0540301() {
	int a = 12, b = 3;
	char c = 'a';
	float d = 3.51;
	long long e = 1000000000;
	double f = 999999999.99, x, y, z;
	x = a + c + b * d - f / e;
	y = (int)3.999 + (int)4.001;
	z = (double)102 + '9';
	cout << x << ' ' << y << ' ' << z << endl;
	cout << getchar() << endl;
}
void Unit2::P0560101() {
	printf("%d", 1);
	printf("%o", 8);
	printf("%x", 17);
	printf("%u", 12);
	printf("%c", 49);
	printf("%s", "labl1");
	printf("%f", 0.14);
	printf("%e", 0.1);
	printf("%lld", 21473648);
	printf("%c", getchar());
}
void Unit2::P0570201() {
	double x1, x2, y1, y2, q;
	cin >> x1 >> y1 >> x2 >> y2;
	q = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
	printf("%.3f\n", q);
}
void Unit2::P0580301() {
	const int num = 10000000;
	// freopen("data.in", "r", stdin);
	int i, n, start, end;
	start = clock();
	for (i = 0; i < num - 2; i++)
		cin >> n;
	end = clock();
	cout << double(end - start) / CLOCKS_PER_SEC << endl;
	Sleep(5000);
	system("pause");
}
void Unit2::P0580302() {
	const int num = 10000000;
	freopen("data.in", "r", stdin);
	int i, n, start, end;
	start = clock();
	for (i = 0; i < num; i++)
		cin >> n;
	end = clock();
	printf("%f\n", double(end - start) / CLOCKS_PER_SEC);
	system("pause");
	Sleep(5000);
}
void Unit2::P0590101() {
	int a = 100;
	double b = 246.343;
	printf("a= %d\n", a);
	printf("2*a = %d\n", 2 * a);
	printf("a=%2d\n", a);
	printf("%3f\n", b);
	printf("%20.2lf\n", b);
	printf("%.2lf\n", b);
	printf("%c\n", getchar());
}
void Unit2::freopen_s_Note() {
	FILE* stream;
	errno_t err;
	// Reassign "stderr" to "data.in":
	err = freopen_s(&stream, "data.in", "w", stderr);
	if (err != 0)
		fprintf(stdout, "error on freopen\n");
	else {
		fprintf(stdout, "successfully reassigned\n"); fflush(stdout);
		fprintf(stream, "This will go to the file 'data.in'\n");
		fclose(stream);
	}
	system("type data.in");
	printf("\n");
	printf("%c", getchar());
}