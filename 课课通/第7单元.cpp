#pragma warning(disable:4996)
#include <iostream>
#include<cstdio>
#include<cstdlib>
#include<iomanip>
#include<algorithm>
#include "µÚ7µ¥Ôª.h"
#define MAXN 1001
using namespace std;

void Unit7::P2470101() {
	int a[MAXN], b[MAXN];
	memset(a, 0, sizeof(a));
	memset(b, 0, sizeof(b));
	freopen("party.in", "r", stdin);
	freopen("party.out", "w", stdout);
	int n, m, k, t1, t2;
	cin >> m >> n >> k;
	for (int i = 1; i <= m; i++)a[i] = i;
	for (int i = 1; i <= n; i++)b[i] = i;
	t1 = m; t2 = n;
	int x = 0, y = 0;
	for (int i = 1; i <= k; i++) {
		x++; y++;
		cout << a[x] << " " << b[y] << endl;
		t1++;
		a[t1] = a[x];
		t2++;
		b[t2] = b[y];
	}
}
void Unit7::P2480201() {
	int a[MAXN], b[MAXN];
	memset(a, 0, sizeof(a));
	memset(b, 0, sizeof(b));
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, k, p, front = 0, tail, q = 0;
	cin >> n >> k >> p;
	for (int i = 1; i <= k; i++) a[i] = i;
	tail = k;
	for (int i = 1; i <= k / n; i++) {
		for (int j = 1; j <= n; j++) {
			front++;
			if (j == n)b[++q] = a[front];
			for (int t = 1; t <= p; t++) {
				front++;
				a[++tail] = a[front];
			}
		}
	}
	sort(b + 1, b + q + 1);
	for (int i = 1; i <= k / n; i++)
		cout << b[i] << endl;
}
void Unit7::P2480202() {
	int nxt[MAXN];
	bool ans[MAXN];
	memset(nxt, 0, sizeof(nxt));
	memset(ans, 0, sizeof(ans));
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, k, m;
	cin >> n >> k >> m;
	for (int i = 1; i < k; i++)nxt[i] = i + 1;
	nxt[k] = 1;
	int p = k;
	for (int i = 1; i <= k / n; i++) {
		for (int j = 1; j < n; j++) {
			nxt[p] = nxt[nxt[p]];
			for (int l = 1; l <= m; l++) p = nxt[p];
		}
		ans[nxt[p]] = true;
		nxt[p] = nxt[nxt[p]];
		for (int l = 1; l <= m; l++) p = nxt[p];
	}
	for (int i = 1; i <= k; i++)
		if (ans[i]) cout << i << endl;
}
void Unit7::P2530101() {
	int q[10001];
	freopen("blah.in", "r", stdin);
	freopen("blah.out", "w", stdout);
	int a, n, x, two=1, three=1, rear=1;
	cin >> a >> n;
	q[1] = a;
	while (rear != n) {
		if (2 * q[two] + 1 > 3 * q[three] + 1) {
			rear++;
			q[rear] = 3 * q[three] + 1;
			three++;
		}
		else if (2 * q[two] + 1 < 3 * q[three] + 1) {
			rear++;
			q[rear] = 2 * q[two] + 1;
			two++;
		}
		else {
			rear++;
			q[rear] = 3 * q[three] + 1;
			two++; three++;
		}
	}
	cout << q[n] << endl;
}
int Unit7::P2540201() {
	int q[1001][2], a[11][11];
	bool p[110];
	freopen("relationship.in", "r", stdin);
	freopen("relationship.out", "w", stdout);
	int i, j, r, f, tmp, x, y, n;
	memset(q, 0, sizeof(q));
	memset(a, 0, sizeof(a));
	memset(p, true, sizeof(p));
	cin >> n >> x >> y;
	for (i = 1; i <= n; i++)
		for (j = 1; j <= n; j++)
			cin >> a[i][j];
	f = r = 1;
	q[f][0] = x; q[f][1] = 0;
	p[x] = false;
	while (f <= r) {
		tmp = q[f][0];
		if (tmp == y) {
			cout << q[f][1] - 1 << endl;
			return 0;
		}
		for(i=1;i<=n;i++)
			if (a[i][tmp] == 1 && p[i]) {
				r++;
				q[r][0] = i;
				q[r][1] = q[f][1] + 1;
				p[i] = false;
			}
		f++;		
	}
	return 0;
}
void Unit7::P2560301() {
	const int N = 110;
	int a[N][N], q[N], h[N];
	memset(a, 0, sizeof(a));
	memset(q, 0, sizeof(q));
	memset(h, 0, sizeof(h));
	freopen("graph_bfs.in", "r", stdin);
	freopen("graph_bfs.out", "w", stdout);
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			cin >> a[i][j];
	cout << 1;
	q[1] = 1; h[1] = 1;
	for (int l = 1, r = 1; l <= r; l++) {
		int u = q[l];
		for(int i=1;i<=n;i++)
			if (a[u][i] && !h[i]) {
				cout << '-' << i;
				q[++r] = i;
				h[i] = 1;
			}
	}
}