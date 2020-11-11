#pragma once
#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<string>
#define N 7

using namespace std;
class CHAPTER4 {
private:
	int s, maxx;
	int a[11];

	static const int n = 10;

	int i, j, h, m,nn, k, b[11];

	int aa, x, y, ok1, ok2;

	string aaa, t;
	int sum;

public:
	CHAPTER4();
	void P09001();
	int get_n();
	int P09002_co(int il);
	int P09103_fun(int x);
	/// <summary>
	/// 经典的阿克曼函数递归求解P9104_ack()
	/// </summary>
	/// <param name="m">int </param>
	/// <param name="n">int </param>
	/// <returns></returns>
	int P09104_ack(int m, int n); 
	void P09205();
	void P09206();
	void P09207();
	void P09308(int a, int b, int c, int d);
	void P09409();
	void P09410(int n);
	void P09411();
	int P09512_fun(char s[], char a, int n);
	void P09601();
	void P09702(int x,int y,int jk);
	void P09803();
	void P09904();
	void P10005();
	void P10006_find(int *a,int x);
	void P10006();
	void P10107();
	void P10208();
	void P10309();
	void P10410();
	void P10511();
	void P10511_solve(int number, int ndata, int* data, int s, int sign, int n);
};