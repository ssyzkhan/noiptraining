#pragma once
class PalindromeNumber {
private:
	int n, a[101], b[101];
	void init_private(int a[]);
	bool check_private(int a[]);
	void jia_private(int a[]);
public:
	PalindromeNumber();
	void init();
	bool check();
	void jia();
};