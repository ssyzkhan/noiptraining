#include"Chapter4.h"
#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<string>

using namespace std;

CHAPTER4::CHAPTER4() {
    i = 0; j = 0; h = 0; m = 0; nn = 1234; k = 0;
    for (i = 0; i < 11; i++) b[i] = 0;

    aa = 100; x = 20; y = 20; ok1 = 5; ok2 = 0;

    aaa = " morning";
    sum = 0;

}
void CHAPTER4::P09001() {
    for (int i = 1; i <= 10; ++i)cin >> a[i];
    maxx = a[1]; s = a[1];
    for (int i = 2; i <= 10; ++i) {
        if (s < 0) s = 0;
        s = s + a[i];
        if (s > maxx)maxx = s;
    }
    printf("%d\n", maxx);
}

int CHAPTER4::get_n() {
    return n;
}

int CHAPTER4::P09002_co(int il) {
    int jl, sl;
    sl = n;
    for (int jl = n - 1; jl >= n - il + 1; --jl)
        sl = (sl * jl) / (n - jl + 1);
    return sl;
}
int CHAPTER4::P09103_fun(int x) {
    if ((x == 0) || (x == 1)) return 3;
    else return x - P09103_fun(x - 2);
}
int CHAPTER4::P09104_ack(int m, int n) {
    if (m == 0) return n + 1;
    else if (n == 0) return P09104_ack(m - 1, 1);
    else return P09104_ack(m - 1, P09104_ack(m, n - 1));
}
void CHAPTER4::P09205() {
    // scanf_s("%d", &nn);
    
    for (i = 1; i <= 10; i++) {
        m = nn; j = 11;
        while (m > 0) {
            j = j - 1; b[j] = m % 10; m = m / 10;
        }
        for (h = 1; h <= 10; h++) 
            nn = nn + b[h];
    }
    printf("%d\n", nn);
}
void CHAPTER4::P09206() {
    if ((x > y) || ((y != 20) && (ok1 == 0)) && (ok2 != 0))
        aa = 1;
    else if ((ok1 != 0) && (ok2 == 0))
        aa = -1;
    else
        aa = 0;
    cout << aa << endl;
}
void CHAPTER4::P09207() {
    j = 1;
    for (i = 2; i <= 7; i++)
        if (aaa[j] < aaa[i])
            j = i;
    j = j - 1;
    for (i = 1; i <= j; i++)
        printf("%c", aaa[i]);

}
void CHAPTER4::P09308(int a, int b, int c, int d) {
    int sum;
    a = a % 23;
    b = b % 28;
    c = c % 33;
    sum = a * 5544 + b * 14421 + c * 1288 - d;
    sum += 21252;
    sum %= 21252;
    if (sum == 0)
        sum = 21252;
    cout << sum << endl;
}

void CHAPTER4::P09409() {
    int i, j;
    char str1[] = "pig-is-stupid";
    char str2[] = "clever";
    str1[0] = 'd'; str1[1] = 'o';
    for (i = 7, j = 0; j < 6; i++, j++)
        str1[i] = str2[j];
    printf("%s\n", str1);
}
void CHAPTER4::P09410(int a) {
    int b;
    b = (a * (a * a)) + 1;
    if (b % 3 == 0)b = b / 3;
    if (b % 5 == 5)b = b / 5;
    if (b % 7 == 0)b = b / 7;
    if (b % 9 == 0)b = b / 9;
    if (b % 11 == 0)b = b / 11;
    if (b % 13 == 0)b = b / 13;
    if (b % 15 == 0)b = b / 15;
    printf("%d\n", (100 * a - b) / 2);
}
void CHAPTER4::P09411() {
    char str[20] = "Today-is-terrible!";
    int i;
    for (i = 6; i <= 10; i++)
        if (str[i] == '-')str[i - 1] = 'x';
    for (i = 12; i >= 0; i--)
        if (str[i] == 't')str[i + 1] = 'e';
    printf("%s\n", str);
}
int CHAPTER4::P09512_fun(char s[], char a, int n) {
    int j;
    j = n;
    while (a < s[j] && j>0)j--;
    return j;
}
void CHAPTER4::P09601() {
    const int n = 4;
    int i, j, il, jl, k, s, t, sl, l, swapp;
    char temp, a[n * 2 + 1];
    for (int i = 1; i <= 2 * n; ++i)a[i] = getchar();
    s = 0; t = 0;
    for (int i = 1; i <= n * 2; ++i)
        if (a[i] == '1')s++;
        else if (a[i] == '0')t++;
    if (s != n || t != n)printf("error");
    else {
        sl = 0;
        for (int i = 1; i <= 2 * n - 1; ++i)
            if (a[i] != a[i + 1])sl++;
        printf("jamp = %d\n", sl); swapp = 0;
        for(int i=1;i<=2*n-1;++i)
            for(int j=i;j<=2*n;++j)
                if (a[i] != a[j]) {
                    temp = a[i]; a[i] = a[j]; a[j] = temp;
                    s = 0;
                    for (int l = 1; l <= 2 * n - 1; ++l) {
                        if (a[l] != a[l + 1])s++;
                    }
                    if (s > swapp) {
                        swapp = s; il = i; jl = j;
                    }
                    temp = a[i]; a[i] = a[j]; a[j] = temp;
                }
        if (swapp > 0)printf("maxswap=%d i=%d j=%d", swapp - sl, il, jl);
    }

}
void CHAPTER4::P09702(int x, int y, int jk) {
    int a[21];
    int yl, jl, g, e;
    for (jl = 1; jl <= 20; ++jl)a[jl] = 0;
    while (y != 0) {
        yl = y % 10;
        y = y / 10;
        while (yl != 0) {
            g = x;
            for (e = jk; e > 1; --e) {
                g = g + a[e];
                a[e] = g % 10;
                g = g / 10;
            }
            yl = yl - 1;
        }
        jk = jk - 1;
    }
    jl = 1;
    while (a[jl] == 0)jl = jl + 1;
    for (jk = jl; jk <= 20; ++jk)cout << " " << a[jk];
}
void CHAPTER4::P09803() {
    int i, j, k, a[101];
    for (i = 0; i <= 100; ++i)a[i] = i;
    for (k = 5; k >= 2; --k) {
        for (i = 1; i <= 100; ++i)if (i % k == 0)a[i] = 0;
        for(i=1;i<=99;++i)
            for(j=1;j<=100-i;++j)
                if (a[j] > a[j + 1]) {
                    a[j] = a[j] + a[j + 1];
                    a[j + 1] = a[j] - a[j + 1];
                    a[j] = a[j] - a[j + 1];
                }
    }
    j = 1;
    while (a[j] == 0 && j < 100)j = j + 1;
    for (i = j; i <= 100; ++i)a[0] = a[0] + a[i];
    cout << a[0] << endl;
    cout << getchar() << endl;
}
void CHAPTER4::P09904() {
    int b[105], c[105];
    bool pl;
    int i, j, j1, j2, p, q;
    cin >> q >> p; j = 1; pl = true; b[j] = q; j1 = 0;
    while (q > 0 && pl) {
        j1++; c[j1] = q * 10 / p; q = q * 10 - c[j1] * p;
        if (q > 0) {
            j2 = 1;
            while (b[j2] != q && j2 <= j)j2++;
            if (b[j2] == q) {
                pl = false; cout << "0.";
                for (i = 1; i <= j2 - 1; i++)cout << c[i];
                cout << '{';
                for (i = j2; i <= j1; i++)cout << c[i];
                cout << '}';
            }
            else { j++; b[j] = q; }
        }
        if (q == 0) {
            cout << "0.";
            for (i = 1; i <= j1; i++)cout << c[i];
            cout << endl;
        }
    }
    cout << endl;
}
void CHAPTER4:: P10005() {
    int f, a[9];
    for (int i = 1; i <= 8; i++) {
        f = i % 2;
        if (f == 0)a[i] = 0;
        else a[i] = 1;
        for (int j = 1; j <= i; j++)
            if (f == 0)a[i] = a[i] + j;
            else a[i] = a[i] * j;
    }
    for (int i = 1; i <= 8; i++)
        printf("%5d", a[i]);
    printf("\n");
    printf("%c\n", getchar());
}
void CHAPTER4::P10006_find(int *a,int x) {
    int s, il, jl;
    bool p;
    il = 0;
    p = 1;
    while (p) {
        il = il + 1;
        s = 0;
        for (jl = 1; jl <= n; jl++)
            if (a[jl] > a[il])s = s + 1;
        if (s == x - 1) {
            printf("%d\n", a[il]);
            p = 0;
        }
    }
}
void CHAPTER4::P10006() {
    int n, k, i, a[41];
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    P10006_find(a,k);
    P10006_find(a,n - k);  
}
void CHAPTER4::P10107() {
    int a[21], i, j, k, n, l0, l1, lk;
    cin >> n >> k;
    for (i = 0; i <= n - 1; ++i)a[i] = i + 1;
    a[n] = a[n - 1];
    l0 = n - 1;
    lk = n - 1;
    for (i = 1; i <= n - 1; ++i) {
        l1 = l0 - k;
        if (l1 < 0)l1 = l1 + n;
        if (l1 == lk) {
            a[l0] = a[n];
            lk = lk - 1;
            a[n] = a[lk];
            l0 = lk;
        }
        else {
            a[l0] = a[l1];
            l0 = l1;
        }
    }
    a[l0] = a[n];
    for (i = 0; i <= n - 1; ++i)printf("%4d", a[i]);
    printf("\n");
}
void CHAPTER4::P10208() {
    int a[11], i, j, s, sp1;
    bool p;
    sp1 = 1;
    a[1] = 2;
    j = 2;
    while (sp1 < 10) {
        j = j + 1;
        p = true;
        for (i = 2; i <= j - 1; ++i)
            if (j % i == 0)p = false;
        if (p) {
            sp1 = sp1 + 1;
            a[sp1] = j;
        }
    }
    j = 2;
    p = true;
    while (p) {
        s = 1;
        for (i = 1; i <= j; ++i)s = s * a[i];
        s = s + 1;
        for (i = 2; i <= s - 1; ++i)
            if (s % i == 0)p = false;
        j = j + 1;
    }
    printf("%d\n\n", s);
    printf("%c", getchar());
}
void CHAPTER4::P10309() {
    int a[21], i, j, p, n, q, s;
    cin >> p >> n >> q;
    j = 21;
    while (n > 0) {
        j = j - 1;
        a[j] = n % 10;
        n = n / 10;
    }
    s = 0;
    for (i = j; i <= 20; ++i)s = s * p + a[i];
    printf("%d\n", s);
    j = 21;
    while (s > 0) {
        j = j - 1;
        a[j] = s % q;
        s = s / q;
    }
    for (i = j; i <= 20; ++i)printf("%d", a[i]);
    printf("\n");
}
void CHAPTER4::P10410() {
    int u[4], a, b, c, x, y, z;
    cin >> u[0] >> u[1] >>u[2] >> u[3];
    a = u[0] + u[1] + u[2] + u[3] - 5;
    b = u[0] * (u[1] - u[2] / u[3] + 8);
    c = u[0] * u[1] / u[2] * u[3];
    x = (a + b + 2) * 3 - u[(c + 3) % 4];
    y = (c * 100 - 13) / a / (u[b % 3] * 5);
    if ((x + y) % 2 == 0)z = (a + b + c + x + y) / 2;
    z = (a + b + c - x - y) * 2;
    printf("%d\n", x + y - z);
}
void CHAPTER4::P10511() {

}
void CHAPTER4::P10511_solve(int number,int ndata,int* data,int s, int sign, int n) {
    int i;
    for (i = s; i < ndata; i++) {
        sum += sign * (number / n / data[i]);
        P10511_solve(number,ndata,data,i + 1, -sign, n * data[i]);
    }
}