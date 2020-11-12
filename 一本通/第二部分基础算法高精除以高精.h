#pragma once
class HighPrecisionDividedByHighPrecision {
private:
	int a[101], b[101], c[101];
	void init_private(int a[]);
	void print_private(int a[]);
	void chugao_private(int a[], int b[], int c[]);
	int compare_private(int a[], int b[]);
	void jian_private(int a[], int b[]);
	void numcpy_private(int p[], int q[], int det);
public:
	HighPrecisionDividedByHighPrecision();
	void init();
	void print();	
	void chugao();
};