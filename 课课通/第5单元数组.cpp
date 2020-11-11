#pragma warning(disable:4996)
#include <iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>
#include<iomanip>
#include"第5单元数组.h"
using namespace std;
void ArrayStructureProgramming::P1570101() {
	int n, i, j, ans, maxh, h[1001];
	cin >> n;
	for (i = 1; i <= n; i++)cin >> h[i];
	for (i = 1; i <= n; i++) {
		ans = 0;
		maxh = 1000001;
		for (j = 1; j <= n; j++)
			if (h[j]>h[i] && h[j]<maxh){
				ans = j;
				maxh = h[j]; 
		}
		cout << ans << endl;
	}
}
void ArrayStructureProgramming::P1590201() {
	int n, i, j, number, num[1001];
	memset(num, 0, sizeof(num));
	cin >> n;
	for (i = 1; i <= n; i++) {
		cin >> number;
		num[number]++;  //  记录整数number出现的次数 
	}
	for (i = 0; i < 1001; i++) {
		for (j = 1; j <= num[i]; j++)
			cout << i << endl;  // 输出num[i]次i
	}
}
void ArrayStructureProgramming::P1600301() {
	int n, i, j;
	bool flag;
	cin >> n;
	cout << 2;
	for (i = 3; i <= n; i++) {
		flag = true;
		for(j=2;j<=sqrt(i);j++)
			if (i % j == 0) {
				flag = false;
				break;
			}
		if (flag) cout << " " << i;
	}
	
}
void ArrayStructureProgramming::P1600302() {
	int n, i, j;
	bool p[100001];
	for (i = 0; i <= 100000; i++)p[i] = true;
	p[1] = false;
	cin >> n;
	cout << 2;
	for (i = 2; i <= sqrt(n); i++)
		if (p[i])
			for (j = 2; i * j <= n; j++) p[i * j] = false;
	for (i = 3; i <= n; i++)
		if (p[i]) cout << " " << i;
	cout << endl;

}
void ArrayStructureProgramming:: P1620401() {
	int m, n, i, j, t;
	bool p[100];
	cin >> m >> n;
	for (i = 0; i < 100; i++)p[i] = true;
	t = m; i = 0; j = 0;
	while (t > 0) {
		i++;
		if (i == m + 1)i = 1;  // 实现圈的效果
		if (p[i]) {
			j++;
			if (j == n) {
				cout << i << endl;
				p[i] = false;
				j = 0;
				t--;
			}
		}
	}
}
void ArrayStructureProgramming::P1680101() {
	int n, i, j, k, mi, ma, a[10][10];
	cin >> n;
	for(i=1;i<=(n+1)/2;i++)
		for (j = 1; j <= (n + 1) / 2; j++) {
			a[i][j] = min(i, j);
			a[i][n + 1 - j] = a[n + 1 - i][j] = a[n + 1 - i][n + 1 - j] = a[i][j];
		}
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n - 1; j++) {
			cout << a[i][j] << " ";
		}
		cout << a[i][n] << endl;
	}
}
void ArrayStructureProgramming::P1680102() {
	int n, i, j, k, a[10][10];
	memset(a, 0, sizeof(a));
	cin >> n;
	for (k = 1; k <= (n + 1) / 2; k++)
		for (i = k; i <= n + 1 - k; i++)
			for (j = k; j <= n + 1 - k; j++)
				a[i][j] = k;
	for (i = 1; i <= n; i++) {
		for (j = 1; j < n; j++)
			cout << a[i][j] << " ";
		cout << a[i][n] << endl;
	}
}
void ArrayStructureProgramming::P1700101() {
	int n, i, j, tri[21][21];
	memset(tri, 0, sizeof(tri));
	cin >> n;
	for (i = 1; i <= n; i++) {
		tri[i][1] = 1;
		tri[i][i] = 1;
		for (j = 2; j < i; j++)
			tri[i][j] = tri[i - 1][j - 1] + tri[i - 1][j];
	}
	for (i = 1; i <= n; i++) {
		for (j = 1; j < i; j++) cout << setw(6) << tri[i][j] << " ";
		cout << setw(6) << tri[i][i] << endl;
	}
}
void ArrayStructureProgramming::P1710201() {
	int a[101][101];
	memset(a, 0, sizeof(a));
	int n, i, j;
	cin >> n;
	for (i = 1; i <= n; i++)
		for (j = i; j <= n; j++)a[i][j] = j - i + 1;
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++)
			if (!a[i][j]) cout << setw(5) << " ";
			else cout << setw(5) << a[i][j];
		cout << endl;
	}
}
void ArrayStructureProgramming::P1720301() {
	int n, i, j, temp, stu[350][5]; // stu分别表示第i个同学的学号，语文、数学、英语、总分成绩
	memset(stu, 0, sizeof(stu));
	cin >> n;
	for (i = 1; i <= n; i++) {
		cin >> stu[i][1] >> stu[i][2] >> stu[i][3];
		stu[i][0] = i;
		for (j = 1; j <= 3; j++) stu[i][4] += stu[i][j];
	}
	for (i = 1; i < n; i++) {
		for(j=i+1;j<=n;j++)
			if (stu[i][4] < stu[j][4] || stu[i][4] == stu[j][4] &&
				stu[i][1]<stu[i][1] || stu[i][4] == stu[j][4] &&
				stu[i][1] == stu[j][1] && stu[i][0]>stu[j][0]) {
				temp = stu[i][0]; stu[i][0] = stu[j][0]; stu[j][0] = temp;
				temp = stu[i][1]; stu[i][1] = stu[j][1]; stu[j][1] = temp;
				temp = stu[i][2]; stu[i][2] = stu[j][2]; stu[j][2] = temp;
				temp = stu[i][3]; stu[i][3] = stu[j][3]; stu[j][3] = temp;
				temp = stu[i][4]; stu[i][4] = stu[j][4]; stu[j][4] = temp;
			}
	}
	for (i = 1; i <= 5; i++)
		cout << stu[i][0] << " " << stu[i][4] << endl;
}
void ArrayStructureProgramming::P1760101() {
	int dx[4] = { 0, 1, 0, -1 };
	int dy[4] = { 1, 0, -1, 0 };
	int n, i, j, k, ni, nj, a[21][21];
	memset(a, 0, sizeof(a));
	cin >> n;
	i = 1; j = n / 2 + 1;
	a[i][j] = 1;
	for (k = 2; k <= n * n; k++) {
		if (k % n == 1) i++;
		else {
			i--; j++;
			if (i == 0) i = n;
			if (j == n + 1) j = 1;
		}
		a[i][j] = k;
	}
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++)
			cout << setw(5) << a[i][j];
		cout << endl;
	}
}
void ArrayStructureProgramming::P1770201() {
	int dx[4] = { 0,1,0,-1 };
	int dy[4] = { 1,0,-1,0 };
	int n, i, j, k, d, a[51][51];
	cin >> n;
	for (i = 0; i <= n + 1; i++)
		for (j = 0; j <= n + 1; j++) a[i][j] = -1;
	for (i = 1; i <= n; i++)
		for (j = 1; j <= n; j++)a[i][j] = 0;

	i = 1; j = 1; d = 0;
	for (k = 1; k <= n * n; k++) {
		a[i][j] = k;
		if (a[i + dx[d]][j + dy[d]] != 0) d = (++d) % 4;
		i = i + dx[d];
		j = j + dy[d];
	}
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++)
			cout << setw(5) << a[i][j];
		cout << endl;
	}
}
void ArrayStructureProgramming::P1790301() {
	int n, i, j, k, t = 0, a[21][21];
	cin >> n;
	for(k=1;k<=n;k++)
		if(k%2)
			for (j = 1; j <= k; j++) {
				i = k + 1 - j;
				t++;
				a[i][j] = t;
				a[n + 1 - i][n + 1 - j] = n * n + 1 - t;
			}
		else
			for (j = k; j >= 1; j--) {
				i = k + 1 - j;
				t++;
				a[i][j] = t;
				a[n + 1 - i][n + 1 - j] = n * n + 1 - t;
			}
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++)
			cout << setw(5) << a[i][j];
		cout << endl;
	}
}
void ArrayStructureProgramming::P1830101() {
	char s1[20], s2[20];
	//scanf("%s", s1);
	//scanf("%s", s2);
	//printf("%s\n", s1);
	//printf("%s\n", s2);
}
void ArrayStructureProgramming::P1830102() {
	char s1[20], s2[20];
	/*gets(s1);
	gets(s2);
	puts(s1);
	puts(s2);*/
}
void ArrayStructureProgramming::P1830103() {
	char s1[20], s2[20], i;
	i = 0;
	while ((s1[i] = getchar()) != '\n')i++;
	s1[i] = '\0';
	i = 0;
	while (s1[i] != '\0') {
		putchar(s1[i]);
		i++;
	}
	putchar('\n');

	i = 0;
	while ((s2[i] = getchar()) != '\n')i++;
	s2[i] = '\0';
	i = 0;
	while (s2[i] != '\0') {
		putchar(s2[i]);
		i++;
	}
	putchar('\n');
}
int ArrayStructureProgramming::scan() {
	int res = 0, flag = 0;
	char ch;
	if ((ch = getchar()) == '-') flag = 1;
	else if (ch >= '0' && ch <= '9') res = ch - '0';
	while ((ch = getchar()) >= '0' && ch <= '9')
		res = res * 10 + (ch - '0');
	return flag ? -res : res;
}
void ArrayStructureProgramming::P1850201(){
	char n[201];
	int i, sum = 0;
	cin >> n;
	for (i = 0; i < strlen(n); i++) sum = sum + n[i] - '0';
	printf("%d\n", sum);

}
void ArrayStructureProgramming::P1860301() {
	int dx[8] = { -1,-1,0,1,1,1,0,-1 };
	int dy[8] = { 0,1,1,1,0,-1,-1,-1 };
	char mine[101][101];
	int sum[101][101] = { 0 };
	int n, m, i, j, ni, nj, k, ans = 0;
	cin >> n >> m;
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++)mine[i][j] = getchar();
		getchar();
	}
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			if(mine[i][j]=='?')
				for (k = 0; k < 8; k++) {
					ni = i + dx[k];
					nj = j + dy[k];
					if (ni >= 0 && ni < n && nj >= 0 && nj < m && mine[ni][nj] == '*') sum[i][j]++;
				}
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++)
			if (mine[i][j] == '*') putchar('*');
			else putchar(sum[i][j] + 48);
		putchar('\n');
	}

}
void ArrayStructureProgramming::P1870401() {
	char num[21][30], temp1[60], temp2[60];
	int n, i, j;
	cin >> n;
	for (i = 1; i <= n; i++)cin >> num[i];
	for(i=1;i<n;i++)
		for (j = i + 1; j <= n; j++) {
			strcpy(temp1, num[i]);
			strcpy(temp2, num[j]);
			strcat(temp1, num[j]);  // 将字符串temp1和num[j]连接
			strcat(temp2, num[i]);
			if (strcmp(temp1, temp2) < 0) {
				strcpy(temp1, num[i]);
				strcpy(num[i], num[j]);
				strcpy(num[j], temp1);
			}
		}
	for (i = 1; i <= n; i++)cout << num[i];
	cout << endl;
}