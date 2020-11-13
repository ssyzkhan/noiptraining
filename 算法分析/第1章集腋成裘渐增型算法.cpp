#pragma warning(disable:4996)
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <cstring>
#include <vector>
#include <list>
#include <iterator>
#include "INSERTIONSORT.h"
#include "第1章集腋成裘渐增型算法.h"


using namespace std;
void IncreamentalAlgorithm::P0180301() {
	int a[] = { 5,1,9,4,6,2,0,3,8,7 };
	INSERTIONSORT myIs;
	myIs.insertionSort<int*,greater<int>>(a, a + 10);
	copy(a, a + 10, ostream_iterator<int>(cout, " "));
	cout << endl;

	string b[] = { "Chongqing","ShangHai","AoMen","TianJin","BeiJing","xiangGang" };
	vector<string> vb = vector<string>(b, b + 6);
	myIs.insertionSort<vector<string>::iterator,greater<string>>(vb.begin(), vb.end());
	copy(vb.begin(), vb.end(), ostream_iterator<string>(cout, " "));
	cout << endl;

	double c[] = { 8.5,6.3,1.7,9.2,0.5,2.3,4.1,7.4,5.9,3.7 };
	list<double> lc = list<double>(c, c + 10);
	myIs.insertionSort<list<double>::iterator,less<double>>(lc.begin(), lc.end());
	copy(lc.begin(), lc.end(), ostream_iterator<double>(cout, " "));
	cout << endl;
}